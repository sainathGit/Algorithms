#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	string input;
	map <char, int> count;
	while (getline(cin, input)) {

		count.clear();
		for (int i = 0; i < input.size(); ++i)
		{
			if (count.find(input[i]) == count.end()) 
				count[input[i]] = 1;
			else {
				count[input[i]]++;
			}
		}

		char c = '\0';
		for (int i = 0; i < input.size(); ++i)
		{
			if (count[input[i]] == 1) {
				c = input[i];
				break;
			}
		}

		if (c) 
			cout << c << endl;

	}
	return 0;
}