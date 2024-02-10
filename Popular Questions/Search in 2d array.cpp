#include<iostream>
using namespace std;

int main()
{
    int n.m;
    cin>>n>>m;
    int target;
    cin>>target;

    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int r=0;
    int c=m-1;
    bool found = false;
    while(r<n, c >=m-1 )
    {
        if(a[r][c] == target)
        {
            found=true;
        }
        else if(a[r][c]>target)
        {
             c--;
        }    
        else
        {
            r++;
        }
    }
    if(found)
    cout<<"Element found"<<endl;
    else{
        cout<<"Not found"<<endl;
    }
}    
