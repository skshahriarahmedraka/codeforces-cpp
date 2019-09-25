#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    double s[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        sum=sum+s[i];
    }
    cout<<fixed<<setprecision(4)<<sum/(n)<<endl;
}
