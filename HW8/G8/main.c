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
    int answer[1000] ={0};
    char tmp ='9';
    int str =0;
    int n =0;
    int flag =0;

    in = fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        if ((tmp>=48)&&(tmp<=57)) {
            //printf("%c ",tmp);
            str = (str*10)+(tmp-48);
            flag++;
        }
        else if (flag != 0){
            flag =0;
            answer[n] =str;
            n++;
            str =0;
        }
    }
    fclose(in);

    int m=n;

    while (m>0){
        for(int i=0;i<m-1;i++){
            if (answer[i]>answer[i+1]){
                str = answer[i];
                answer[i] = answer[i+1];
                answer[i+1] = str;
            }
        }
        m--;
    }

    out = fopen("output.txt","w");

    if (n == 0) fclose(out);
    else{
        fprintf(out,"%d",answer[0]);
        for (int i=1; i<n;i++){
            fprintf(out," %d", answer[i]);
        }
        fclose(out);
    }




    for (int i=0; i<n;i++){
        printf("%d ", answer[i]);
    }





    return 0;
}

