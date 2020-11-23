/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglos.c
 * Author: ASUS MASTER
 *
 * Created on 20 de noviembre de 2020, 01:24 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

  int arreglo [100];
      int x;
       arreglo[0]=2;
       arreglo[1]=3;
  
   
    for (x=1;x<10;x++){  
        int j;
        for(j=2;j<100;j++)
        printf("%d\n",x+j);    
    }
    return (EXIT_SUCCESS);
}

