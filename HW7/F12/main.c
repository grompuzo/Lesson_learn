#include <stdio.h>
#include <unistd.h>


void change_max_min(int size, int a[]){

	int min = a[0];
	int max = a[0];
	int number_min = 0;
	int number_max = 0;
	int tmp = 0;
	
	for (int i=0; i<size; i++){
		if (a[i]<min){
			min = a[i];
			number_min = i;
		}
		if (a[i]>max){
			max = a[i];
			number_max = i;
		}
	}
	
		tmp = a[number_min];
		a[number_min] = a[number_max];
		a[number_max] = tmp;
}




int main(){

int a[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

change_max_min(10, a);


for (int i=0; i<10; i++){ printf("%d ", a[i]);}



}



