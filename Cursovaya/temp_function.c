#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>




//#include "temp_function.h"

//-----системные функции-----
void help(){

    printf("-h for help\n");
    printf("-f filename.csv will load this file\n");
    printf("-m XX you may specify month, after file name\n");
}

int name_check(char *name){
        int size=strlen(name);
        size--;
        if((name[size-3]=='.')&&(name[size-2]=='c')&&(name[size-1]=='s')&&(name[size]=='v')) return 1;
        else return 0;

}
//---------------------------


//-----рабочие функции-----
void make_tablet(int flag, char *year, int month_num, int month_value, int avr, int month_max_num, int month_min_num){

    if (flag<=9)printf("%d   ",flag);
    else if(flag<=99) printf("%d  ",flag);
    else printf("%d ",flag);
    printf("%s   ",year);
    if(month_num<=9) printf("%d      ",month_num);
    else printf("%d     ",month_num);
    if (month_value<=9) printf("%d      ",month_value);
    else printf("%d       ",month_value);
    switch (avr){
    case -99 ... -10:
        printf("%d    ",avr);
        break;
    case -9 ... -1:
        printf("%d     ",avr);
        break;
    case 0:
        printf("%d       ",avr);
        break;
    case 1 ... 9:
        printf("%d       ",avr);
        break;
    case 10 ... 99:
        printf("%d      ",avr);
        break;
    }
    if (month_max_num>9) printf("%d      ",month_max_num);
    else if(month_max_num > 0) printf("%d       ",month_max_num);
    else if(month_max_num == 0) printf("%d       ",month_max_num);
    else if(month_max_num > -9) printf("%d      ",month_max_num);
    else printf("%d     ",month_max_num);
    printf("%d\n",month_min_num);

}
int error_check(char *year,char *month,char *day,char *hour,char *minute,char *temp){
    int err_flag =0;

    if ((strlen(year)>0)&&(atoi(year) == 0)){
        err_flag++;
    }
    if ((strlen(month)>0)&&(atoi(month) == 0)){
        err_flag++;
    }
    if ((strlen(day)>0)&&(atoi(day) == 0)){
        err_flag++;
    }
    if ((strlen(hour)>0)&&(atoi(hour) == 0)){
        err_flag++;
    }
    if ((strlen(minute)>0)&&(atoi(minute) == 0)){
        err_flag++;
    }
    if ((strlen(temp)>2)&&(atoi(temp) == 0)){
        err_flag++;
    }
    if((atoi(year)>=2000)&&(atoi(year)<=3000)){}
    else err_flag++;
    if((atoi(month)>=1)&&(atoi(month)<=12)){}
    else err_flag++;
    if((atoi(day)>=1)&&(atoi(day)<=31)){}
    else err_flag++;
    if((atoi(hour)>=0)&&(atoi(hour)<=23)){}
    else err_flag++;
    if((atoi(minute)>=0)&&(atoi(minute)<=59)){}
    else err_flag++;
    if((atoi(temp)>=-99)&&(atoi(day)<=99)){}
    else err_flag++;

    if (err_flag == 0) return 0;
    else return 1;



}


//-----рабочие функции-----
