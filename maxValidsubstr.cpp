#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	stack <int> stk;
	int max_len,substr_count = 0;
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

							temp = stk.top();
							if(temp != -1) {

								if(!is_valid){
									is_valid = true;
									substr_count++;
								}
								max_len = max(max_len, i - temp + 1);
								stk.pop();
							}
							else {
								stk.pop();
								is_valid = false;
									
							}
						}	
		}
	}

	cout << max_len << " " << substr_count << endl;

	return 0;
}