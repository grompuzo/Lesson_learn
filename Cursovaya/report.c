#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "temp_function.h"


int main(int argc, char **argv){ // set PATH=%PATH%;C:\cygwin64\bin
	char callendar[20][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	char buff[100];
	char *year,*month,*day,*hour,*minute,*temp;
	char name[1000];
	int menu=0;
	int flag=1;
	int line_count =0;
    int year_tmp=0;
    int month_value =0;
    int month_num =0;
    int month_min_num =99;
    int month_max_num =-99;
    int month_avr_num=0;
	float year_avr_num=0;
	int year_max_num=-99;
	int year_min_num=99;
	int month_choise =0;
    FILE *data;
    char tmp_name;
    int i=0;

    if ((argc == 1)||(argc>=6)){
        printf("Error: wrong argument line\n");
        help();
        return 1;

    }

    if (argv[1][1]=='h'){
        help();
        return 1;
    }
    else if(argv[1][1]=='f'){
        if(name_check(argv[2])==0){
            printf("Error:wrong file name"); //temperature_small.csv
            return 1;
        }
        if(argc ==3){//мес€ц не уточн€ли
            if ((data =fopen(argv[2],"r")) == NULL){
                printf("Error:file not found\n");
                return 1;
            }
            else{
                printf("#   Year Month NuValue Average Maximum Minimum\n");
                while(fgets(buff, sizeof(buff),data)){

                    year= strtok(buff,";");
                    month= strtok(NULL,";");
                    day= strtok(NULL,";");
                    hour= strtok(NULL,";");
                    minute= strtok(NULL,";");
                    temp= strtok(NULL,";");
                    year_tmp =atoi(temp);
                    line_count++;

                    if (error_check(year,month,day,hour,minute,temp)==1){
                        printf("Error on line %d\n",line_count);
                    }
                    else{

                        if((month_value==0)||(month_num==atoi(month))){
                            month_num=atoi(month);
                            month_value++;
                            if (year_tmp>month_max_num) month_max_num = year_tmp;
                            if (year_tmp<month_min_num) month_min_num = year_tmp;
                            month_avr_num +=year_tmp;
                        }
                        else{
                            make_tablet(flag, year, month_num, month_value, (month_avr_num/month_value), month_max_num, month_min_num);

                            flag++;
                            year_avr_num +=month_avr_num/month_value;
                            month_value = 1;
                            month_num =atoi(month);
                            month_max_num = year_tmp;
                            month_min_num = year_tmp;
                            month_avr_num = year_tmp;
                        }

                        if (year_tmp>year_max_num) year_max_num = year_tmp;
                        if (year_tmp<year_min_num) year_min_num = year_tmp;
                    }
                }
                year_avr_num +=month_avr_num;
                make_tablet(flag, year, month_num, month_value, (month_avr_num/month_value), month_max_num, month_min_num);
                year_avr_num =(year_avr_num/12);
                printf("=============================================\n");
                printf("average temperature for this year is %.2f, while maximum is %d, and minimum is %d\n",year_avr_num,year_max_num,year_min_num);
            }
            fclose(data);
            return 0;
        }
        if ((argc >= 4)&&(argv[3][1] !='m')){
            printf("Error: wrong specifier of the month\n");
            help();
            return 1;
        }
        if (argv[3][1] == 'm'){
            if ((data =fopen(argv[2],"r")) == NULL){
                printf("Error:file not found\n");
                return 1;
            }
            else{
                int month_tmp = atoi(argv[4]);
                if((month_tmp>0)&&(month_tmp<=12)){

                    while(fgets(buff, sizeof(buff),data)){
                        year= strtok(buff,";");
                        month= strtok(NULL,";");
                        day= strtok(NULL,";");
                        hour= strtok(NULL,";");
                        minute= strtok(NULL,";");
                        temp= strtok(NULL,";");
                        year_tmp = atoi(temp);
						line_count++;

                            if(month_tmp == atoi(month)){
								
								if (error_check(year,month,day,hour,minute,temp)==1){
									printf("Error on line %d\n",line_count);
								}
								else{
									month_num=atoi(month);
									month_value++;

									if (year_tmp>month_max_num) month_max_num = year_tmp;
									if (year_tmp<month_min_num) month_min_num = year_tmp;
									month_avr_num +=year_tmp;
									line_count++;
                                }                            
                            }
                    }
                    printf("#   Year Month NuValue Average Maximum Minimum\n");
                    make_tablet(flag, year, month_num, month_value, (month_avr_num/month_value), month_max_num, month_min_num);

                    year_avr_num =(month_avr_num/month_value);
                    printf("=============================================\n");
                    printf("average temperature for %s is %.2f, while maximum is %d, and minimum is %d\n",callendar[month_tmp-1],year_avr_num,month_max_num,month_min_num);
                }
                else{
                    printf("Error: wrong specifier of the month, or wrong month\n");
                    help();
                    return 1;
                }
            }
        }
    }

    //printf("goodbye!");
    return 0;
}
