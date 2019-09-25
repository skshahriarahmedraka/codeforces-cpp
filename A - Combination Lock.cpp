#include<iostream>
using namespace std;
int main(void)
{   int n,m=0;
    cin>>n;
    string s,s1;
    int s2[n],s12[n];
    cin>>s;
    cin>>s1;
    for(int i=0;i<n;i++){
        s2[i]=s[i]-'0';
    }
    for(int i=0;i<n;i++){
        s12[i]=s1[i]-'0';
    }
 
    for(int i=0;i<n;i++){
        int x,y;
        x=abs(s2[i]-s12[i]);
        y=abs(10-abs(s2[i]-s12[i]));
        if(x<y){
            m=m+x;
        }
        else m=m+y;
    }
    cout<<m<<endl;
}
