#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    pair<int, int> p;
    int a,b;
    cin>>a>>b;
    p = make_pair(a,b);
    cout<<p.first<<" "<<p.second;
    return 0;
}
