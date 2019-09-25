 
#include<iostream>
using namespace std;
int main(void)
{   int l=0,i,j,k;
    string s;
    cin>>s;
    l=s.length();
    for( i=0;i<l;i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
                s[i]=' ';
                s[i+1]=' ';
                s[i+2]=' ';
            if(i==0){
                for(j=3, k=0;j<=l;j++,k++){
                    s[k]=s[j];
                }
                i=-1;
                l=l-3;
            }
            else if(i!=0 && s[i-1]!=' ' ) {
                    s[i]=' ';
                for( j=i+3, k=i+1;j<=l;j++,k++){
                    s[k]=s[j];
                }
             i=-1;
             l=l-2;
            }
            else if(i!=0 && s[i-1]==' '  ) {
                   // s[i]=' ';
                for( j=i+3, k=i;j<=l;j++,k++){
                    s[k]=s[j];
                }
                i=-1;
                l=l-3;
            }
        }
 
    }
    for(i=0;i<l;i++)
    cout<<s[i];
}
