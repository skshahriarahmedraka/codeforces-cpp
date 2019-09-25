#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    bool o=true;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=0;j<m;j++){
             cout<<"#";
            }
            cout<<endl;
        }
        else {
            if(o==true){
                for(int j=0;j<m-1;j++){
             cout<<".";
            }
            cout<<"#"<<endl;
            o=false;
            }
            else{
            cout<<"#";
                for(int j=0;j<m-1;j++){
             cout<<".";
            }
            cout<<endl;
            o=true;
            }
        }
    }
 
}
