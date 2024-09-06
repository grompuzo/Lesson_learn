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
    int size =0;
    int j =0;
    int flag_chet =0;
    int flag_nech =0;
    int check =0;
    char str[1000];
    char tmp;
    int mix[130]={0};
    char answer[1000];


    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);
/*
    printf("%c\n",str[3]);
    printf("%d\n",100-'a');
    printf("%c",str[100-'a']);
*/

    for(int i=0; i<n;i++){
        check = str[i];
        mix[check]++;
    }

    for(int i=97;i<130;i++){
        if((mix[i]%2 == 0)&&(mix[i] != 0)){
                m+=mix[i];
                flag_chet++;
        }
    }

    size=m;
     for(int i=97;i<130;i++){
        if((mix[i]%2 == 0)&&(mix[i] != 0)){
            while(mix[i]>0){
                answer[j] =i;
                answer[m] =i;
                j++;
                m--;
                mix[i]=mix[i]-2;
            }
        }
    }

    for(int i=97;i<130;i++){

        if((mix[i]%2 !=0)&&(flag_nech == 1)) flag_nech++;
        if((mix[i]%2 !=0)&&(flag_nech == 0)){
            flag_nech++;
            answer[j] = i;
        }
    }


    out = fopen("output.txt","w");
    if((flag_chet !=0)&&(flag_nech<=1)) printf("YES");
    else printf("NO");

    /*
    for(int i=0;i<size+1;i++){
        printf("%c",answer[i]);
        fprintf(out, "%c",answer[i]);
    }
    */
    fclose(out);

    return 0;
}
