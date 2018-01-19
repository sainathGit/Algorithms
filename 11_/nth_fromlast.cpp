#include <iostream>

using namespace std;

struct llist {
	public:
		int i;
		llist *n;
};

int nthfrom_last(int n, struct llist* head) {

	struct llist *l = head,*r = head;

	if (head == NULL)
		return -666;

	for (int i = 0; i < n-1; ++i)
	{
		r = r->n;
		if (r == NULL)
			return -666;
	}

	while(r->n!= NULL) {
		r = r->n;
		l = l->n;
	}

	return l->i;
}

int main() {
	int n,flag = 0;
	struct llist *head = NULL,*p = NULL,*l;
	cin >> n;
	
	while(n--){
		llist* l = new llist;
		cin >> l->i;

		if (p != NULL)
			p->n = l;
		else
			head = l;

		p = l;
	}
	if(p!=NULL)
		p->n = NULL;

	while(cin >> n)
		cout << nthfrom_last(n,head) << endl;

	return 0;
}