#include <iostream>
#include <queue>

using namespace std;
int mine[][4] = {{-1, 1, 0, 0},
				{1,1 , 0, 0},
				{0, 0, 1, 1},
				{0, 0, 1, -1}
			   };

int row = 4, col = 4;

class location {
	public:
		int r;
		int c;

};

void click_expand(location l) {
	queue<location> que;

	if(mine[l.r][l.c])
		return;
	mine[l.r][l.c] = -2;
	que.push(l);

	while (!que.empty()){
		l = que.front();
		que.pop();

		for (int i = l.r-1; i <= l.r+1; ++i)
		{
			for (int j = l.c-1; j <= l.c+1; ++j)
			{
				if ((i<row && i>=0 && j<col && j>=0) && mine[i][j] == 0) {
					mine[i][j] = -2;
					location nl;
					nl.r = i; nl.c = j;
					que.push(nl);
				}
			}
		}

	}






}

void print_mine() {
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << mine[i][j] << " ";
		}
		cout << endl;
	}
}


int main(int argc, char const *argv[])
{
	location l;
	print_mine();
	cin >> l.r >> l.c;

	click_expand(l);
	print_mine();
	return 0;
}