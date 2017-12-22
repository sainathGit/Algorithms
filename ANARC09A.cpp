#include <iostream>
#include <stack>
#include <string>

using namespace std;


 int main(int argc, char const *argv[])
 {
 	int test, count = 0,max_count,i;
 	stack <char> stk;
 	string str;
 	cin >> str;
 	i = 1;
 	while(str[0] != '-') {


 		while (!stk.empty())
 			stk.pop();

 		count = 0;
 		for (int i = 0; i < str.size(); ++i)
 		{
 			switch (str[i]) {
 				case '{' : stk.push(str[i]);
 							break;

 				case '}' : if(stk.empty()){
 								stk.push('{');
 								count++;
 							}
 							else {
 								stk.pop();
 							}
 			}


 		}

 		count += stk.size()/2;
 		cout << i << ". " << count << endl;
 		i++;

 		cin >> str;

 	}

 	return 0;
 }
