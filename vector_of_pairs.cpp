#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0 ; i < n ; i++)
        cin>>v[i].first>>v[i].second;

    // Using for loop
    for(int i = 0 ; i < n ; i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    cout<<endl;

    // Using for-each loop
    for(pair<int,int> p :v)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;
    return 0;
}
