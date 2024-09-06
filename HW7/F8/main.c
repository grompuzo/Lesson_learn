#include <stdio.h>
#include <unistd.h>


int find(int *N, int size) {

	int tmp=0;
	int tmp_size = size;
	int min = 0;
	
	
	while (size>0){
		for(int i = 0;i<size-1;i++){
			if(N[i]>N[i+1]){
				tmp = N[i];
				N[i] = N[i+1];
				N[i+1] = tmp;
			} 
		}
		size--;			
	}
	
	
	size = tmp_size;
	min = N[0];
	for(int i=0;i<size; i++){
		
		if (N[i] != i+min){
			
			tmp = i+min;
			return tmp;
		}
		
	}	

	return tmp;
}

int main(){
	
	int N[1000] ={0};
	int number = -1;
	int size = 0;
	
	scanf("%d",&number);
	N[size]=number;
	size++;	
	
	while (number !=0){
		scanf("%d",&number);
		N[size]=number;
		size++;
	}
	size--;
	
	
	
	printf("%d",find(N, size));
	
	

	
	return 0;
}



