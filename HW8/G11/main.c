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
    int flag =0;

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

    for(int i=0;i<n;i++){
        if ((str[i] == ' ')&&(str[i-1]=='a')) {num++; flag++;}

    }



    if ((str[n-2] == 'a')&&(flag == 0)) num++;
    printf("%d",num);

    out =fopen("output.txt","w");
    fprintf(out,"%d",num);
    fclose(out);

    return 0;
}
