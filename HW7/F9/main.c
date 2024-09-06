#include <stdio.h>
#include <unistd.h>


void swap_negmax_last(int size, int a[]){

	int min = -9999;
	int number = -1;
	int tmp = 0;
	
	for (int i=0; i<size-1; i++){
		if ((a[i]>min)&&(a[i]<0)){
			min = a[i];
			number = i;
		}
	}
	
	if (number != -1){
		tmp = a[size-1];
		a[size-1] = a[number];
		a[number] = tmp;
	} 
}




int main(){

int a[10] ={1, -2, -3, -4, 5, 6, 7, 8, 9, 10};

swap_negmax_last(10, a);


for (int i=0; i<10; i++){ printf("%d ", a[i]);}



}



