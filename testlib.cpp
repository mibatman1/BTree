#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>s={1,2,3};
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    reverse(s.begin(),s.end());
    for(auto i:s)
    {
        cout<<i<<" ";
    }
}