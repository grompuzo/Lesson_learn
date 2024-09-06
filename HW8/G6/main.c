#include <stdio.h>
#include <unistd.h>

int is_palindrom(char *str, int n){
	
	int flag=0;
	n--;	
	if (n==1) return 1;
	if((n==2)&&(str[0]==str[1])) return 1;
	if((n==2)&&(str[0]!=str[1])) return 0;
	
	n--;
	printf("%d %d",n,n/2);
	for(int i=0; i<n/2; i++){
		if (str[i] != str[n-i]) flag++;
	}	
	
	if (flag>0) return 0;
	else return 1;

}








int main(void){
	/*
	FILE *in;
	FILE *out;
	int tmp =0;
	
	in = fopen("input.txt","r");
	fscanf(in,"%d",&tmp);
	fclose(in);
	
	out = fopen("output.txt", "w");
	fprintf(out,"%d",tmp);
	fclose(out);
	*/
	/*	
	in = fopen("input.txt", "r");
	while((tmp = fgetc(in)) != ' '){
		word_one[n_one] = tmp;
		n_one++;
	} 
	while((tmp = fgetc(in)) != EOF){
		word_two[n_two] = tmp;
		n_two++;
	}
	*/ 
	char tmp;
	char str[1000];
	FILE *in;
	FILE *out;
	int n =0;
	
	in = fopen("input.txt","r");
while((tmp = fgetc(in)) != EOF){
		str[n] = tmp;
		n++;
		//printf("%d %c\n",n,tmp);
	}
	fclose(in);	
	
	
	out = fopen("output.txt", "w");		
	if (is_palindrom(str,n)==1) fprintf(out,"YES");
	else fprintf(out,"NO");
	fclose(out);	


    return 0;
}

