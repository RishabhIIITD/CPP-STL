#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    // for loop
    for(int i = 0 ; i < n ; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    // while loop
    int i = 0;
    while(i < n)
    {
        cout<<v[i]<<" ";
        i++;
    }
    cout<<endl;

    // do while loop
    int idx = 0;
    do
    {
        cout<<v[idx]<<" ";
        idx++;
    }while(idx < n);
    cout<<endl;

    // for-each loop
    for(int element : v)
        cout<<element<<" ";
    cout<<endl;

    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;

    // iterator
    vector<int> :: iterator it;
    for(it = v.begin() ; it != v.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    for(auto it = v.begin() ; it != v.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
