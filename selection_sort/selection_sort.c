#include <stdio.h>

void swap(int* i, int* j){
	int temp = *j;
	*j = *i;
	*i = temp;
}

void main(){
	int list[] = {126, 43, 26, 1, 113};
	int int_size = sizeof(int);
	int length = sizeof(list)/int_size;
	int i = 0;
	int j = 0;

	for(i=0; i<length; i++){
		printf("%d, ", list[i]);
	}
	printf("\n");

	for(i=0; i<length-1; i++){
		for(j=i+1; j<length; j++){
			if(list[i]<list[j]){
				swap(&list[i], &list[j]);
			}
		}
	}

	for(i=0; i<length; i++){
		printf("%d, ", list[i]);
	}
	printf("\n");
}