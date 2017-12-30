#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,price;

	cin >> t;

	while(t--) {
		cin >> n >> price;

		if (price <= (n*(n-1))/2)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}