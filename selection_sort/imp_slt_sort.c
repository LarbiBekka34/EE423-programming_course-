#include <stdio.h>

void swap(int* i, int* j){
	int temp = *j;
	*j = *i;
	*i = temp;
}

int get_min_index(int list[], int start, int end){
	int min_index = start;
	int i = 0;
	for(i=start+1; i<=end; i++)
		if(list[i]<list[min_index])
			min_index = i;
	return min_index;
}

void main(){
	int list[] = {126, 43, 26, 1, 113};
	int int_size = sizeof(int);
	int length = sizeof(list)/int_size;
	int i = 0;
	int j = 0;
	int min_index = 0;

	printf("unsorted = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");

	for(i=0; i<length-1; i++){
		min_index = get_min_index(list, i+1, length-1);
		if(list[min_index]<list[i])
			swap(&list[i], &list[min_index]);
	}

	printf("sorted   = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");
}