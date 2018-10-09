#include <stdio.h>

int stack[20];             //declaring stack size
int head = -1;            //putting head ==-1

void push(int data){      //Function for inserting elements stack
head++;
stack[head] = data;
}

int pop(){               //Function for removing elements from stack
int data = stack[head];
head--;
return data;

}

void printstack(){              //Function for printing giving stack
    printf("\nData in  stack\n");
    int i;
    for( i=0;i<=head;i++){
            printf("%d ",stack[i]);
    }

}

void main()           //main function
{
    push(8);         //insert element
    push(10);
    push(12);
    push(14);
    printstack();    //print inserting element
    pop();
    pop();           //removing element
    printstack();    //Again printing the final stack
}
