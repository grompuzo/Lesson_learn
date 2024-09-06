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
	char tmp;
	FILE *in;
	FILE *out;
	int n =0;
	int m =0;
	
	in = fopen("input.txt","r");	
	while((tmp = fgetc(in)) != EOF){
		if((tmp>='a')&&(tmp<='z')) n++;
		if((tmp>='A')&&(tmp<='Z')) m++;
	}
	fclose(in);
	
	out = fopen("output.txt", "w");
	fprintf(out,"%d %d",n,m);
	fclose(out);		
	
			

    return 0;
}

