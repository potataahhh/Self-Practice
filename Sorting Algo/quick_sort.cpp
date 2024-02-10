#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quicksort function
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Find the pivot index such that elements smaller than pivot are on the left,
        // and elements greater than pivot are on the right
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the subarrays
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> myVector = {10, 7, 8, 9, 1, 5};

    int n = myVector.size();

    quicksort(myVector, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}
