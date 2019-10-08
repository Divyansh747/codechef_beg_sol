#include<iostream>
#include<iterator>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {   int N;
        cin>>N;
        vector<char>ch;
        while(N--)
        {   
            char data;
            cin>>data;
            ch.push_back(data);
        }
        int ctr=0;
        vector<char>::iterator ptr;
        for(ptr=ch.begin();ptr<ch.end()-1;ptr++)
        {
            if(*ptr!='a' && *ptr!='e'&& *ptr!='i'&& *ptr!='o'&& *ptr!='u')
            {
                if(*(ptr+1)=='a'||*(ptr+1)=='e'||*(ptr+1)=='i'||*(ptr+1)=='o'||*(ptr+1)=='u')
                {
                    ctr++;
                  
                }
            }
        }
        cout<<ctr<<endl;
    }
    
    return 0;
}
