#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
    for(int i:v)
        cout<<i<<" ";
        cout<<endl;
}
int main()
{
    vector<int> v;

    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(4);

    cout << "Size     -> " << v.size()     << endl;
    cout << endl << "Front Element -> " << v.front() << endl;
    cout << "Back Element  -> " << v.back()  << endl << endl;

    cout << "BEFORE POP" << endl;
    print(v);
    v.pop_back();
    cout << "AFTER POP" << endl;
    print(v);
    v.push_back(4);
    cout<<"Pushing Back 4             : "; print(v);
    v.erase(v.end()-1);
    cout<<"Using v.erase(v.end()-1)   : "; print(v);
    v.erase(v.begin());
    cout<<"Using v.erase(v.begin())   : "; print(v);

    cout<<endl<<"BEFORE CLEARING :"<<endl;
    cout<<"Size: "<<v.size()<<" | Capacity: "<<v.capacity()<<endl;
    v.clear();
    cout<<"AFTER CLEARING :"<<endl;
    cout<<"Size: "<<v.size()<<" | Capacity: "<<v.capacity()<<endl;
    return 0;
}
