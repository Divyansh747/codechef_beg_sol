#include <iostream>
#include<math.h>
using namespace std;

int main() {
int T,V1,V2,N;
cin>>T;
for(int i=0;i<T;i++){
    cin>>N;
    cin>>V1;
    cin>>V2;
    float t1,t2;
    t1=(sqrt(2)*N)/V1;
    t2=((2.0*N)/V2);
    //cout<<t1<<endl;
    //cout<<t2<<endl;
    if(t1<t2){
        cout<<"Stairs"<<endl;
    }else{
        cout<<"Elevator"<<endl;
    }
}
	return 0;
}
