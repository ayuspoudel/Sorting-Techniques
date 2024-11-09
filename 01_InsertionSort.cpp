#include "01_InsertionSort.hpp"

ListNode* Solution::insertionSortList(ListNode* head) {
    ListNode* dummy = new ListNode(INT_MIN); // Dummy node to act as a new head
    ListNode* sorted = head; // Points to the unsorted portion of the list

    while (sorted != nullptr) {
        ListNode* unsorted = sorted; // Node to be inserted
        sorted = sorted->next;       // Move to the next unsorted node

        // Find the correct position in the sorted part of the list
        ListNode* prev = dummy;
        while (prev->next != nullptr && prev->next->val < unsorted->val) {
            prev = prev->next;
        }

        // Insert unsorted node in its correct position
        unsorted->next = prev->next;
        prev->next = unsorted;
    }

    return dummy->next; // The head of the sorted list
}
