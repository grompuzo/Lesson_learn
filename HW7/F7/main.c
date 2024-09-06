#include <stdio.h>
#include <unistd.h>


int compression(int a[], int b[], int N) {

	memset(b,0,N);
	int tmp = 0;
	int number =0;
	int tmp_count =0;
	
	for(int i=0;i<N;i++){
		if (a[i] == number) tmp++;
		if (a[i] != number){
			b[tmp_count] = tmp;
			tmp = 1;
			number = a[i];
			tmp_count++;
		}
	}
	
	if (tmp !=0){
			b[tmp_count] = tmp;
			tmp = 1;
			number = a[N];
			tmp_count++;		
		}
	
	return tmp_count;
}

int main(){
	
	int a[250] ={1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0,1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0,1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0 ,1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1,1,}; // 433
	int b[250]= {0};
	
	
	
	//fgets(s, 1000, stdin);	
	//scanf("%d", &a);
	
	//printf("%d ",is_two_same(10,a));
	printf("%d \n",compression(a,b,200));
	
	for(int i=0; i<200; i++){
		
		printf("%d ", b[i]);
	
	}
	
	
	
	return 0;
}



