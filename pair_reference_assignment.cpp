#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    pair<int, int> p1 = {1,2};
    pair<int, int> &p2 = p1;
    p2.first = 5;
    cout<<p1.first<<" "<<p1.second;
    return 0;
}
