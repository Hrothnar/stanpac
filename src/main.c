#include <stdio.h>
#include <stdbool.h> // give acess to C99 "key" words such as bool, true, false (which are wrappers by the nature)
#include <ctype.h>

// directive declaration
#define INCHES_PER_POUND 166

// type definition
typedef int Bool;

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
void twelve();
void thirteen();
void fourteen();

int main () {
    // one();
    // two();
    // three();
    // four();
    // five();
    // twelve();
    // thirteen();
    fourteen();


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
    printf("%o", unsignedInt); // %o specifies octal representation of the number
    printf("%x", unsignedInt); // %x specifies hexadecimal representation of the number


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

void eleven() {
    char one = 'a';
    char two = 'B';

    unsigned char three = '3';

    char ch;
    int i ;

    i = 'a'; // i is now 97 
    ch = 65; // ch is now 'A'
    ch = ch + 1; // ch is now 'B'
    ch++; // ch is now 'C'

    if ('a' <= ch && ch <= 'z') { // converts a character to upper case
        ch = ch - 'a' + 'A';
    }

    for (char i = 'A'; i <= 'Z'; i++) { // loops through all upper case letters

    }

    char upperChar = toupper('a');

    char four;
    scanf("%c", &four);
    printf(" %c", four); // skips whitespaces before the character

    do { // allows to read all character before next line character sigh
        scanf("%c", &ch);
    } while (ch != '\n');

    putchar(four); // writes a single char, alternative fo printf()
    int five = getchar(); // reads a character and stores in in four, alternative for scanf()

    while (getchar() != '\n'); // common C construction
}

void twelve() {
    int one = -123;
    unsigned two = 113u;

    int three = one + two;
    printf("The values are: %d and %d, comparison is: %d, sum is: %d\n", one, two, one < two, three);


    char c;
    short int s;
    int i;
    unsigned int u;
    long int l;
    unsigned long int ul;
    float f;
    double d;
    long double ld;

    i = i + c ; /* c is converted to int */
    i = i + s; /* s is converted to int */
    u = u + i ; /* i is converted to unsigned int */
    l = l + u; /* u is converted to long int */
    ul = ul + l; /* l is converted to unsigned long int */
    f = f + ul; /* ul is converted to float */
    d = d + f; /* f is converted to double */
    ld = ld + d; /* d is converted to long double */
}

void thirteen() {
    printf("Size of short: in %zu\n\n", sizeof(short)); // z convertor is used to print sizeof value (unsigned long)

    printf("Size of char: %lu bit\n", sizeof(char) * 8u);

    printf("Size of short: %lu bit\n", sizeof(short) * 8u);
    printf("Size of int: %lu bit\n", sizeof(int) * 8u);
    printf("Size of long: %lu bit\n", sizeof(long) * 8u);
    printf("Size of long long: %lu bit\n", sizeof(long long) * 8u);

    printf("Size of float: %lu bit\n", sizeof(float) * 8u);
    printf("Size of double: %lu bit\n", sizeof(double) * 8u);
    printf("Size of long double: %lu bit\n", sizeof(long double) * 8u);
}

void fourteen() {
    int array[10]; // a declaration of an array of integers with length 10 
    array[0] = 1;
    printf("%d\n", array[3]);

    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // declaration and initialization
    int array2[10] = {0}; // initialization of an array of zeros

    int array2[] = {0, 1, 2}; // if an initialization is present, the length specification might be omitted
    
    int array3[15] = {[9] = 7, [2] = 29, [14] = 48}; // designated initialization allows to specify values for particular cells

    int array4[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29}; // this designation forces the array to have 24 cells

    int array5[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6}; // also allowed way of initializing

    int array6[5][9] = { {1, 1, 1, 1, 1, 0, 1, 1, 1}, // an initialization of a multidimensional array, inner braces could be omitted
                    {0, 1, 0, 1, 0, 1, 0, 1, 0},
                    {0, 1, 0, 1, 1, 0, 0, 1, 0}};

    double array7 [2] [2] = { [0] [0] = 1.0, [1] [1] = 1.0};

    const int array8[] = {0, 1, 2}; // an array that can't be modified in runtime

}