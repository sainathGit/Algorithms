#include <iostream>
#include <stack>
#include <string>

using namespace std;


 int main(int argc, char const *argv[])
 {
 	int test, count = 0,max_count,i;
 	stack <char> stk;
 	string str;
 	cin >> test;

 	while(test--) {
 		cin >> str;
 		count = 0;
 		max_count = 0;
 		for (int i = 0; i < str.size(); ++i)
 		{
 			switch (str[i]){

 				case '<' : stk.push(str[i]);
 							break;

 				case '>' : if(stk.empty()){

 								if(count > max_count) {
 									max_count  = count;
 								}
 								count = 0;
 							}
 							else {
 								stk.pop();
 								count += 2;
 							}
 			}


 		}

 		if (count > max_count)
 				max_count = count;
 		
 		cout << max_count << endl;

 	}

 	return 0;
 }
