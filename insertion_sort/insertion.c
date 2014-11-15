#include <stdio.h>

void swap(int* i, int* j){
	int temp = *j;
	*j = *i;
	*i = temp;
}

void insert(int list[], int start, int end){
	int sorted = 0;
	int current = end;

	while(current && !sorted){
		if(list[current]<list[current-1]){
			swap(&list[current], &list[current-1]);
			current--; 
		}
		else
			sorted = 1;

	}
}

void main(){
	int list[] = {36, 24, 10, 6, 12};
	int int_size = sizeof(int);
	int length = sizeof(list)/int_size;
	int i = 0;
	
	printf("unsorted = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");

	for(i=0; i<length; i++)
		insert(list, 0, i);
			
	printf("sorted   = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");
}