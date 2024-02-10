#include<bits/stdc++.h>
using namespace std;

class Person{
public:

	//base contructor
	Person(){
		cout<<"Person is called"<<endl;		
	}

	Person(int x){
		cout<<"Person is called"<<endl;
	}
};

// use of virtual keyword to remove ambiguity from Diamond problem

class Father: virtual public Person{
public:
	Father(int x):Person(x){
		cout<<"Father is called"<<endl;
	}
};

class Mother: virtual public Person{
public:
	Mother(int x):Person(x){
		cout<<"Mother is called"<<endl;
	}
};

class Child : public Father , public Mother{
public:
	Child(int x):Father(x),Mother(x){
		cout<<"Child is called"<<endl;
	}
};


int main(){
	Child child(30);
}

