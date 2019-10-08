#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int data;
    vector<int>numb,result;
        for(int i=0;i<N;i++)
    {   
        cin>>data;
        numb.push_back(data);
    }
        vector<int>::iterator i,j;
    for(i=numb.begin();i<numb.end();i++)
    {
        for(j=numb.begin();j<numb.end();j++)
        {
            int snum;
            snum=((*i)%(*j));
            result.push_back(snum);
        }
    }
    sort(result.begin(),result.end());
    cout<<result.back();
    
    return 0;
}
