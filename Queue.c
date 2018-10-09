#include<stdio.h>
#define SIZE 10     //defining queue size

int queue[SIZE], head = -1, tail = 0;

void enQueue(int value){  //function for enqueue
   if(head == SIZE-1)         //condition for full queue
      printf("\nQueue is Full");
                             //if queue is full, else insert element
   else{
      head++;
      queue[head] = value;
   }
}
void deQueue(){
   if(head == -1)          //function for dequeue
      printf("\nQueue is Empty ");   //condition for empty queue
   else{
      printf("\nDeleted : %d", queue[tail]);   //if queue is empty, else delete element

      tail++;
   }
}
void display(){        //function for displaying the queue
   if(head == -1)
      printf("\nQueue is Empty");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=tail; i<=head; i++)
	 printf("%d\t",queue[i]);       //printing the queue
   }
}

void main()
{

enQueue(8);      //inserting element
enQueue(10);
enQueue(12);
display();
deQueue();        //removing element
display();         //displaying the final queue
}
