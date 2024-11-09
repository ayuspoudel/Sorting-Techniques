#include <iostream>
#include <vector>
#include "00bubblesort.hpp"

void printVector(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Test Case 1: Random unsorted array
    std::vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    bubbleSort(nums1);
    std::cout << "Sorted Test Case 1: ";
    printVector(nums1);

    // Test Case 2: Already sorted array
    std::vector<int> nums2 = {0, 1, 2, 3, 4, 5};
    bubbleSort(nums2);
    std::cout << "Sorted Test Case 2: ";
    printVector(nums2);

    // Test Case 3: Reverse sorted array
    std::vector<int> nums3 = {5, 4, 3, 2, 1, 0};
    bubbleSort(nums3);
    std::cout << "Sorted Test Case 3: ";
    printVector(nums3);

    // Test Case 4: All elements are the same
    std::vector<int> nums4 = {1, 1, 1, 1, 1};
    bubbleSort(nums4);
    std::cout << "Sorted Test Case 4: ";
    printVector(nums4);

    // Test Case 5: Array with negative numbers
    std::vector<int> nums5 = {3, -1, 2, -5, 4, 0};
    bubbleSort(nums5);
    std::cout << "Sorted Test Case 5: ";
    printVector(nums5);

    // Test Case 6: Array with a single element
    std::vector<int> nums6 = {42};
    bubbleSort(nums6);
    std::cout << "Sorted Test Case 6: ";
    printVector(nums6);

    // Test Case 7: Array with only two elements
    std::vector<int> nums7 = {5, 2};
    bubbleSort(nums7);
    std::cout << "Sorted Test Case 7: ";
    printVector(nums7);

    // Test Case 8: Array with zeros and large numbers
    std::vector<int> nums8 = {0, 1000, 500, 100, 0, 10};
    bubbleSort(nums8);
    std::cout << "Sorted Test Case 8: ";
    printVector(nums8);

    return 0;
}
