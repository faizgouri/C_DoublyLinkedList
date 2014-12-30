#include "dlinklist.h"


struct dlinklist* createlinklist()
{
  struct dlinklist* ll = malloc(sizeof(struct dlinklist));
  ll->head = NULL;
  ll->tail = NULL;
  return ll;
}


struct node* createNode(struct data *d)
{
  struct node *n = malloc(sizeof(struct node));
  n->d = d;
  n->next = NULL;
  n->prev = NULL;
  return n;
}

void addFront(struct dlinklist *ll, struct data *d)
{


	struct node *n = createNode(d);
	if(ll->head == NULL && ll->tail == NULL)
	{
		ll->head = n;
		ll->tail = n;
	}
	else
	{

		n->next = ll->head;
		ll->head->prev = n;
		ll->head = n;

	}

}

void addBack(struct dlinklist *ll, struct data *d)
{

	struct node *n = createNode(d);
	if(ll->head == NULL && ll->tail == NULL)
	{

		ll->head = n;
		ll->tail = n;

	}
	else
	{

		n->prev = ll->tail;
		ll->tail->next = n;
		ll->tail = n;

	}

}

void printList(struct dlinklist *ll)
{

	if(ll->head == NULL && ll->tail == NULL)
	{

		printf("Linked list is Empty\n");
	}
	else
	{

		struct node *temp = ll->head;
		while(temp != NULL)
		{

			printData(temp->d);
			temp = temp->next;

		}

	}
	/*
	alternate appproach
	struct node *temp;
	for(temp = ll->head; temp != NULL; temp = temp->next)
	{

		printData(temp->d);
	}

	*/


}

void printBackwards(struct dlinklist *ll)
{

	struct node *temp;
	for(temp = ll->tail; temp != NULL; temp = temp->prev)
	{

		printData(temp->d);

	}
}

void removeFront(struct dlinklist *ll)
{

	// check if this is the last node
	if(ll->head == ll->tail)
	{

		free(ll->head);
		ll->head = NULL;
		ll->tail = NULL;

	}
	else
	{

		struct node *temp = ll->head;
		ll->head = ll->head->next;
		free(temp);
		ll->head->prev = NULL;

	}
}
