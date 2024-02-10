#include<bits/stdc++.h>
using namespace std;

class heap{
public:
	int size;
	int arr[100];

	heap(){
		arr[0]=-1;
		size=0;
	}

	void insert(int val){

								//increase the size by 1 to insert new element

		size=size+1;

								// insert new element at last index

		int ind = size;
		arr[ind] = val;

		while(ind>1){

								// find the parent

			int parent = ind/2;

								// check for its correct position in the heap

			if(arr[ind]>arr[parent]){
				swap(arr[ind],arr[parent]);
				ind = parent;
			}
			else{
				return;
			}
		}
	}


	void deletefromHeap(){
		if(size==0) return;


								// put last element into first index 

		arr[1]=arr[size];

								// remove last element

		size--;

								// take root node to its correct position

		int ind =1;
		while(ind<size){
			int leftSub = 2*ind;
			int rightSub = 2*ind+1;

			if(leftSub<size && arr[ind]<arr[leftSub]){
				swap(arr[ind],arr[leftSub]);
				ind=leftSub;
			}
			else if(rightSub<size && arr[ind]<arr[rightSub]){
				swap(arr[ind],arr[rightSub]);
				ind=rightSub;
			}
			else{
				return;
			}
		}
	}

	void print(){
		for(int i=1;i<=size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};


// HEAPIFY function

void heapify(int arr[],int n ,int ind){

							// check for the current index

	int largest = ind;

							// find the left nodes

	int left = 2*ind;

							// find the right nodes

	int right = 2*ind+1;

							// compare if the node is smaller than the left node or not

	if(largest<=n && arr[largest]<arr[left]){

							// update the node

		largest=left;

	}

							// check for the right nodes 

	if(largest<=n && arr[largest]<arr[right]){

							//update the node

		largest=right;
	}

	if(largest!=ind){

							// if our element is not as same as before
							// that means it is updated
							// swap both nodes

		swap(arr[largest],arr[ind]);

							// call the function for further process

		heapify(arr,n,ind);
	}
}




int main(){

	heap h;

	h.insert(50);
	h.insert(55);
	h.insert(53);
	h.insert(52);
	h.insert(54);
	h.print();

	h.deletefromHeap();
	h.print();

	int arr[]={-1,54,53,55,52,50};
	int n = 5;

	for(int i=n/2;i>0;i--){
		heapify(arr,n,i);
	}

	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}
