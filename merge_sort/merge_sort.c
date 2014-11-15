#include <stdio.h>

void merge(int list[], int firstLeft, int lastLeft, int firstRight, int lastRight){
	int int_size = sizeof(int);
	int length = sizeof(list)/int_size;
	int i;

	int saveFirst = firstLeft;
	int index = firstLeft;
	int temparray[length];
	while((firstLeft<=lastLeft) && (firstRight<=lastRight)){
		if(list[firstLeft]<list[firstRight]){
			temparray[index] = list[firstLeft];
			firstLeft++;
		}
		else{
			temparray[index] = list[firstRight];
			firstRight++;	
		}
		index++;		
	}
	
	for(i = firstLeft; i<=lastLeft; i++){
		temparray[index] = list[i];
		index++;
	}

	for(i = firstRight; i<=lastRight; i++){
		temparray[index] = list[i];
		index++;
	}

	for(i=saveFirst; i<=lastRight; i++)
		list[i] = temparray[i];
}

void mergeSort(int list[], int first, int last){
	if(first<last){
		int middle = (last+first)/2;
		mergeSort(list,first, middle);
		mergeSort(list,middle+1, last);
		merge(list, first, middle, middle+1, last);
	}
}

void main(){
	int list[] = {36, 24, 10, 6, 12};
	int int_size = sizeof(int);
	int length = sizeof(list)/int_size;
	int i = 0;
	int j = 0;
	int gap = length/2;
	
	printf("unsorted = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");

	mergeSort(list, 0, length-1);
			
	printf("sorted   = {");
	for(i=0; i<length; i++){
		printf("%3d ", list[i]);
	}
	printf("}\n");
}