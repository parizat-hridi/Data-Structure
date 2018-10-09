#include <stdio.h>
struct Node
{
   int data;             //declaring variable data for node
   struct Node *next;     //declaring address for node
};
struct Node *head = NULL;

void insertAtBeginning(int value)     //function for inserting element in the beginning
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));         //dynamic memory allocation
   newNode->data = value;         //putting value in the newnode's data
   newNode->next = NULL;          //putting null in the newNode's next
   if(head == NULL)
   {
                              //condition
      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }

}
void display()
{
   if(head == NULL)
   {                                 //condition if head is null  then the list is empty
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are - \n");
      while(temp->next != NULL)
      {
       printf("%d ",temp->data);
       temp = temp->next;
        }
      printf("%d ",temp->data);
   }
}
void insertAtEnd(int value)         //function of inserting the elements of the list from ending
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));   //dynamic memory allocation
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)               //condition
   head = newNode;                //if head = empty ,put the newnode into head
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL){
       temp = temp->next;
      }
      temp->next = newNode;
   }

}
void removeBeginning()    //function of deleting the elements of the list from beginning
{
   if(head == NULL)
   printf("\n\nList is Empty!");
   else
   {
      struct Node *temp = head;
      if(head->next == NULL)
      {
       head = NULL;
       free(temp);
      }
      else
      {
      head = temp->next;
      free(temp);
      }
   }
}

void removeEnd()           //function for removing element from the end
{
   if(head == NULL)

   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp1 = head,*temp2;
      if(head->next == NULL)
      {
       head = NULL;
      }
      else
      {
       while(temp1->next != NULL)
       {
          temp2 = temp1;
          temp1 = temp1->next;
       }
       temp2->next = NULL;
        }
          free(temp1);
    }
}

int main()
{
   insertAtEnd(8);             // 8
   insertAtEnd(10);            // 8 10
   insertAtBeginning(12);      // 8 10 12
   insertAtBeginning(15);      // 8 10 12 15
   insertAtEnd(20);            // 8 10 12 15 20
   display();
   removeBeginning();        //12 8 10 20
   display();
   removeEnd();             //12 8 10
   display();
    return 0;
}
