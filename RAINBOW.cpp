#include <iostream>

using namespace std;

int main() {

	int tests, start, end, current, n, a[110],flag;

	cin >> tests;

	while (tests--) {
		cin >> n;
		for( int i = 0; i<n; i++)
			cin >> a[i];

		start = 0; end = n-1; current = 1; flag = 1;

		for ( ; start <= end; ) {
			
			if (a[start] == current+1)
				current++;

			if(a[start] != a[end] || a[start] != current) {
				flag = 0;
				break;
			}

			start++; end--;
		}

		if (flag == 1 && current == 7)
			cout << "yes\n";
		else 
			cout << "no\n";

	}
	return 0;
}
