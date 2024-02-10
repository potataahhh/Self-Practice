#include<bits/stdc++.h>
using namespace std;

void func(int i,vector<int> &ds , int arr[],int n)
{
	if(i==n)
	{
		for(auto it: ds)
		{
			cout<<it<<" ";
		}
		if(ds.size()==0)
		{
			cout<<"{}";
		}
		cout<<endl;
		return;
	}

	// not take condition i.e. element is not inserted in the vector
	func(i+1,ds,arr,n);

	// take conditiom i.e. element is inserted in the subsequence vector
	ds.push_back(arr[i]);
	func(i+1,ds,arr,n);
	ds.pop_back();
}


int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    #endif

    int arr[]={3,1,2};
    int n=3;
    vector<int> bs;
    func(0,bs,arr,n);

}