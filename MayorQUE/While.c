/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   While.c
 * Author: ASUS MASTER
 *
 * Created on 10 de noviembre de 2020, 03:43 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a, b, c, d, e;
    a=9;
    b=0;
    c=0;
    d=1;
    e=1;
    
    printf ("0, ");

    while(d<a){
        b=e;
        e=c;
        c=b+e;
        d++;

        printf ("%d, ",c);
    }
    
        
    return (EXIT_SUCCESS);
}

