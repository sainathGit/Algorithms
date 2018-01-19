#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,a[4000],k;
	int to_find = 0;
	bool flag = false;
	

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cin >> k;
	sort(a,a+n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			to_find = k - (a[i] + a[j]);
			if (binary_search(a,a+n,to_find)){
				flag = true;
				break;
			}
		}
	}

	if (flag) 
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

	return 0;
}