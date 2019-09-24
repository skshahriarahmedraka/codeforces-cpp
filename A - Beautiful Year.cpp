#include<iostream>
using namespace std;
int main(void)
{   int a;
    bool b=true;
    cin>>a;
 
    for(int i=0; ; i++ ){
            a++;
            int c[4],x;
            x=a;
        for(int j=0;j<4;j++){
                c[j]=x%10;
                x=x/10;
    }
    for(int k=0;k<4;k++){
        for(int l=0;l<4 && l!=k;l++){
            if(c[k]==c[l]){
                b=false;
            }
        }
    }
    if(b==true){
        cout<<a<<endl;
        break;
    }
    else b=true;
}
}
