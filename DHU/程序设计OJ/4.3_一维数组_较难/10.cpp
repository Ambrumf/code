#include<bits/stdc++.h>
using namespace std;
int a[1001], b[501];
void fun(int x) {
	if (x == 0) return;
	else fun(x / 2);
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= 500; j++) {
			if (x % 2 == 0) a[i + j - 1] += b[i] * b[j];
			else a[i + j - 1] += 2 * b[i] * b[j]  ;
		}
	}
	for (int i = 1; i <= 500; i++) {
		a[i + 1] += a[i] / 10;
		b[i] = a[i] % 10;

	}
	for (int i = 1; i <= 1000; i++) {
		a[i] = 0;
	}
}
int main() {
	int p;
	cin >> p;
	b[1] = 1;
	fun(p);
	cout << floor(log(2) / log(10) * p + 1) << endl;
	for (int i = 500; i >= 2; i--) {
		cout << b[i];
		if (i % 50 == 1)
		cout << endl;
	}
	cout << b[1] - 1;
	return 0;
}