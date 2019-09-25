#include<iostream>
using namespace std;
int main(void)
{
    int n,m,i,j=0;
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++,j++){
        if(i%m==0){
            n++;
        }
        if(n<m) {j=n;
                break;}
 
    }
    cout<<j<<endl;
}
