#include<iostream>
#include<set>
using namespace std;
void print(set<int> s)
{
    cout<<"Elements: ";
    for(auto i:s)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(5);
    s.insert(5);
// 5 1 6 5 3 5 => 5 1 6 3 => 1 3 5 6
    print(s);
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    //s.erase(s.begin()++);
    print(s);
    cout<<"4 is present or not => "<<s.count(4)<<endl;
    cout<<"5 is present or not => "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"Value present at itr => "<<*it<<endl;
    for (auto it = itr; it!=s.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;

}
