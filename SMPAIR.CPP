#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int>num;
        while(N--)
        {
            int data;
            cin>>data;
            num.push_back(data);
        }
        sort(num.begin(),num.end());
        int sum=num[0]+num[1]; 
        cout<<sum<<endl;
        }
        
}
