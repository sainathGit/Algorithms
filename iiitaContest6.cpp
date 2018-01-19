#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,q,a[400000],s[400000];
	int l,r;
	
	cin >> n >> q;

	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum += a[i];
		s[i] = sum;
	}

	for (int i = 0; i < q; ++i)
	{
		cin >> l >> r;
		//cout << s[r-1] << s[l-1];
		sum = s[r-1] - s[l-1] + a[l-1];
		cout <<  sum  << endl;
	}

	return 0;
}