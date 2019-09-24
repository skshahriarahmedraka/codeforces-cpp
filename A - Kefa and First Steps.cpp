#include<iostream>
using namespace std;
int main(void)
{
    int a,q=1,r=1;
    cin>>a;
    int s[a];
    for(int i=0;i<a;i++){
    cin>>s[i];
    }
    for(int i=0;i<a;i++){
 
        if(s[i]<=s[i+1] ){
            if( i+1 ==a) {
 
         break;
        }
            q++;
            if(q>r){
                r=q;
            }
        }
        else {q=1;
 
        }
    }
    cout<<r<<endl;
 
}
