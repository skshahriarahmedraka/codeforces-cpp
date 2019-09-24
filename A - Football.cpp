#include<iostream>
using namespace std;
int main(void)
{   int p=0,q=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
               q=0;
            p++;
            if(p>=7){
                cout<<"YES"<<endl;
                return 0;
            }
 
        }
        if(s[i]=='1'){
               p=0;
            q++;
            if(q>=7){
                cout<<"YES"<<endl;
            return 0;
            }
 
        }
    }
    cout<<"NO"<<endl;
}
