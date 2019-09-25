#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    bool t=true;
    cin>>n;
    for(int i=0;i<n;i++ ){
        cin>>m;
        if(m==1){
           // cout<<"HARD"<<endl;
           // return 0;
           t=false;
        }
    }
    if(t==false){
        cout<<"HARD"<<endl;
    }
    else
    cout<<"EASY"<<endl;
 
}
