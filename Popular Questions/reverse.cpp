#include<iostream>
using namespace std;

int revint(int inp_number)
{
  int reversed_number =0 ;
  cin>>inp_number;

  while(inp_number>0)
  {
    int l = inp_number%10;
    reversed_number = reversed_number*10 +l;
    inp_number=inp_number/10;
  }
  return reversed_number<<endl;
}

int main()
{
  // int n , reversed_number =0 ;
  // cin>>n;
  //
  // while(n>0)
  // {
  //   int l = n%10;
  //   reversed_number = reversed_number*10 +l;
  //   n=n/10;
  // }
  // cout<<reversed_number<<endl;
  //
  // return 0;
  revint(int inp_number);
}
