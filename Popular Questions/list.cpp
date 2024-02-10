#include<iostream>
#include<list>
using namespace std;
void print(list<int> a)
{
    cout<<" Elements: ";
    for(int i:a)
        cout<<i<<", ";
    cout<<endl;
}
int main()
{
    cout<<"New list L created."<<endl;
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.push_back(-10);

    print(l);
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase: "<<endl;
    print(l);
    cout<<"Size of list: "<<l.size()<<endl;

    cout<<endl<<"New list N created."<<endl;
    list<int> n(5,100);
    print(n);

    cout<<endl<<"Now BEFORE erasing the whole list: "<<endl;
    cout<<"Size of the list: "<<n.size()<<endl;

    n.erase(n.begin(), n.end());
    cout<<"Now AFTER erasing the whole list: "<<endl;
    cout<<"Size of the list: "<<n.size()<<endl;
    print(n);
    return 0;
}
