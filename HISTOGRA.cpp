#include <iostream>

using namespace std;


int find_area(int *rect, int nth, int N) {
	int left, right,i;

	for (i = nth; i < N && rect[i] >= rect[nth] ; ++i);
	left = i - nth;

	for (i = nth; i >= 0 && rect[i] >= rect[nth] ; --i);
	right = nth - i;

	return (left + right - 1) * rect[nth];
}	

int main(int argc, char const *argv[])
{
	int n,rect[100009],area,max_area;
	while(1){

		max_area = 0;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; ++i)
			cin >> rect[i];

		for (int i = 0; i < n; ++i)
		{
			area = find_area(rect,i, n);
			if (area > max_area)
				max_area = area;
		}

		cout << max_area << endl;

	}


	return 0;
}