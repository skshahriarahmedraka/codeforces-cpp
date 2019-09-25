 
#include<iostream>
using namespace std;
int main(void)
{
    int s,n,q;
    string p="YES";
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
        if(x[i]<x[j]){
            q=x[i];
            x[i]=x[j];
            x[j]=q;
            q=y[i];
            y[i]=y[j];
            y[j]=q;
        }
            }
    }
 
    for(int i=0;i<n;i++){
        if(x[i]<s){
            //p="YES";
 
            s=s+y[i];
        }
        else {
        p="NO";
        break;
        }
    }
    cout<<p<<endl;
}
