#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr,int n ,int i){
	int largest =i;
	int left = 2*i;
	int right = 2*i+1;

	if(left<n && arr[largest]<arr[left]){
		largest=left;
	}

	if(right<n && arr[largest]<arr[right]){
		largest=right;
	}

	if(largest!=i){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}

void heap_sort(vector<int>&arr){
	int n = arr.size();

	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}

	for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
	 vector<int> myVector = {12, 11, 13, 5, 6, 7};

    heap_sort(myVector);

    cout << "Sorted array: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}