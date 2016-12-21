#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int initialize(Queue* queue){

	if(NULL == queue){
		printf("Queue initialization failed...\n");
		return -1;
	}

	queue -> size = 0;
	queue -> front = NULL;
	queue -> rear = NULL;

	printf("Queue initialized...\n");
	return 0;

}

int add(Queue* queue, void* data){
	
	if(NULL == queue){
		printf("Cannot add to unitialized queue...\n");
		return -1;
	}

	Queue_Item* item = malloc(sizeof(Queue_Item));
	
	//Case where adding to empty queue
	if(queue -> size == 0){
		
	}
	
}
