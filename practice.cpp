#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	map <int, int> count ;

	count[1] = 100;

	cout << count[1];

	return 0;
}