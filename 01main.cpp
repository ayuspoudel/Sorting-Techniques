#include <iostream>
#include "01_InsertionSort.hpp"

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example test case: creating an unsorted linked list
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution solution;
    ListNode* sortedHead = solution.insertionSortList(head);

    std::cout << "Sorted list: ";
    printList(sortedHead);

    // Free the allocated memory for the sorted list
    while (sortedHead) {
        ListNode* temp = sortedHead;
        sortedHead = sortedHead->next;
        delete temp;
    }

    return 0;
}
