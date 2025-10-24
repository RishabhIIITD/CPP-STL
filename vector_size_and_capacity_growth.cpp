#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Vector size = "<<v.size()<<endl;
    cout<<"Vector capacity = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Vector size = "<<v.size()<<endl;
    cout<<"Vector capacity = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Vector size = "<<v.size()<<endl;
    cout<<"Vector capacity = "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Vector size = "<<v.size()<<endl;
    cout<<"Vector capacity = "<<v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"Vector size = "<<v.size()<<endl;
    cout<<"Vector capacity = "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Vector size = "<<v.size()<<endl;
    cout<<"Vector capacity = "<<v.capacity()<<endl;

    return 0;
}
