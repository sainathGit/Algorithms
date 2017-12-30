#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
	int tests,n,i = 0;
	set <int> basket;
	set <int>::iterator it1,it2 ;

	cin >> tests;

	while (tests--) {
		
		basket.clear();
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int item;
			cin >> item;
			basket.insert(item);
		}

		int a[basket.size() + 10];


		for (i = 0, it1 =  basket.begin(); it1 != basket.end(); ++it1)
		{
			a[i] = *it1;
			i++;

		}

		for ( i = 0; i < basket.size()/2; ++i)
		{
			
			cout << a[basket.size() - 1 - i] << " ";
			cout << a[i] << " ";
		}


		if(basket.size() % 2 != 0)
			cout <<  a[i];

		cout << endl;
	}

	return 0;
}
