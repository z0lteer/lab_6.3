#include <iostream>

int countNegativeElements(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = { -3, 5, -7, 8, -1, 0, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int negativeCount = countNegativeElements(arr, size);
    std::cout << "Elements: " << negativeCount << std::endl;
    return 0;
}
