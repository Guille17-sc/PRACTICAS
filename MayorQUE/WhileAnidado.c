/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WhileAnidado.c
 * Author: Guille Saldaña
 *
 * Created on 10 de noviembre de 2020, 04:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
 
   
  int t = 1; 
   //int a; 
   //int b;
   
   //printf("ingrese asta que tabla multiplicar\n");
   //scanf("%d\n",a );
  
   //printf("ingrese asta que tabla multiplicar\n");
   //scanf("%d\n",b);
    
    
    while(t<=10){
        int j = 1;
        while(j<=10){
        printf("%d X %d\n",t,j,t*j);
        j = j+1;
        }
        printf("\n----------------------------\n");
        t = t + 1;
    }
   
    return 0;
}

