#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t,n,price;
	long long int sum;

	cin >> t;

	while(t--) {
		cin >> n >> price;
		sum = (n*(n+1))/2;

		if (price <= sum)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}