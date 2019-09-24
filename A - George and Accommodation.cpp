#include<iostream>
using namespace std;
int main(void)
{
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int k,l;
        cin>>k;
        cin>>l;
        if(l-k>=2) x++;
    }
    cout<<x<<endl;
}
