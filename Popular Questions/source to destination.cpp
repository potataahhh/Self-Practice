#include<iostream>
using namespace std;

int path(int s, int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    
    int c=0;
    for(int i=1;i<=6;i++)
    {
        c += path(s+i,e);
    }
    return c;
    
}

int main()
{
    
    cout<<path(0,3)<<endl;
    return 0;
}