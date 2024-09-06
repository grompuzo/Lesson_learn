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
    int num =0;
    char str[1000];
    char tmp;

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

    out =fopen("output.txt","w");
    for(int i=0;i<n;i++){
        if (str[i] != ' ') num++;
        else if((str[i]==' ')&&(num !=0)){
            for(int j=i-num;j<i;j++){
                fprintf(out,"%c",str[j]);
            }
            fprintf(out,"\n");
            num =0;
        }
    }
    for(int i=n-num;i<n;i++){
        fprintf(out,"%c",str[i]);
    }

    //if (str[n] == 'a') num++;
    //printf("%d",num);
    fclose(out);

    return 0;
}
