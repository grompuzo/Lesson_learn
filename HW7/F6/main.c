#include <stdio.h>
#include <unistd.h>


int is_two_same(int size, int a[]){
	
	while (size>1){
		for(int i=0; i<size; i++){
			if (a[i] == a[size]) return 1;			
		}
		size--;
	}
	
	return 0;
}

int main(){
	
	int a[10] ={0,1,2,3,4,5,6,7,8,9};
	int b[10] ={0, 0};
	
	
	
	//fgets(s, 1000, stdin);	
	//scanf("%d", &a);
	
	//printf("%d ",is_two_same(10,a));
	printf("%d ",is_two_same(2,b));
	return 0;
}



