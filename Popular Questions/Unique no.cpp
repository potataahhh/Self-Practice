#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xors=0;
    for(int i=0;i<n;i++)
    {
        xors=xors^arr[i]
    }
    retunr xors;
}

int main()
{
    int arr[]={1,2,3,2,1};
    cout<<unique(arr,5)<<endl;

    return 0;
}