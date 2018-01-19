#include <iostream>

using namespace std;





int main(int argc, char const *argv[])
{
	int t,n,max = 2048;

	cin >> t;

	while(t--) {
		cin >> n;

		int	count = 0;

		count = n/max;
		n = n%max;

		while (n>0){
			count += n%2;
			n /= 2;
		}

		cout << count <<endl; 

	}
	return 0;
}