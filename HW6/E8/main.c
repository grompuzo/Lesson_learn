#include <stdio.h>
#include <unistd.h>


int main(void){

    int a[12] ={0};
    int b[12] ={0};

    
    for(int i=0; i<12; i++){
        scanf("%d",&a[i]); // ввод массива
    }
   	
    for(int i=0; i<4; i++){
		b[4-i-1] = a[i];	
	}	
		
    for(int i=4; i<8; i++){
		b[11-i] = a[i];	
	}
	 
   for(int i=8; i<12; i++){
		b[19-i] = a[i];	
	} 	
	
    for(int i=0; i<12; i++){
	printf("%d ", b[i]);	
	}	
 
	
	

    return 0;
}

