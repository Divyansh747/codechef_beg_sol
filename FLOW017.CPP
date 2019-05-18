#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        vector<int>num;
        int N=3;
        while(N--)
        {
            int data;
            cin>>data;
            num.push_back(data);
        }

        sort(num.begin(),num.end());
        cout<<num[1]<<endl;
    }
}
