#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Mridul");
    q.push("Raghav");
    q.push("Sanskar");

    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;

    q.push("Mridul");
    q.push("Madhuram");
    cout<<endl<<"Elements of Queue: "<<endl;
    while(!q.empty())
    {
        cout<<" "<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
