#ifndef QUEUE_H_
#define QUEUE_H_


/*This will be a linked list with the front of the 
* list being the start of the queue and the rear being the end
*/

typedef struct Queue_Item{

	void* data;
	struct Queue_Item* next;

	
}Queue_Item;

typedef struct Queue{

	int size;
	Queue_Item* front;
	Queue_Item* rear;
	
}Queue;

int 	add(Queue* queue, void* data);
int 	remove(Queue* queue);
void* 	peek(Queue* queue);
int 	size(Queue* queue);
int 	initialize(Queue* queue);

#endif
