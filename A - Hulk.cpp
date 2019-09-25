#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    string l="I love";
    string h="I hate";
    string s;
    for(int i=1;i<=n;i++){
        if(i%2 !=0){
            if(i!=n){
                s=s+h+" that ";
            }
            if(i==n){
                s=s+h+" it";
            }
        }
        if(i%2 ==0){
            if(i!=n){
                s=s+l+" that ";
            }
            if(i==n){
                s=s+l+" it";
            }
        }
    }
    cout<<s<<endl;
}
