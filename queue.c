#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int initialize(Queue* queue){

	if(NULL == queue){
		printf("Queue initialization failed...\n");
		return -1;
	}

	queue -> size = 0;
	queue -> head = NULL;
	queue -> tail = NULL;

	printf("Queue initialized...\n");
	return 0;

}

int enqueue(Queue* queue, void* data){
	
	if(NULL == queue){
		printf("Cannot add to unitialized queue...\n");
		return -1;
	}

	Queue_Item* item = malloc(sizeof(Queue_Item));
	item -> data = data;

	//empty queue, put first node at head of linked list
	if(queue -> size == 0){
		item -> next = queue -> head;
		queue -> head = item;
		queue -> tail = item;

		queue -> size++;

		printf("Successfully queued...\n");
		return 0;
	}
	
	//Add to end of the linked list
	item -> next = NULL;
	queue -> tail -> next = item;
	queue -> tail = item;
	queue -> size++;

	printf("Successfully queued...\n");
	return 0;
	
	
}


void* dequeue(Queue* queue){


	if(NULL == queue || queue -> size == 0){
		printf("Cannot dequeue an empty queue...\n");
		return NULL;
	}

	void* data = queue -> head -> data;
	Queue_Item* item = queue -> head -> next;
	free(queue -> head);
	queue -> head = item;
	queue -> num_items--;

	return data;

}


void* peek(Queue* queue){

	if(NULL == queue || queue -> size == 0){
		printf("Cannot peek at empty queue...\n");
		return NULL;
	}

	return queue -> head -> data;

}

int size(Queue* queue){

	if(NULL == queue){
		printf("No size of uninitialized queue...\n");
		return -1;
	}

	return queue -> size;	

}


