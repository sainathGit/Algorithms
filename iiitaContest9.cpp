#include <iostream>
#define MAX 1000009
int phi[MAX];
int pl[MAX];

using namespace std;

void pre(void) {

	for (int i = 1; i < MAX; ++i)
	{
		phi[i] = i;
	}

	for (int i = 1; i < MAX; ++i)
	{
		if (pl[i] == 0) {
			for (int j = i; j < MAX; j+=i)
			{
				phi[i] /= i;
				phi[i] *= (i-1);
				pl[j] = 1;
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	int n,d,t;
	pre();

	cin >> t;
	while(t--) {

		cin >> n >> d;

		if (n%d == 0)
			cout << phi[n/d] << endl;
		else 
			cout << 0 << endl;


}
	return 0;
}