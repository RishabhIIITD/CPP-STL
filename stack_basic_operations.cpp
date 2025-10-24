#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        st.push(element);
    }

    cout<<"Stack size = "<<st.size()<<endl;

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
