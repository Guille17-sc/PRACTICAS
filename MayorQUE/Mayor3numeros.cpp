/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Guille Saldaña
 *
 * Created on 9 de noviembre de 2020, 08:29 PM
 */

#include <stdio.h>

using namespace std;

/*
 * 
 */
int main() {
    
    int a,b,c;
    
printf("\n\nIngrese el numero 1:");
scanf ("%d",&a);
printf("\nIngrese el numero 2:");
scanf ("%d",&b);
printf("\nIngrese el numero 3:");
scanf ("%d",&c);

if (a<b){
 if (a<c)
 {
 if (b<c)
 printf ("\n\nEl orden es %d, %d, %d.\n",a,b,c);
 else printf ("\n\nEl orden es %d, %d, %d.\n",a,c,b);
 }
 }
 else
 {
 if (b<c){
 if (a<c)
 printf ("\n\nbEl orden es %d, %d, %d.\n",b,a,c);
 else printf ("\n\nEl orden es %d, %d, %d.\n",b,c,a);
 }
 }
 


return 0;
}

