#include <iostream>
#include <string.h>
#include <string>

using namespace std;

void match_mark(string input_str, string dict[], int* flags, int n) {

	for (int i = 0; i <n  ; ++i)
	{
		 if (input_str.compare(dict[i]) == 0)
		 	flags[i] = 1;
	}
}

int main(int argc, char const *argv[])
{
	
	int tests, n,k, flags[110] = {0},no_p;
	string dict[110], input_str;

	cin >> tests;

	while (tests--) {

		

		cin >> n >> k;

		memset(flags, 0, sizeof(flags));

		for (int i = 0; i < n; ++i)
		{
			cin >> dict[i]; 
		}


		for (int i = 0; i < k; ++i)
		{
			cin >> no_p;
			for (int i = 0; i < no_p; ++i)
			{
				cin >> input_str;
				match_mark(input_str,dict,flags, n);
			}			
		}


		for (int i = 0; i < n; ++i)
		{
			if(flags[i] == 1)
				cout << "YES ";
			else
				cout << "NO ";
		}

		cout << "\n";


	}
	
	return 0;
}