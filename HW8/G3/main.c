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

	FILE *in;
	FILE *out;
	int answer[1000]={0};
	char str[1000];
	int n =0;
	int j =0;
	
	in = fopen("input.txt","r");
	
	while(fscanf(in,"%c",&str[n])==1){n++;}

	for (int i=0; i<n; i++){
		if (str[i] == str[n-2]){
			answer[j] = i;
			j++;
		}
		
	
	}


		
	fclose(in);
	
	out = fopen("output.txt", "w");
	
	

	if (j-1 == 0){
		fclose(out);			
	}
	else{
	
		fprintf(out, "%d", answer[0]);
		for(int i=1; i<j-1; i++){
			fprintf(out, " %d", answer[i]);
		}	
		fclose(out);
	}

    return 0;
}

