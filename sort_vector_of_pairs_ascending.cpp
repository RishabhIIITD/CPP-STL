#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end());

    for(pair<int,int> p : v)
        cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
