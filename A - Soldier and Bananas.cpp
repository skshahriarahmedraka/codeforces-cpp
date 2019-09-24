#include<iostream>
using namespace std;
int main(void)
{
	long long int k, n, w,k1=0,n1;
	cin >> k;
	cin >> n;
	cin >> w;
	if (k >= 1 && w <= 1000 && n >= 0 && n <= 1000000000) {
		for (int i = 1; i <= w; i++) {
			k1 = k1 + i * k;
		}
		n1 =  k1-n;
		if (n1 > 0) {
			cout << n1 << endl;
		}
		else cout << "0" << endl;
	}
//	system("pause");
}
