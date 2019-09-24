 
#include<iostream>
using namespace std;
int main(void){
 int a,b,n,x=0,y=0;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>a;
    x=x-a;
    cin>>b;
    x=x+b;
    if(x>y){
        y=x;
    }
 
 }
 cout<<y;
 
}
