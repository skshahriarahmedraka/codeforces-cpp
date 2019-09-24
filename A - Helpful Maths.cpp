#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char a[100],b;
	int j,k=0;
	cin >> a;
	j = strlen(a);
	for (int i = 0; i < j; i = i + 2) {
		for (k=0; k < j; k = k + 2) {
			if (a[i] < a[k]) {
				b = a[i];
				a[i] = a[k];
				a[k] = b;
			}
		}
	}
	for (int i = 0; i < j; i++) {
		cout << a[i];
	}
	return 0;
}
