#include <iostream>
#include <stack>
#include <string>
#include <map>
#include <limits.h>

using namespace std;

int main(int argc, char const *argv[])
{

	int total = 0;
	map <char,int> mass;
	stack <int> stk;
	string mcule;
	char query;

	mass['C'] = 12;
	mass['H'] = 1;
	mass['O'] = 16;

	cin >> mcule;
	for (int i = 0; i < mcule.size(); ++i)
	{
		query = mcule[i];
		
		if (query >= 65 && query <= 90) {
			stk.push(mass[query]);		

		} else if (query == 40){
			stk.push(INT_MAX);

		} else if (query == 41){

			total = 0;
			while(stk.top() != INT_MAX) {
				total += stk.top();
				stk.pop();
			}
			stk.pop();
			stk.push(total);

		} else {
			int temp;
			temp = stk.top();
			stk.pop();
			stk.push(temp*(query-48));

		}
	}

	total = 0;
	while (!stk.empty()) {
		total += stk.top();
		stk.pop();
	}

	cout << total << endl;

	return 0;
}