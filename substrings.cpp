#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	int t, count = 0,spam;
	string str;



	cin >> t;
	while (t--) {
		int n;
		cin >> spam;
		cin >> str;
		count = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] == '1')
				count++;
		}
		n = count;
		cout << (n*(n+1))/2 << endl;
	}

	return 0;
}