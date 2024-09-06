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
	char tmp;
	char c[100];
	FILE *in, *out;
	int j=0;
	
	in = fopen("input.txt","r");
	
	while (fscanf(in, "%c", &tmp) == 1){ 
		c[j]=tmp;
		j++;
	}
	fclose(in);
	j--;
	
	out = fopen("output.txt","w");
	for(int i=0; i<j; i++){
		fprintf(out,"%c",c[i]);	
	}
	fprintf(out,", ");
	for(int i=0; i<j; i++){
		fprintf(out,"%c",c[i]);	
	}
	fprintf(out,", ");
	for(int i=0; i<j; i++){
		fprintf(out,"%c",c[i]);	
	}
	fprintf(out," %d", j);	
	fclose(out);	
	
	
	
    return 0;
}

