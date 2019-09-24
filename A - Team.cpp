#include<iostream>
using namespace std;
int main(void)
{
	int a, b, c,x=0,n,i=0;
	cin >> n;
	for (i; i < n; i++) {
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == 1 && b == 1 || b == 1 && c == 1 || c == 1 && a == 1) {
			x++;
		}
	}
 
	cout << x << endl;
}
