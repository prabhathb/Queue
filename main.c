#include <stdio.h>
#include <stdlib.h>


struct node{
	char c;
	struct node* next;
};

struct node* front;
struct node* rear;
unsigned short int count = 0;

void Enqueue(char new_c){
	if(count ==0){
		struct node* n = (struct node*)malloc(sizeof(struct node));
		n->c = new_c;
		n->next = NULL;
		front = n;
		rear = n;
		count++;
	}
	else{
		struct node* n = (struct node*)malloc(sizeof(struct node));
		n->c = new_c;
		n->next = NULL;
		rear->next = n;
		rear = n;
		count++;
	}

}

char Dequeue(){
	char ret;
		
	if(count ==0){
		ret = '\0';
		printf("Empty Queue\n");
	}
	else{
		struct node* temp = front;
		ret = front->c;
		front = front->next;
		count--;
		if(count == 0)
			rear = NULL;
		free(temp);
		return ret;
	}

}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char d;
	printf("Front end is %d\n",front);
	printf("Rear end is %d\n",rear);	
	Enqueue('a');
	printf("Count is %d\n",count);	
	Enqueue('b');
	printf("Count is %d\n",count);	
	Enqueue('c');
	printf("Count is %d\n",count);	
	Enqueue('d');
	printf("Count is %d\n",count);
	Enqueue('e');
	printf("Count is %d\n",count);	
	Enqueue('f');
	printf("Count is %d\n",count);	
	Enqueue('g');
	printf("Count is %d\n",count);	
	Enqueue('h');
	printf("Count is %d\n",count);
	Enqueue('i');
	printf("Count is %d\n",count);	
	Enqueue('j');
	printf("Count is %d\n",count);	
	Enqueue('k');
	printf("Count is %d\n",count);	
	Enqueue('l');
	printf("Count is %d\n",count);	
	
	printf("Front end is %d\n",front);
	printf("Rear end is %d\n",rear);	
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);
	d = Dequeue();
	printf("Character is %c\n",d);		
	d = Dequeue();
	printf("Character is %c\n",d);	
	printf("Count is %d\n",count);
	
	printf("Front end is %d\n",front);
	printf("Rear end is %d\n",rear);
	return 0;
}
