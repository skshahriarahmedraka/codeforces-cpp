#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{   char c[]="hello";
    char s[100];
    int j=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c[j]){
            j++;
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
 
}
