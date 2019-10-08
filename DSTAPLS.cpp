#include<iostream>
using namespace std;
int main()
{
    int T;
    long long int N,K,appleInBox_u1,appleInBox_u2;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        cin>>K;
    
    if(K==1){
        cout<<"NO"<<endl;
    }
    else if((N/K)%K==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }

    return 0;
}
