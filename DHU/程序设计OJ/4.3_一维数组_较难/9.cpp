#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, N,a[120],sum,Max,Min;
	while (cin >> n)
	{
		sum = 0;
		Max = -9999999;
		Min = 9999999;
		cin >> N;
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < n; i++)
		{			
			sum = 0;
			for (int j = i; j < i + N; j++)sum += a[(j) % n];
			if (sum > Max)Max = sum;
			if (sum < Min)Min = sum;
		}
		cout << "Max=" << Max << endl << "Min=" << Min << endl<<endl;
	}
}