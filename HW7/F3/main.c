#include <stdio.h>
#include <unistd.h>


void sorting(char *n){
	
	int a[11][2]={0};
	char tmp;
	
	int size = strlen(n);
	
	//printf ("%d\n", size);
	
	//if(n[0] == '0') a[0][1] =1;
	
	for (int i=0; i<size;i++){
		tmp = n[i];
		switch (tmp){
			case '0': a[0][1]++; break;
			case '1': a[1][1]++; break; 
			case '2': a[2][1]++; break;
			case '3': a[3][1]++; break;
			case '4': a[4][1]++; break;
			case '5': a[5][1]++; break;
			case '6': a[6][1]++; break;
			case '7': a[7][1]++; break;
			case '8': a[8][1]++; break;
			case '9': a[9][1]++; break;	
		}
	}
	
	for(int i=0;i<10;i++){
		if (a[i][1] != 0) printf("%d %d\n",i, a[i][1]);
	}			
}

int main(){
	
	char n[1000];
	
	fgets(n, 1000, stdin);	
	sorting(n);

	return 0;
}



