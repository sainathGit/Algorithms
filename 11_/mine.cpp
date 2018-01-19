#include <iostream>

using namespace std;
int mine[100][100];
int row,col;	

void print_mine() {

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << mine[i][j] << " ";
		}
		cout << endl;
	}

return;
}

void make_mine(int n ,int a[][2]) {

	int r,c;
	for (int i = 0; i < n; ++i)
	{
		r = a[i][0]; c = a[i][1];
		mine[r][c] = -1;
		//cout << r << "  " << c << end;

		for (int i = r-1; i <= r+1; ++i)
		{
			for (int j = c-1; j <= c+1; ++j)
			{
				if ((i<row && i>=0 && j<col && j>=0) && (mine[i][j] != -1))
					{mine[i][j]++;
		//			cout << i << j << mine[i][j]<<endl;}
					}
			}
		}
	}

	print_mine();
return;
}


int main(int argc, char const *argv[])
{
	int n,a[100][2];

	cin >> row >> col;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i][0] >> a[i][1];

	make_mine(n,a);

	return 0;
}