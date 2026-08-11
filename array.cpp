
#include <iostream>

// Function to perform linear sort
void linearSort(int arr[], int size) {
    // Outer loop moves the boundary of the sorted subarray
    for (int i = 0; i < size - 1; i++) {
        // Inner loop compares the current element with the rest of the array
        for (int j = i + 1; j < size; j++) {
            // Swap if the element on the right is smaller than the element on the left
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);

    // Call the sorting function
    linearSort(arr, size);

    std::cout << "Sorted array:   ";
    printArray(arr, size);

    return 0;
}
