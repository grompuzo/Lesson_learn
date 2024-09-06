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
    int pos =0;
    int length =0;
    char str[1010];
    char tmp;

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);
    for(int i=0;i<n;i++){
        if (str[i] != ' ') size++;
        else{
            if (size>length){
                length=size;
                pos=i-length;
                size =0;
            }
            size =0;
        }
    }
    if (size>length){
        length=size;
        pos=n-length;
    }

    out =fopen("output.txt","w");
    for(int i=pos;i<pos+length;i++){
        fprintf(out,"%c",str[i]);
    }
    fclose(out);


    return 0;
}

