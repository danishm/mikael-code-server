#include <stdio.h>
#include <math.h>

int roundNumbers(int num1) {
    return (int)(round((double) num1 / 5.0) * 5.0);
}

int main() {
    int num1;

    printf("On a sacle of 1 to 10 how good are you at work: \n");
    scanf(num1);

    int good = roundNumbers(num1);

    if(good == 0) {
        printf("You are very smart\n");
    }
    else if(good == 5) {
        printf("You are silly\n");
    }
    else if(good == 10) {
        printf("You are the silliest person on Earth!!\n");
    }
    else{
        printf("SILLY MASTERMIND!!\n");
    }
}