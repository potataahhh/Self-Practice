#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr,int target , int left , int right){
	if(left>right)
		return -1;
	
	int mid= left+(right-left)/2;

	if(arr[mid]==target){
		return mid;
	}
	else if(arr[mid]>target){
		return f(arr,target,left,mid-1);
	}
	else{
		return f(arr,target,mid+1,right);
	}
}


int main(){
	vector<int> arr = {2,5,6,12,16,19,25,28};
	int target = 5;
	int n = arr.size();

	int index = f(arr,target,0,n-1);

	if(index!=-1){
		cout<<"Found at index "<<index<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}
	return 0;
}