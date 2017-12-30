#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,d,count;

	cin >> t;

	while (t--) {

		count = 0;
		cin >> n >> d;

		for (int i = 1; i < n; ++i)
		{
			if(__gcd(i,n) == d)
				count++;
		}

		cout << count << endl;
	}
	return 0;
}