#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long int N;
    cin>>N;
    char num[N];
    int i=0;
    for(int s=0;s<N;s++)
    {    
        cin>>num[s];
    }
    for(int r=N-1;r>=0;r--)
    {
        if(num[r]=='1')
        {
            break;
              
        }
        i++;
    }

    cout<<i<<endl;

    
}
