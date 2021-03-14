#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head; // Global variable
void Insert(int data,int n)
{
	struct Node* temp1= (Node*)malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next= NULL;
	if(n==1){
	temp1->next=head;
	head=temp1;
	return;
}
struct Node* temp2=head;
for(int i=0;i<n-2;i++)
{
	temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
}
	void Print()
	{
		struct Node* temp=head;
		printf("List is ");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}

int main()
{
	head = NULL;// list is empty
		Insert(3,1); //List - 3
		Insert(5,2);// List- 3,5
		Insert(6,3);// list- 3,5,6
		Insert(7,3);// list- 3,5,7,6
		Insert(9,2);//list- 3,9,5,7,6
		Insert(10,1);// list 10,3,9,5,7,6
		Print();
	 } 
	
 
