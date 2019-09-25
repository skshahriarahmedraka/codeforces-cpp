#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    string s="#Black&White";
    cin>>n;
    cin>>m;
    char p[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>p[i][j];
            if(p[i][j] !='W' && p[i][j]!='B' && p[i][j]!='G'){
                s="#Color";
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
 
