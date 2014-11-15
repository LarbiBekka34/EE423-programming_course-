#include <stdio.h>

void swap(int* i, int* j){
	int temp = *j;
	*j = *i;
	*i = temp;
}

void main(){
	int list[] = {36, 24, 10, 6, 12};
	int int_size = sizeof(int);
	int length = sizeof(list)/int_size;
	int i = 0;
	int j = 0;

	

	printf("unsorted = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");

	for(i=0; i<length-1; i++)
		for(j=length-1;j>i;j--)
			if(list[j]<list[j-1])
				swap(&list[j], &list[j-1]);
			

	printf("sorted   = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");
}