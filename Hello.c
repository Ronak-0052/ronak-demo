/*Write a function to print "Hot" or "Cold" depending no the temperature user enters.*/
#include<stdio.h>

int temperatureDetector(int temp){
    if (temp<15)
    {
        return -1;
    }
    else if (temp>30)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    int temp;
     printf("Enter Temperature (in celcius) : ");
     scanf("%d", &temp);

     int result = temperatureDetector(temp);
     
     if (result == -1)
     {
        printf("Cold");
     }
     else if (result == 1)
     {
        printf("Hot");
     }
     else
     {
        printf("moderate");
     }
    return 0;
}