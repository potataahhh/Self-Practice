#include<iostream>
#include<deque>
using namespace std;
int main()
{
    // Dequeue is a data structure in which the elements can be inserted and deleted from both the ends.
    deque<int> d;
    d.push_back(10);    //inserting element from right side
    d.push_front(20);   //inserting element from left side
    d.push_back(30);
    d.push_front(40);

    cout<<"Elements inserted in Dequeue d:"<<endl;
    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    d.pop_front();
    cout<<"Dequeue after POPPING element from FRONT"<<endl;
    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    d.pop_back();
    cout<<"Dequeue after POPPING element from BACK"<<endl;
    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    d.push_front(40);
    d.push_back(30);
    cout<<"Vector after inserting elements 40 & 30 at front & back:"<<endl;
    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    cout<<"Element present at the second index: "<<d.at(2)<<endl;

    cout<<"Element at front : "<<d.front()<<endl;
    cout<<"Element at back  : "<<d.back() <<endl;

    cout<<"Dequeue Empty or Not: "<<d.empty()<<endl;
    cout<<"Size Before Erase: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"Size After Erase : "<<d.size()<<endl;
    return 0;
}
