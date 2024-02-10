// with using inbuilt function (SWAP) and no extra space

#include<bits/stdc++.h>
using namespace std;

void rev(string &str){
	int n = str.length();
	int left =0;
	int right = n-1;

	while(left<right){
		swap(str[left],str[right]);

		++left;
		--right;
	}
}


int main(){

	string str = "AYUSH";
	int n = str.length();

	rev(str);
	cout<<str;

	return 0;
}



// without using in-built function and extra space

#include <bits/stdc++.h>
using namespace std;

string rev(string str1, int start , int end){

	while(start<end){

		str1[start] ^= str1[end];
		str1[end] ^= str1[start];
		str1[start] ^= str1[end];

		++start;
		--end;
	}
	return str1;
}

int main(){
	string str = "BABLU";
	cout<< rev(str,0,4);

	return 0;
}


