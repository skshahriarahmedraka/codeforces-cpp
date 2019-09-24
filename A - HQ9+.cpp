#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{   string c="NO";
    char a[100];
    cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>=33 && a[i]<=126){
            for(int j=0;j<strlen(a);j++){
                if(a[j]=='H' ||a[j]=='Q' ||a[j]=='9'  ){
                    c="YES";
                }
            }
 
        }
    }
    if(c== "NO") cout<<c<<endl;
            else cout<<c<<endl;
 
}
