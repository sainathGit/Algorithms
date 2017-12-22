#include <iostream>
#include <limits.h>
using namespace std;


int main() {

	int tests, salary[110], n, sum = 0, min;
	
	cin >> tests;

	while (tests--) {
		
		sum = 0;
		min = INT_MAX;
		cin >> n;
		for (int i = 0; i < n; i++) {
			
			cin >> salary[i];

		if (salary[i] < min)
				min = salary[i];
		}

		for ( int i = 0 ; i<n; i++) 
			sum += salary[i] - min;

		cout << sum << "\n";

	}
}
