 #include <stdio.h>
#include <unistd.h>

int main(void){

    /*
    in = fopen("input.txt","r");
    fscanf(in,"%d",&tmp);
    fclose(in);

    out = fopen("output.txt","w");
    fprintf(out, "%d", t,p);
    fclose(out);

    while((tmp = fgetc(in)) != EOF){}
    ���
    while((fscanf(in,"%d",&tmp))== 1){}


    */

    FILE *in;
    FILE *out;
    int n =0;
    char str[1010];
    char tmp;

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

	out = fopen("output.txt","w");	
	for(int i=0;i<n;i++){
		if((str[i] =='L')&&(str[i+1] =='i')&&(str[i+2]=='n')&&(str[i+3]=='g')){
			fprintf(out,"Cao");
			i+=3;	
		}
		else fprintf(out,"%c",str[i]);	
	}
    fclose(out);	
	

    return 0;
}
