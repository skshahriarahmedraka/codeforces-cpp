#include<iostream>
using namespace std;
int main(void)
{
    char c;
    int p=0;
    cin>>c;
    string s,s1,s2,s3;
    cin>>s;
    s1="qwertyuiop";
    s2="asdfghjkl;";
    s3="zxcvbnm,./";
    if(c=='R'){
        for(int i=0;i<s.length();){
            for(int j=0;j<s1.length();j++){
            if(s[i]==s1[j]){
                s[i]=s1[j-1];
                i++;
                j=0;
            }
            for(int j=0;j<s2.length();j++){
            if(s[i]==s2[j]){
                s[i]=s2[j-1];
                i++;
                j=0;
            }
            for(int j=0;j<s3.length();j++){
            if(s[i]==s3[j]){
                s[i]=s3[j-1];
                i++;
                j=0;
            }
        }
        }
    }
}
    }
    if(c=='L'){
        for(int i=0;i<s.length();){
            for(int j=0;j<s1.length();j++){
            if(s[i]==s1[j]){
                s[i]=s1[j+1];
                i++;
                j=-1;
            }
            for(int j=0;j<s2.length();j++){
            if(s[i]==s2[j]){
                s[i]=s2[j+1];
                i++;
                j=-1;
            }
            for(int j=0;j<s3.length();j++){
            if(s[i]==s3[j]){
                s[i]=s3[j+1];
                i++;
                j=-1;
            }
        }
        }
    }
}
    }
    cout<<s<<endl;
}
