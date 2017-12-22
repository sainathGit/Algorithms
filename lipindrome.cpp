#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,mid1,mid2;
	string str, str1, str2;

	cin >> t;
	while (t--) {
		cin >> str;
		mid1 = (str.size() - 1)/2;
		mid2 = (str.size())/2;



		str1 = str.substr(0, mid1+1);
		str2 = str.substr(mid2, str.size()-1);

		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());

		
		if (str1 == str2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}