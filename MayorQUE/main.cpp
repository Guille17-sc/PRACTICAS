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
    
printf("Ingrese 3 numeros cualquiera\n");
scanf ("%d %d %d",&a, &b, &c);

if (a<b){
 if (a<c)
 {
 if (b<c)
 printf (" El orden es %d, %d, %d. \n",a,b,c);
 else printf (" El orden es %d, %d, %d.\n",a,c,b);
 }
 }
 else
 {
 if (b<c){
 if (a<c)
 printf (" El orden es %d, %d, %d.\n",b,a,c);
 else printf (" El orden es %d, %d, %d.\n",b,c,a);
 }
 }
 


return 0;
}

