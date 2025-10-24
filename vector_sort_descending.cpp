#include<iostream>
#include<vector>
#include<algorithm>
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

    cout<<"Before sorting"<<endl;
    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;

    // Sorting in descending order
    sort(v.begin(), v.end(), greater<int>());
    
    cout<<"After sorting"<<endl;
    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;
    return 0;
}
