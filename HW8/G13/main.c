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
    или
    while((fscanf(in,"%d",&tmp))== 1){}


    */

    FILE *in;
    FILE *out;
    int n =0;
    char str[1000];
    char tmp;
    int ras=0;
    int dot=0;

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);
    

    for(int i=0;i<n;i++){
        if (str[i] =='/') ras =i;
    }

    for(int i=ras;i<n;i++){
        if (str[i] =='.') dot=i;
    }


    if (dot == 0){
        str[n-1]='.';
        str[n]='h';
        str[n+1]='t';
        str[n+2]='m';
        str[n+3]='l';
        n+=4;
    }
    if (dot != 0){
        str[dot+1]='h';
        str[dot+2]='t';
        str[dot+3]='m';
        str[dot+4]='l';
        n =dot+5;
    }

    out =fopen("output.txt","w");
    for(int i=0; i<n; i++){
		printf("%c",str[i]);
        fprintf(out,"%c",str[i]);
    }
    fclose(out);

    return 0;
}
