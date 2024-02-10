#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	void f(int ind,int sum,vector<int> &arr,int n , vector<int> &res){
		if(ind==n){
			res.push_back(sum);
			return;
		}

		f(ind+1,sum,arr,n,res);
		f(ind+1,sum+arr[ind],arr,n,res);
	}

	vector<int> SubsetSum(vector<int>arr,int n){
		vector<int> res;
		f(0,0,arr,n,res);
		sort(res.begin(),res.end());
		return res;
	}
};


int main(){
	Solution solution;
	vector<int> arr = {2,3};
	int n =2;
	
	vector<int> result = solution.SubsetSum(arr,n);
	for(int val:result){
		cout<<val<<" ";
	}
	return 0;
}