#include <stdio.h>
// directive declaration
#define INCHES_PER_POUND 166 

// function declaration
void one(); 
void two();
void three();
void four();

int main () {
    // one();
    // two();
    // three();
    four();


    return 0;
}

void one() {
    int integer = 2;
    float floatingPoint = 5.0256f;

    printf("An integer number is: %d, a floating point number is: %.2f\n", integer, floatingPoint); // 0.nf - round a number to n chars
}

void two() {
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
}

void three() {
    int one;
    float two, three;

    printf("Give me some numbers fella: ");
    scanf("%d%f%f", &one, &two, &three);
    printf("Your numbers are: %d | %f | %f\n", one, two, three);
}


void four() {
    int one, two;

    printf("Give me some numbers fella: ");
    scanf("%d / %d", &one, &two); // the amount of whitespaces does mot make a difference, the existence is matter
    printf("Your numbers are:\t %d | %d\n", one, two);
    printf("Numbers are:\t\t %d | %d\n", one, two);
}