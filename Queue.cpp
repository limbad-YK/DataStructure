#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define SIZE 10

struct Queue
{
	int f,r;
	int a[SIZE];
};

struct Queue q;

void enqueue();
void dequeue();
void display();
int main()
{
	int op;
	q.a[SIZE],q.f=-1;q.r=-1;
	while(1)
	{
		int op;
		printf("\n *** Menu for Queue ***");
		printf("\n1)Enqueue  2)Dequeue  3)Display  4)Exit.");
		printf("\nEnter your choice :");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid input!!");
				break;
		}
	}
}

void enqueue()
{
	int x;
	if(q.r==SIZE-1)
	{
		printf("\nQueue is full, you cannot insert value. \n\n");
	}
	else
	{
		if(q.r==-1)
		{
			q.r=q.f=0;
			printf("\nEnter value to Insert :");
			scanf("%d",&x);
			q.a[q.r]=x;
		}
		else
		{
			(q.r)+=1;
			printf("\nEnter value to Insert :");
			scanf("%d",&x);
			q.a[q.r]=x;
		}
		printf("\nValue successfully inserted.");
		printf("\t front,rear,Q[rear],Q[front] = %d %d %d %d \n\n",q.f,q.r,q.a[q.r],q.a[q.f]);
	}
}

void dequeue()
{
	int y;
	if(q.f==-1 || q.f== SIZE-1)
	{
		printf("\nQueue is empty, you cannot delete value. \n\n");
	}
	else
	{
		y=q.a[q.f];
		if(q.r==0)
		{
			q.f=q.r=-1;
		}
		else
		{
			(q.f)+=1;
		}
		printf("\nValue succesfully deleted :");
		printf("\t front,rear,q[rear],q[front] =%d %d %d %d \n\n",q.f,q.r,q.a[q.r],q.a[q.f]);
	}
}

void display()
{
	if(q.r==-1)
	{
		printf("\nQueue is empty, cannot display Queue. \n\n");
	}
	else
	{
		printf("\nQueue is :");
		for(int i=q.f;i<=q.r;i++)
		{
			printf("%d\t",q.a[i]);
		}
		printf("\t front,rear,q[rear],q[front] =%d %d %d %d \n\n",q.f,q.r,q.a[q.r],q.a[q.f]);
	}
}
