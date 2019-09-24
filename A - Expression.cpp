#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,x=0,y;
    cin>>a;
    cin>>b;
    cin>>c;
    y=a+b*c;
    if(y>x) x=y;
    y=a*(b+c);
    if(y>x) x=y;
    y=a*b*c;
    if(y>x) x=y;
    y=(a+b)*c;
    if(y>x) x=y;
    y=a+b+c;
    if(y>x) x=y;
 
    cout<<x<<endl;
}
