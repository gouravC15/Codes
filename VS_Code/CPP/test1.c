#include<stdio.h>

struct car{
    char engine[20];
    char fuel[10];
    int  tank;
    float mileage;
}c3;                    //c3 is global variable for structure car

int main(){
    //c1 , c2 are local structure type var

    struct car c1 = {"DTSI", "Petrol", 37 , 18.5};
    struct car c2 = {"Kappa", "Diesel", 22 , 14.5};
    
    struct car c3 = {.engine = "XENON", .fuel='electric'};
    
    c3.tank = 30;
    c3.mileage = 19.2;

return 0; 

}
