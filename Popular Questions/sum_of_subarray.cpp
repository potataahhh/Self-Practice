#include<bits/stdc++.h>
using namespace std;

long int sumSub(int arr[],int n){

	int res=0,temp;

	for(int i=0;i<n;i++){
		temp=0;
		for(int j=i;j<n;j++){
			temp+=arr[j];
			res+=temp;
		}
	}
	return res;
}

int main(){
	int arr[] = {1,2,3,4};

	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sumSub(arr,n)<<endl;

	return 0;

	}