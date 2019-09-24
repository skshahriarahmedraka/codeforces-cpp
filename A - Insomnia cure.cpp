#include<iostream>
using namespace std;
int main(void)
{
    int k,l,m,n,i,j,q=0;
    long int d;
 
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    int d1[d];
    for(int i=1;i<=d;i++){
        d1[i-1]=i;
    }
   // j=k;
    for(i=1;i<=d;i++ ){
        if(d1[i-1]%k==0){
            d1[i-1]=0;
           // k=k+j;
        }
    }
    //j=l;
    for(i=1;i<=d;i++ ){
        if(d1[i-1]%l==0){
            d1[i-1]=0;
           // l=l+j;
        }
    }
    //j=m;
    for(i=1;i<=d;i++ ){
        if(d1[i-1]%m==0){
            d1[i-1]=0;
           // m=m+j;
        }
    }
   // j=n;
    for(i=1;i<=d;i++ ){
        if(d1[i-1]%n==0){
            d1[i-1]=0;
            //n=n+j;
        }
    }
    for(i=0;i<d;i++ ){
            // cout<<d1[i]<<endl;
        if(d1[i]==0) q++;
    }
    cout<<q<<endl;
 
 
}
