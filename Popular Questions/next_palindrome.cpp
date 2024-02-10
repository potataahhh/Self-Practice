#include<bits/stdc++.h>
using namespace std;

bool isPal(int num){
	int original = num;
	int rev = 0;

	while(num>0){
		int dig = num%10;
		rev = rev*10+dig;
		num/=10;
	}

	return original == rev;
}


int nextPal(int num){
	while(true){
		num++;
		if(isPal(num)){
			return num;
		}
	}
} 

int main(){


	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input3.txt","r",stdin);
  freopen("output3.txt","w",stdout);
#endif

	int num ;
	cin>>num;

	if(isPal(num)){
		cout<<num<<" is a palindrome"<<endl;
	}
	else{
		cout<<num<<" is not a palindrome"<<endl;


		int next = nextPal(num);
		cout<<next<<" will be the next palindrome"<<endl;
	}


	return 0;
}