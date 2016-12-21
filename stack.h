#ifndef STACK_H_
#define STACK_H_

typedef struct Stack_Item{

	void* data;
	struct Stack_Item* next;
} Stack_Item;

typedef struct Stack{
	int num_items;
	Stack_Item* head;
} Stack;

int 		push(Stack* stack, void* data);
void*	 	pop(Stack* stack);
int 		initialize(Stack* stack);
int 		size(Stack* stack);
void* 		peek(Stack* stack);

#endif
