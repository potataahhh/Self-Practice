
#include <iostream>
#include <vector>

using namespace std;

// method 1

void insertion_sort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the key in its correct position

        arr[j + 1] = key;
    }
}

// method 2

void insertion_sort(vector<int> &arr){
    int n = arr.size();


    for(int i=0;i<n;i++){
        int j =i;

        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main() {
    vector<int> myVector = {12, 11, 13, 5, 6};

    insertion_sort(myVector);

    cout << "Sorted array: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}
