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
	void  is_happy_number(int a){
		int sum,mult;
		
		sum=a%10;
		mult=a%10;
		a=a/10;
		while (a>0){
			sum = sum+(a%10);
			mult = mult*(a%10);
			a=a/10;
		}
		(sum == mult) ? printf("YES") : printf("NO");
	}
	
	
	int main (){
	int a;
	scanf("%d", &a);
	
	is_happy_number(a);
	
	return 0;	
}








