#include<iostream>
#include<vector>
using namespace std;

// Passing vector by value

void fun(vector<int> v)
{
    v.push_back(6);
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    fun(v);
    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;
    return 0;
}
