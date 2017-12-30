#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int tests;
	int n,col,sum ,strip;

	cin >> tests;
	while (tests--) {

		sum = 0;
		cin >> n >> col;
		strip = n - col;

		for(int i = n*n, count = 0; count < n; i -= strip + 1, count++) 
			sum += i - strip;
	
		cout << sum << endl;
	}

	return 0;
}