#include <iostream>
#include <stack>
#include <string>

using namespace std;


 int main(int argc, char const *argv[])
 {
 	int test, count = 0,max_count,i,substr_count = 0;
 	stack <char> stk;
 	string str;
 	cin >> test;

 	while(test--) {
 		cin >> str;
 		count = 0;
 		max_count = 0;
 		substr_count = 0;

 		for (int i = 0; i < str.size(); ++i)
 		{
 			switch (str[i]){

 				case '(' : stk.push(str[i]);
 							break;

 				case ')' : if(stk.empty()){

 								if(count > max_count) {
 									max_count  = count;
 								}
 								if (i!=0)
 									substr_count++;
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
 		
 		if (count > 0 )
 			substr_count++;

 		cout << max_count << " " << substr_count << endl;

 	}

 	return 0;
 }
