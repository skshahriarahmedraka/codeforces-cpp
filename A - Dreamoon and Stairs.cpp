By skshahra, contest: Codeforces Round #272 (Div. 2), problem: (A) Dreamoon and Stairs, Accepted, #
#include<iostream>
using namespace std;
int main(void)
{
    int n,m,x;
    cin>>n;
    cin>>m;
 
        if(n%2==0){
            x=n/2;
            for(; x!=n; ){
                if(x%m==0){
                    break;
                }
                else x++;
            }
        }
       else if(n%2!=0){
            x=n/2+1;
            for(; x!=n; ){
                if(x%m==0){
                    break;
                }
                else x++;
            }
        }
         if(n<m) x=-1;
 
    cout<<x<<endl;
 
}
 
 
