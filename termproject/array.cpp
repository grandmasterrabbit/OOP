#include "array.h"

Array::array(){
	for(int i = 0; i<11; i++)
		for(int j = 0; j<4; j++)
			arr[i][j] = 0;
}
void Array::print(){
	printf("score : ");
	for(int i = 0; i<11; i++)
		for(int j = 0; j<4; j++)
			printf("%d ", arr[i][j]);
}
