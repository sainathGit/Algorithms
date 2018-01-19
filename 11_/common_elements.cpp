#include <iostream>
#include <vector>

using namespace std;


int find_common(vector<int> &a, vector<int> &b){
	int ap = 0,bp = 0;
	int count = 0;

	while(ap < a.size() && bp < b.size()) {

		if (a[ap] == b[bp]) 
		{
			count++;
			ap++; 
			bp++;
			cout << a[ap - 1] << endl;
		} else if (a[ap] < b[bp])
		{
			ap++;
		} else 
		{
			bp++;
		}
	}

	return count;
}

int main(int argc, char const *argv[])
{
	vector<int> a,b;
	int count;
	int temp;

	cin >> count;
	for (int i = 0; i < count; ++i){
		cin >> temp;
		a.push_back(temp);
	}
		
	cin >> count;
	for (int i = 0; i < count; ++i){
		cin >> temp;
		b.push_back(temp);
	}



	cout << "total: " << find_common(a,b) << endl;

	return 0;
}