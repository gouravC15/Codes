/*Prob statement:The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/

#include<stdio.h>
int main(){
    float distance_in_km=0;
    float meter=0,feet=0,inches=0;

    printf("Enter distance between two cities (in km.): ");
    scanf("%f",&distance_in_km);
    meter=distance_in_km*1000;      //1km=1000m
    feet=distance_in_km*3280.84;    //1km=3280.84 feets
    inches=distance_in_km*39370.08;  //1km = 39370.08 inches
    
    printf("Distance between two cities in Km=%f, \nIn meter=%f, \nIn Feet=%f, \nIninches=%f",distance_in_km,meter,feet,inches);

    return 0;
}