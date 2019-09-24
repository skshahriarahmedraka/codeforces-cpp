#include<iostream>
using namespace std;
int main(void)
{
    long long int x,y=0,z=0;
    //string c="NO";
    cin>>x;
    for( ;x>0 ;x=x/10 ){
        y=x%10;
        if(y == 4 || y == 7 ){
            z+=1;
 
        }
 
    }
    if(z==4 || z==7)
    cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
}
