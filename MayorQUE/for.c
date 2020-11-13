/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   for.c
 * Author: ASUS MASTER
 *
 * Created on 12 de noviembre de 2020, 05:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    
    int t;
    for(t=1;t<=10;t++){
        int j;
        for(j=1;j<=10;j++){
        printf("%d X %d\n",t,j,t*j);
        }
        printf("\n----------------------------\n");
        }
        

    return 0;
}

