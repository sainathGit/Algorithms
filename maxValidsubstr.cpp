#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	stack <int> stk;
	int max_len,substr_count = 0, count = 0;
	string str;
	bool is_valid = false;
	max_len = 0;
	cin >> str;

	for (int i = 0; i < str.size(); ++i)
	{
		switch (str[i]) {

			case '(':	if(stk.empty())
							stk.push(-1);

						stk.push(i);
					    break;
			
			case ')':	if(!stk.empty()){

							int temp = stk.top();
							if(temp != -1) {
								count += 2;
								max_len = max(max_len,count); 
								stk.pop();
							}
							else {
								stk.pop();
								count = 0;
							}
						}
						break;	
		}
	}

	cout << max_len  << endl;

	return 0;
}