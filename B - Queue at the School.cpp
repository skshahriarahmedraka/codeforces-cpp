
#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int n,i;
    string s;
    cin>>n;
    cin>>i;
    cin>>s;
    for(int k=0;k<i;k++){
    for(int j=0;j<n;j++){
        if(j!=n-1){
            if(s[j]=='B' && s[j+1]!='B'){
                int q;
                q=s[j];
                s[j]=s[j+1];
                s[j+1]=q;
                j++;
            }
        }
    }
    }
    cout<<s<<endl;
}
