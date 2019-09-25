#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    string y="NO";
    string s;
    for(int i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        //s1[5]='\n';
 
        for(int j=0;j<5 && y=="NO";j++){
            if(s1[j]=='O' && s1[j+1]=='O'){
                y="YES";
              //  cout<<"raka"<<endl;
                s1[j]='+';
                s1[j+1]='+';
            }
        }
         s=s+s1+'\n';
    }
    if(y=="YES")
    cout<<y<<endl<<s;
    else cout<<y<<endl;
}
