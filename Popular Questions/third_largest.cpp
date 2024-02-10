#include <iostream>
#include <climits>

int thirdLargest(int arr[], int size) {
    if (size < 3) {
        return INT_MIN; // Return a special value to indicate an error or absence of a third largest element.
    }

    int first = arr[0];
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    return third;
}

int main() {
    int arr[] = {12, 5, 17, 9, 30, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int thirdLargestElement = thirdLargest(arr, size);

    if (thirdLargestElement != INT_MIN) {
        std::cout << "The third largest element is: " << thirdLargestElement << std::endl;
    }

    return 0;
}
