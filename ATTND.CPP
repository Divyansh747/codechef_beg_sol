#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;
int main()
{
int T;                                  //no of test_cases
cin>>T;
while(T--)
{
    int N;                              //no of input names
    cin>>N;
    vector<string>f_name,l_name;        //vector string type
    while(N--)
    {
        string first,last;
        cin>>first;
        cin>>last;
        f_name.push_back(first);        //insert first_name
        l_name.push_back(last);         //insert last_name
    }

    for(int i=0;i<f_name.size();i++)
    {
        int flag=0;
        for(int j=0;j<f_name.size();j++)
        {
            if(f_name[j]==f_name[i] && i!=j)                //compare first name duplicacy
            {
                cout<<f_name[i]<<" "<<l_name[i]<<endl;      
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<f_name[i]<<endl;
        }
    }
}
}
