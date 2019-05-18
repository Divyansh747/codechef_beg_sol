#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    vector<int>num;
    while(T--)
    {
        int data;
        cin>>data;
        num.push_back(data);
    }
    sort(num.begin(),num.end());
    vector<int>::iterator ptr;
    for(ptr=num.begin();ptr<num.end();ptr++)
    {
        cout<<*ptr<<endl;
    }
}
