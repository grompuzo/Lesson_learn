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
    int m =0;
    int start =0;
    int flag =0;
    char str[1000];
    char tmp;
    char answer[1000];


    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

    for(int i=0; i<n;i++){
        if (str[i] !=' '){
            start=i;
            i=n;
        }
    }

    for (int i=start; i<n;i++){
        if(str[i] != ' '){
            answer[m] = str[i];
            m++;
            flag=0;
        }
        if((str[i] == ' ')&&(flag == 0)){
            answer[m] = str[i];
            m++;
            flag++;
        }
    }

    out =fopen("output.txt","w");
    for(int i=0; i<m;i++){
        fprintf(out,"%c",answer[i]);
    }
    fclose(out);


    return 0;
}
