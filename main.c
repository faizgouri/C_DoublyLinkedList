#include "dlinklist.h"

int main(int argc, char* argv[])
{

	struct dlinklist *ll = createlinklist();
	struct data *d1 = createData(11, 12);
	struct data *d2 = createData(33, 44);
	struct data *d3 = createData(77, 88);
	struct data *d4 = createData(99, 19);

	addFront(ll,d1);
	printList(ll);
	printf("adding back 2 elements\n");
	addBack(ll,d2);
	addBack(ll, d3);
	printList(ll);

	printf("adding to front\n");
	addFront(ll, d4);
	printList(ll);

	removeFront(ll);
	printf("after remove\n");
	printList(ll);

	printf("print back\n");
	printBackwards(ll);

	return 0;
}
