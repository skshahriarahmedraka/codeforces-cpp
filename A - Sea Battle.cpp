#include<iostream>
using namespace std;
int main(void)
{
    int w1,w2,h1,h2,q=0;
    cin>>w1>>h1>>w2>>h2;
    q=w1+2+2*(h1+1)+w1+2*h2;
    cout<<q<<endl;
}
