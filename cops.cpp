#include <iostream>
#include <string.h>

using namespace std;
int cop_field[110] = {0};

void normalize(int n, int place, int range) {
	
	int start, end;

	start = place - range;
	if (start < 0)
		start = 0;
	
	end = place + range;
	if (end > 100)
		end = 100;

	for ( int i=start; i<=end; i++) 
		cop_field[i] = 1;
}





int main() {
	int tests, M, x, y, n = 100, place, sum = 0;
	cin >> tests;

	while (tests--) {
		sum = 0;	
		for(int i = 0 ; i < 110; i++)
			cop_field[i] = 0;

		cin >> M >> x >> y;
		
		for ( int i = 0; i<M; i++) {
			cin >> place;
			normalize(n, place, x*y);
		}

	
		for( int i = 1; i<=n; i++ ) {
			if(cop_field[i] == 0)
				sum++;
		}

		cout <<sum<< "\n";
	}
	return 0;
}

