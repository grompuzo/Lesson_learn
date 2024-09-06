#include <stdio.h>
#include <unistd.h>

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
	char answer[1000];
	FILE *in;
	FILE *out;
	char tmp;
	int n=0;
	
	in = fopen("input.txt","r");
	while (fscanf(in,"%c",&tmp) == 1){
		if (tmp == 'a') answer[n]='b';
		else if (tmp == 'A') answer[n]='B';
		else if (tmp == 'b') answer[n]='a';
		else if (tmp == 'B') answer[n]='A';
		else answer[n]=tmp;
		n++;
		}
	fclose(in);
		
	out = fopen("output.txt", "w");
	for(int i=0; i<n; i++){
		fprintf(out,"%c",answer[i]);
	}
	fclose(out);	
	
	
	
    return 0;
}

