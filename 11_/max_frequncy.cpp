#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	map <char, int> count;
	string input;

	while (getline(cin, input)) {

		int max = 0;
		char max_e = ' ';
		count.clear();

		for (int i = 0; i < input.size(); ++i)
		{
			if (count.find(input[i]) == count.end())
				count[input[i]] = 1;
			else {
				if (++count[input[i]] > max)
					max = count[input[i]];
					max_e = input[i];
			}
		}

		cout << max_e << endl;
	}
	return 0;
}