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

#include <locale.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	int a,b,sum,mult;
	scanf("%d", &a);
	
	for(int i=10; i<a+1; i++){
		
		b=i;
		sum=0;
		mult=1;
		while(b>0){
			sum=sum+(b%10);
			mult=mult*(b%10);
			b=b/10;
		}
		if (sum == mult) printf("%d ",i);
		
	}
		
	return 0;
}

