#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,h;

	cin >> t;

	while (t--) {
		cin >> n >> h;
		int a[n];

		for (int i = 0; i < n; ++i)
		{	
			int temp ;
			cin >> temp;

			a[i] = abs(temp	- h);
		}

		cout << *(min_element(a,a+n)) << endl;

	}
	return 0;
}