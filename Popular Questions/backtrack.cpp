#include<bits/stdc++.h>
using namespace std;

int func(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return 0;
    }
    func(i-1,sum+i);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      #ifndef ONLINE_JUDGE
      freopen("input3.txt","r",stdin);
      freopen("output3.txt","w",stdout);
      #endif

        int n;
        cin>>n;
        func(n,0);  
      
        
}