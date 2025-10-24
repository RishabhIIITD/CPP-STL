#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_set<int> s;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        s.insert(element);
    }

    cout<<"Number of unique elements = "<<s.size();
    return 0;
}
