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
	
	float power(float a, int b){
		
		if (b>1) return a*power(a, b-1);
		if (b==1) return a;
		return a;
		
	}
	
	int fact(int a){
		
		if (a>1) return a*fact(a-1); 
		if (a==1) return a;
		return a;
		
	}

	float  sinus(float a){
		
		a=a*0.01745;
		
		
		return a - (power(a,3)/fact(3))+(power(a,5)/fact(5))-(power(a,7)/fact(7));
	}
	
	
	int main (){
	float a;
	scanf("%f", &a);
	
	printf("%.3f", sinus(a));


	//printf("fact of %d = %d\n", 7, fact(7));
	//printf("stepen %f v %d = %f",a,b,power(a,b));
	//printf ("%.3f", sinus(a));
	
	return 0;	
}








