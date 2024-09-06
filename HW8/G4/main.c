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
	char word_one[100];
	char word_two[100];
	FILE *in;
	FILE *out;
	int n_one =0;
	int n_two =0;
	char tmp;
	char answer[100];
	int flag =-1;
	int n =0;
	int m =0;
	
	in = fopen("input.txt", "r");
	while((tmp = fgetc(in)) != ' '){
		word_one[n_one] = tmp;
		n_one++;
	} 
	while((tmp = fgetc(in)) != EOF){
		word_two[n_two] = tmp;
		n_two++;
	} 
	fclose(in);
	
	for(int i=0;i<n_one;i++){
		tmp = word_one[m];
		for(int j=0; j<n_one;j++){
			if (word_one[j] == tmp) flag++;		
		}
		if (flag == 1) flag++;
		for(int j=0; j<n_two;j++){
			if (word_one[i] == word_two[j]) flag++;
		}
		if (flag == 1){
			answer[n]=word_one[i];
			n++;
		}
		flag = -1; 
		m++;
	}

	m = n;
	
	while(m>2){
		for(int i=0;i<m-1;i++){
			if(answer[i]>answer[i+1]){
				tmp = answer[i];
				answer[i] =answer[i+1];
				answer[i+1] =tmp;
				}
			}
		m--;
		}

	out = fopen("output.txt", "w");
	
	if (n == 0) fclose(out);
	else{
		fprintf(out,"%c",answer[0]);	
		for(int i=1; i<n; i++){
			fprintf(out," %c",answer[i]);
		}
		fclose(out);
	}



    return 0;
}

