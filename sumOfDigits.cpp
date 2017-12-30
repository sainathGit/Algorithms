#include <iostream>

using namespace std;


int find_sum(int n) {
	
	if (n == 0)
		return 0;

	return n%10 + find_sum(n/10);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << find_sum(n) << endl;
	return 0;
}