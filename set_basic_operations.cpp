#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        s.insert(element);
    }

    // for-each loop
    for(int element : s)
        cout<<element<<" ";
    cout<<endl;
    return 0;
}
