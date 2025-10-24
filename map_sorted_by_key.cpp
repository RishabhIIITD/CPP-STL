#include<iostream>
#include<vector>
#include<algorithm>
#include <map>
using namespace std;

int main()
{
    map<int,char> m;
    m[3] = 'c';
    m[1] = 'a';
    m.insert({5,'e'});
    m.insert(make_pair(4,'d'));
    m[2] = 'b';

    // for-each loop
    for(pair<int,char> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;

    for(auto p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;

    // iterator
    for(auto it = m.begin() ; it != m.end() ; it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;
    cout<<endl;

    for(auto it = m.begin() ; it != m.end() ; it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
    return 0;
}
