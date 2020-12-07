/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Guille Saldaña 
 *
 * Created on 3 de diciembre de 2020, 06:53 PM
 */

#include<stdio.h>


/*
 * 
 */
int main(void){
    int opcion;
    float P,F,C,K,k;
	do	{
			printf("Bienvenido\n");
                        printf("Selecciones la temperatura a calcular:\n");
                        printf("1).- Celcius a Fahrenheit \n");
			printf("2).- Fahrenheit a Celcius \n");
			printf("3).- Celcius a Kelvin 3\n");
                        printf("4).- Fahrenheit a Kelvin\n"); 
                        printf("5) Salir\n");
                        printf("\n-------------------------------------------------\n");
		          scanf("%d°", &opcion);
                          printf("Ingrese la cantidad:\n");
                          scanf("%f",&P);
                        switch(opcion)	{
				case 1:{
				F = (9*P)/5+32;
                                printf("\n el equivalente en grados Fahrenheit es:%f\n°",F);
                                 printf("\n-------------------------------------------------\n");
                                }
				break;
                                
                            case 2:{
                                C = 5.0/9.0*(P-32);
                                        printf("\n el equivalente en grados celsius es:%f\n°",C);
                                        printf("\n-------------------------------------------------\n");
                                }
				break;
                                
				case 3:{
                                        K = P + 273.15;
                                        printf("\n el equivalente en kelvil es: %f\n°",K);
                                        printf("\n-------------------------------------------------\n");
                                }
				break;
                                
				case 4:{
                                        k =(P-32)*5/9+273.15;
                                        printf("\n el equivalente en kelvil es: %f\n°",k);
                                        printf("\n-------------------------------------------------\n");
                                }
                                break;
                                
                                case 5:
                                    
				break;
				default:
					printf("Salio\n");
				break;

			}
	}while(opcion != 5);
	return 0;


} 
