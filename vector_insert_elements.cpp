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

    for(int element : v)
        cout<<element<<" ";
    cout<<endl;

    v.insert(v.begin() + 2, 50);
    
    for(int element : v)
        cout<<element<<" ";
    cout<<endl;

    // v.insert(v.begin() + 4, 100);
    v.insert(v.end() - 2, 100);
    
    for(int i = 0 ; i < v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
