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
    int size =0;
    int flag =0;
    int name_cnt =0;
    int surname_cnt=0;
    char str[1000];
    char tmp;
    char name[1000];
    char surname[1000];
    char lastname[1000];


    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

    for(int i=0; i<n;i++){
        if (str[i] != ' ') size++;
        if((str[i]==' ')&&(flag==1)){
            for(int j =i-size; j<i;j++){
                name[name_cnt]=str[j];
                name_cnt++;
            }
            flag++;
        }
        if ((str[i]==' ')&&(flag == 0)){
            for(int j =i-size; j<i;j++){
                surname[surname_cnt]=str[j];
                surname_cnt++;
            }
            flag++;
            size=0;
        }
    }


    out =fopen("output.txt","w");
    fprintf(out,"Hello, ");
    for(int i=0;i<name_cnt;i++){
        fprintf(out,"%c",name[i]);
    }
    fprintf(out," ");
    for(int i=0;i<surname_cnt;i++){
        fprintf(out,"%c",surname[i]);
    }
    fprintf(out,"!");


    return 0;
}
