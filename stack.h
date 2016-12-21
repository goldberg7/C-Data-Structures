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

void 		push(Stack* stack, void* data);
Stack_Item* 	pop(Stack* stack);
int 		initialize(Stack* stack);
int 		size(Stack* stack);

#endif
