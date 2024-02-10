#include<iostream>
#include<vector>
using namespace std;
void print_by_array_method(vector<int> &V)
{
    for(int i=0; i<V.size(); i++)
        cout << V[i] << " " ;
    cout << endl;
}

int main()
{
    vector<int> a(5,6);
    cout<<"Elements of vector a:"<<endl;
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;

    //now to copy one vector to another vector:
    vector<int> v(a);
    cout<<"Elements of vector v which has copied the elements of vector a:"<<endl;
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    //when creating a vector if the element used to fill the vector is not
    // mentioned then the vector gets automatically filled by 0
    vector<int> b(5);
    cout<<"Elements of vector b:"<<endl;
    for(int i:b)
        cout<<i<<" ";
    cout<<endl<<endl;
    cout<<"ELEMENTS OF VECTOR V: ";
    print_by_array_method(v);
    cout<<"ELEMENTS OF VECTOR B: ";
    print_by_array_method(b);
    return 0;
}
