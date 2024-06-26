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
	
	float k, b;
	float x1,y1,x2,y2; //6 9 -1 3 //0.86 3.86
	scanf("%f%f%f%f", &x1, &y1, &x2, &y2); //y=k*x+b 
	
	k=(y1-y2)/(x1-x2);
	b=y2-k*x2;
	
	printf("%.2f\n", k);
	printf("%.2f", b);
	
	return 0;
}

