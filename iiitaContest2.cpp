#include <iostream>
using namespace std;
#include <string>

int main(int argc, char const *argv[])
{
	int aa,bb,ab,ba;
	int abba, tests;

	cin >> tests;

	while(tests--) {
		
		cin >> aa >> bb >> ab >> ba;

		
		int abba = min(ab,ba);

		string middle = "";

		if (aa%2 == 1)
			middle = "aa";
		else if (bb%2 == 1)
			middle = "bb";


		for (int i = 0; i < aa/2; ++i)
			cout << "aa";

		for (int i = 0; i < abba; ++i)
			cout << "ab";

		for (int i = 0; i < bb/2; ++i)
			cout << "bb";

			cout << middle;	

		for (int i = 0; i < bb/2; ++i)
			cout << "bb";

		for (int i = 0; i < abba; ++i)
			cout << "ba";

		for (int i = 0; i < aa/2; ++i)
			cout << "aa";

		cout << endl;

	}
	return 0;
}
