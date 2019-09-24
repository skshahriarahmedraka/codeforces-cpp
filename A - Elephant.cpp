#include<iostream>
using namespace std;
int main(void)
{
    int x,y=0;
    cin>>x;
    for(int i=0;x>0 ; i++ ){
        if(x>=5){
        x=x-5;
        y++;
        }
        else if(x>=4){
        x=x-4;
        y++;
        }
        else if(x>=3){
        x=x-3;
        y++;
        }
       else if(x>=2){
        x=x-2;
        y++;
        }
       else if(x>=1){
        x=x-1;
        y++;
        }
    }
    cout<<y<<endl;
 
}
