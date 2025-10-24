#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> m;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        m[element]++;
    }

    for(pair<int,int> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;
    return 0;
}
