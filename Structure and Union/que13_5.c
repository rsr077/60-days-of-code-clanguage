#include<stdio.h>
struct Time{
    int hours;
    int minutes;
};
struct Journey{
    struct Time start_time;
    struct Time reach_time;
};
struct Car{
    char number[10];
    struct Journey journey;
};
int main(){
    struct Car car;
    // Input car details
    printf("Enter car number:");
    scanf("%s",car.number);
    printf("Enter starting time(hour minutes):");
    scanf("%d %d",&car.journey.start_time.hours,&car.journey.start_time.minutes);
     printf("Enter reaching time(hour minutes):");
    scanf("%d %d",&car.journey.reach_time.hours,&car.journey.reach_time.minutes);
    // Disply car details
    printf("\n Car Number: %s\n",car.number);
    printf("Starting Time%02d %02d\n",&car.journey.start_time.hours,&car.journey.start_time.minutes);
    printf("Reaching Time%02d %02d\n",&car.journey.start_time.hours,&car.journey.start_time.minutes);
    return 0;

}