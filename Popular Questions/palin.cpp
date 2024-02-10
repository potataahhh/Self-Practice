#include <bits/stdc++.h>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input3.txt","r",stdin);
  freopen("output3.txt","w",stdout);
#endif

        int t;
        cin>>t;
        while(t--)
        {
          int n, num, digit, rev = 0;

cin >> num;

n = num;

do
{
   digit = num % 10;
   rev = (rev * 10) + digit;
   num = num / 10;
}
while (num != 0);

if (n == rev)
   cout << "Palindrome.";
else
   cout << "not Palindrome.";
        }
        return 0;
}
