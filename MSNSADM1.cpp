#include<iostream>
using namespace std;

int main(){
long long int T,N,A[100000],B[100000],S=0,x,i,j,k,l;
cin>>T;
for( k=0;k<T;k++){
cin>>N;
    for( i=0;i<N;i++){
        cin>>A[i];
    }    
    for( j=0;j<N;j++){
        cin>>B[j];
    }
    for( l=0;l<N;l++){
        x=((A[l]*20)-(B[l]*10));
       
       if(x<0){
           S=0;
       }else if(x>S){
           S=x;
       }
       //else{
       //    S=S;
       //}
    }
    cout<<S<<endl;
    S=0;
}
return 0;
}
