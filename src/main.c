#include <stdio.h>
#include <stdbool.h> // give acess to C99 "key" words such as bool, true, false (which are wrappers by the nature) 

// directive declaration
#define INCHES_PER_POUND 166 

// function declaration
void one(); 
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();

int main () {
    // one();
    // two();
    // three();
    // four();
    // five();


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

void five() {
    bool flag = true; // equals to: _Bool flag = 1; or int flag = 1; or chat flag = 1;
    int i = 0;

    while (flag && i < 10) {
        printf("You're great: %d times\n", ++i);
    }
}

void six() {
    int n;
    printf("Give me a number between 1 and 5\n");
    scanf("%d", &n);

    switch (n) {
    case 1: case 2: case 3: case 4: case 5:
        printf("Awful");
        break;
    default:
        printf("Such grade does not exist");
        break;
    }
}

void seven() {
    int i;
    
    while (i++ < 10) {
        printf("%10d%10d", i, i * i); // this trick allows to print numbers in neat aligned columns
    }


    for (int i = 0; i <= 10; i++) {
        printf("The iterations number is: %d\n", i);
    }
}

void eight() {
    for (int i = 0, n = 10; i < n; i++) {
        
        if (n % 10 == 0) {
            goto done;
        }

        done: // a label used by goto statement
            if (i < n)
                printf("%d is divisible by %d\n", n, i);
            else
                printf("%d is prime\n", n);
    }
}

void nine() {
    short int one;
    unsigned short int two = 2u;
    short one1;
    unsigned short two1 = 2u;

    int three;
    unsigned int four;

    long int five = -22l;
    unsigned long int six = 22lu;
    long five1 = 0x22l;
    unsigned long six1 = 022l;

    long long int seven;
    unsigned long long int eight = 2ull;
    long long seven1 = 4LL;
    unsigned long long eight1 = 0x53ULL;

    int octal = 0237; // 159(10)
    int decimal = 237;
    int hexadecimal = 0x1af; // 431(10)

    printf("Did you think you can't do it? %d\n", octal + decimal + hexadecimal);
    
    // %d conversion works only for int type
    unsigned int unsignedInt;
    printf("%u", unsignedInt); // %u specifies decimal representation of the number
    printf("%o", unsignedInt); // %u specifies octal representation of the number
    printf("%x", unsignedInt); // %u specifies hexadecimal representation of the number


    short shortInteger;
    printf("%hd", shortInteger);
    printf("%ho", shortInteger);
    printf("%hu", shortInteger);
    printf("%hx", shortInteger);


    long longInteger;
    printf("%ld", longInteger);
    printf("%lo", longInteger);
    printf("%lu", longInteger);
    printf("%lx", longInteger);


    long long longLongInteger;
    printf("%lld", longLongInteger);
    printf("%llo", longLongInteger);
    printf("%llu", longLongInteger);
    printf("%llx", longLongInteger);
}

void ten() {
    float one = 23.64e+3f;
    double two = 23.31;
    long double three = 23.3e3l;

    // f sign forces a compiler to allocate space required for float type, by default double precision type space allocated
    float x1 = 57.0f;
    float x2 = 57.f;
    float x3 = 57.0e0f;
    float x4 = 57E0f;
    float x5 = 5.7e1f;
    float x6 = 5.7e+1f;
    float x7 = .57e2f;
    float x8 = 570.e-1f;

   
    double doublePrecision = 570.e-1;
    printf("%e", doublePrecision); // %e, %f, %g converters are used for reading and writhing single and double precision floating point numbers
    scanf("%lf", &doublePrecision); // but for scanf() the l sign is required for double (and L (upper case) for long double)
}