/*
 * main.c
 * 
 * Copyright 2024 glebe <glebe@LAPTOP-EDTA0PHJ>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>

int calc(int a)
{
	if (a>=2) return (a*a+4*a+5);
	if ((a>=-2)&&(a<2)) return (a*a);
	if (a<-2) return 4;
	
	return 0;
}



int main(int argc, char **argv)
{
	int a, sum;
	sum=0;
	
	do{
	scanf("%d", &a);		
	if (a != 0){ 
		if (calc(a)>sum) sum =calc(a);
	}
			
	}while (a != 0);


	printf("%d", sum);
	
	
	return 0;
}

