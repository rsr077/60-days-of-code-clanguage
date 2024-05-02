#include<stdio.h>
#define PETROL 1
#define DISEL 2
#define TWO_WH 3
#define FOUR_WH 4
#define OLD 5
#define NEW 6

int main(){
    struct vehicle 
    {
        unsigned type : 3;
        unsigned fuel : 2;
        unsigned model :3;
    };
    struct  vehicle v;
    
      v.type=FOUR_WH;
      v.fuel=DISEL;
      v.model= OLD;
      printf("\n Type of Vehicl: %d",v.type);
      printf("\n Fuel :%d",v.fuel);
      printf("\n Model  : %d",v.model);
      return 0;

    }
    
