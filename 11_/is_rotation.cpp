#include <iostream>

using namespace std;


bool is_rotation(void) {

		int n1, n2, a[100004], b[100004];

		cin >> n1;
		for (int i = 0; i < n1; ++i)
		{
			cin >> a[i];
		}


		cin >> n2;
		if (n1 != n2) 
			return false;


		for (int i = 0; i < n2; ++i)
		{
			cin >> b[i];
		}


		int ap = 0,bp = 0;
		while (bp < n2 && a[ap] != b[bp]) {
			bp++;
		}
		if (bp == n2)
			return false;
		

		while (ap < n1)
		{

			if (a[ap] != b[bp])
				return false;

			ap++;
			bp++; 
			bp = bp % n1;

		}
		return true;

}

int main(int argc, char const *argv[])
{
	int t; 
	cin >> t;

	while (t--) {

		if (is_rotation())
			cout << "YES";
		else
			cout << "NO";

		cout << endl;
	}
	return 0;
}