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
	FILE *in, *out;
	int n=0; // A2B4C6D8E2F4G6H8
	char c[26]={'A','2','B','4','C','6','D','8','E','2','F','4','G','6','H','8','I','2','J','4','K','6','L','8','M','2'};
	
	in = fopen("input.txt","r");
	fscanf(in, "%d", &n);
	fclose(in);

	out = fopen("output.txt", "w");
	for(int i=0; i<n; i++){
		fprintf(out,"%c",c[i]);
	}

	
    return 0;
}

