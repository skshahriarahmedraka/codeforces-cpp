#include<iostream>
using namespace std;
int main(void)
{
    int a=0,a1,b1,b=0,n=0,m;
    for(int i=0;i<3;i++){
 
        cin>>a1;
        a=a+a1;
 
    }
    for(int i=0;i<3;i++){
        cin>>b1;
        b=b+b1;
    }
    cin>>m;
    if(a%5==0){
        n=a/5;
    }
    else n=a/5+1;
    if(b%10==0){
        n=n+b/10;
    }
    else n=n+b/10+1;
 
    if(n>m){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    return 0;
 
}
