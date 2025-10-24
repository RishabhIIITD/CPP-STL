#include<iostream>
#include<vector>
#include<algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        auto it = m.find(element);
        if(it == m.end())
            m[element] = 1;
        else
            m[element]++;
    }

    for(pair<int,int> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;
    return 0;
}
