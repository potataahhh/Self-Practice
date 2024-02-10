#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Mridul Rastogi");
    s.push("Raghunandan Rastogi");
    s.push("Sanskar Rastogi");
    s.push("Madhuram Rastogi");

    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Stack Empty? => "<<s.empty()<<endl<<endl;

    cout<<"Elements of stack: "<<endl;
    while(!s.empty())
    {
        cout<<" "<<s.top()<<endl;;
        s.pop();
    }
    cout<<"Stack Empty? => "<<s.empty()<<endl;
    return 0;
}
