#include <iostream>
#include <string>
#include <cmath>

using namespace std;


bool is_oneaway(string s1, string s2) {

	string s;
	int count = 0, diff = abs(s1.size() - s2.size());
	
	if ( diff >= 2)
		return false;

	else if (diff == 0) {
		for (int i = 0; i < s1.size(); ++i)
		{
			if(s1[i] != s2[i])
				count++;
		}

		if (count != 1 )
			return false;
	
	} else {

		if (s1.size() < s2.size())
		{
			s = s1;
			s1 = s2;
			s2 = s;
		}

		count = 0;
		int s1p = 0, s2p = 0;
		while (s1p < s1.size()) {
			if(s1[s1p] != s2[s2p]) {
				count++;
				if (count == 2)
					return false;
				s2p--;
			}
			s1p++;
			s2p++;
		}
	}

		return true;
		
}

int main(int argc, char const *argv[])
{
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);

	if (is_oneaway(s1, s2))
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}




