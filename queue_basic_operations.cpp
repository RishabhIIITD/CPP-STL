#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int> q;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        q.push(element);
    }

    cout<<"Queue size = "<<q.size()<<endl;
    cout<<"Front element = "<<q.front()<<endl;
    cout<<"Back element = "<<q.back()<<endl;

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
