#include <stdio.h>
#include <stdbool.h> // give acess to C99 "key" words such as bool, true, false (which are wrappers by the nature)
#include <ctype.h>

// directive declaration
#define INCHES_PER_POUND 166
#define LEN 10

// type definition
typedef int Bool;

// function declaration (or function prototype)
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
void sixteen(), seventeen(), eighteen(), nineteen();

void decomposeV2(double, long *, double *);
int *max(int *, int *);

int main()
{
    // one();
    // two();
    // three();
    // four();
    // five();
    // twelve();
    // thirteen();
    // fourteen();
    nineteen();

    return 0;
}

void zero()
{
    /*
        in C (C99) the 'return' statement can't be used in a non-void function without a subsequent expression
        I suppose this statement 'return;' does have an expression, which is void, since a function is not a void this becomes illegal
        the address of the first byte is said to be the address of the variables
    */
}

void one()
{
    int integer = 2;
    float floatingPoint = 5.0256f;

    printf("An integer number is: %d, a floating point number is: %.2f\n", integer, floatingPoint); // 0.nf - round a number to n chars
}

void two()
{
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

void three()
{
    int one;
    float two, three;

    printf("Give me some numbers fella: ");
    scanf("%d%f%f", &one, &two, &three);
    printf("Your numbers are: %d | %f | %f\n", one, two, three);
}

void four()
{
    int one, two;

    printf("Give me some numbers fella: ");
    scanf("%d / %d", &one, &two); // the amount of whitespaces does mot make a difference, the existence is matter
    printf("Your numbers are:\t %d | %d\n", one, two);
    printf("Numbers are:\t\t %d | %d\n", one, two);
}

void five()
{
    bool flag = true; // equals to: _Bool flag = 1; or int flag = 1; or chat flag = 1;
    int i = 0;

    while (flag && i < 10)
    {
        printf("You're great: %d times\n", ++i);
    }
}

void six()
{
    int n;
    printf("Give me a number between 1 and 5\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Awful");
        break;
    default:
        printf("Such grade does not exist");
        break;
    }
}

void seven()
{
    int i;

    while (i++ < 10)
    {
        printf("%10d%10d", i, i * i); // this trick allows to print numbers in neat aligned columns
    }

    for (int i = 0; i <= 10; i++)
    {
        printf("The iterations number is: %d\n", i);
    }
}

void eight()
{
    for (int i = 0, n = 10; i < n; i++)
    {

        if (n % 10 == 0)
        {
            goto done;
        }

    done: // a label used by goto statement
        if (i < n)
            printf("%d is divisible by %d\n", n, i);
        else
            printf("%d is prime\n", n);
    }
}

void nine()
{
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

void ten()
{
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
    printf("%e", doublePrecision);  // %e, %f, %g converters are used for reading and writhing single and double precision floating point numbers
    scanf("%lf", &doublePrecision); // but for scanf() the l sign is required for double (and L (upper case) for long double)
}

void eleven()
{
    char one = 'a';
    char two = 'B';

    unsigned char three = '3';

    char ch;
    int i;

    i = 'a';     // i is now 97
    ch = 65;     // ch is now 'A'
    ch = ch + 1; // ch is now 'B'
    ch++;        // ch is now 'C'

    if ('a' <= ch && ch <= 'z')
    { // converts a character to upper case
        ch = ch - 'a' + 'A';
    }

    for (char i = 'A'; i <= 'Z'; i++)
    { // loops through all upper case letters
    }

    char upperChar = toupper('a');

    char four;
    scanf("%c", &four);
    printf(" %c", four); // skips whitespaces before the character

    do
    { // allows to read all character before next line character sigh
        scanf("%c", &ch);
    } while (ch != '\n');

    putchar(four);        // writes a single char, alternative fo printf()
    int five = getchar(); // reads a character and stores in in four, alternative for scanf()

    while (getchar() != '\n')
        ; // common C construction
}

void twelve()
{
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

    i = i + c;   /* c is converted to int */
    i = i + s;   /* s is converted to int */
    u = u + i;   /* i is converted to unsigned int */
    l = l + u;   /* u is converted to long int */
    ul = ul + l; /* l is converted to unsigned long int */
    f = f + ul;  /* ul is converted to float */
    d = d + f;   /* f is converted to double */
    ld = ld + d; /* d is converted to long double */
}

void thirteen()
{
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

void fourteen()
{
    int array[10]; // a declaration of an array of integers with length 10
    array[0] = 1;
    printf("%d\n", array[3]);

    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // declaration and initialization
    int array2[10] = {0};                             // initialization of an array of zeros

    int array3[] = {0, 1, 2}; // if an initialization is present, the length specification might be omitted

    int array4[15] = {[9] = 7, [2] = 29, [14] = 48}; // designated initialization allows to specify values for particular cells

    int array5[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29}; // this designation forces the array to have 24 cells

    int array6[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6}; // also allowed way of initializing

    int array7[5][9] = {{1, 1, 1, 1, 1, 0, 1, 1, 1}, // an initialization of a multidimensional array, inner braces could be omitted
                        {0, 1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 1, 0, 0, 1, 0}};

    double array8[2][2] = {[0][0] = 1.0, [1][1] = 1.0};

    const int array9[] = {0, 1, 2}; // an array that can't be modified in runtime
}

// if a parameter is a multidimensional array, only the length of the first dimension may be omitted when the parameter is declared
int sumTwoDimensionalArray(int array[][LEN], int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += array[i][j];
    return sum;
}
/*
    With the use of a variable-length array (VLA), the exact length of an array could be passed as an argument.
    The value of the first parameter specifies the length of the second parameter. The order here is importand since most left argument initialises first
*/
void fifteen(int n, int array[n])
{
    // there are several ways to writhe the prototype for function that has VLA as one of parameters
    int sumArray(int n, int array[n]);

    // marks the second parameter as optional, in case where the name of the first parameter is omitted it wouldn't be specify that the length of the array in n
    // an asterisk fives a clue to the compiler that the length of an array is related to the parameter that comes earlier in the list
    int sumArray(int, int array[*]);

    // it is also legal to leave the braces empty
    // leaving braces empty isn't a good choice, because it doesn't expose the relationship between n and array
    int sumArray(int, int array[]);
    int sumArray(int, int[]);

    // in general the length of VLA can be any expression

    // int concatenateArrays(int n, int m, int array1[n], int array2[m], int array3[n + m]) {

    // }

    // Prototypes for this function include the following:
    int sum_two_dimensional_array(int n, int m, int a[n][m]);
    int sum_two_dimensional_array(int n, int m, int a[*][*]);
    int sum_two_dimensional_array(int n, int m, int a[][m]);
    int sum_two_dimensional_array(int n, int m, int a[][*]);
}

// VLA are also very useful while working with multidimensional arrays
int sum_two_dimensional_array(int n, int m, int a[n][m])
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            sum += a[i][j];
    return sum;
}

void sixteen()
{
    /*
        C99 allows to use the keyword 'static' in the declaration of an array parameter
        Using static in this way has no effect on the behavior of the program. The presence of static is merely a “hint” that may allow a C compiler to generate faster
        instructions for accessing the array. (If the compiler knows that an array will
        always have a certain minimum length, it can arrange to “prefetch” these elements
        from memory when the function is called, before the elements are actually needed
        by statements within the function.)
        One last note about static: If an array parameter has more than one dimension, static can be used only in the first dimension (for example, when specifying the number of rows in a two-dimensional array).
    */
    // int sumArray(int array[static 3], int n) { // guaranties the length of an array at least 3

    // }
}

int sumArray(int n, int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int sumArray2(int array[static 3], int n)
{ // guaranties the length of an array at least 3
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

void seventeen()
{
    // in C89 array, that is intend to be used as an argument of a calling function must be initialized firs, like so
    int array[] = {3, 0, 2, 1};
    int total = sumArray2(array, 4);

    // in C99 an anonymous array can be created 'on the fly', this technique is also known as compound literals
    // A compound literal resembles a cast applied to an initializer. In fact, compound literals and initializers obey the same rules
    int total2 = sumArray2((int[]){3, 0, 2, 1}, 5); // also, we can specify the length of an array explicitly

    int i = 2;
    float j = 3.3f;
    double k = 5.2;

    int total3 = sumArray2((int[]){2 * i, i + j, j * k}, 3);
    int total4 = sumArray2((const int[]){2 * i, i + j, j * k}, 3); // an array could be constant
}

void eighteen()
{
    /*
        putting 'static' in the declaration of a local variable causes it to have 'static storage duration'
        it means that the value will remain its value throughout the whole lifecycle of the program
        but, it is sill a local variable which is visible only inside the function
        other calls of this function could address this variable
    */
    static float pi = 3.14f;

    // static local variables in recursion share the same static variable, instead of creating new ones
}

void nineteen()
{
    /*
        pointers are variables that store the addresses of objects
        pointers or (pointer variables) must be preceded by * like so:
        int *p; - this declaration states that a pointer p is capable of pointing to an object of type int
        C requires that pointers point only to a particular reference type. Moreover, they can point to another pointers
    */

    // pointers can appear in declarations along with other variables
    int v1, v2, a1[10], a2[20], *p1, *p2;

    /*
        C provides a pair of operators designed specifically for use with pointers
            & operator is used to find the address of a variable
            * operator (indirection operator) gives access to the object that a pointer points to,
            if p is a pointer, then *p represents the object to which p currently points
    */

    int *p3; // allocate space by declaring a pointer variable, now it points nowhere, but in general is it crucial to initialise a pointer

    /* here are the ways how pointer can be initialized */
    int v3, *p4;
    p4 = &v3; // assigns the address of v3 to the pointer p4, now p4 pointes to v3 (in other words, p4 contains the address of v3)

    int v4;
    int *p5 = &v4; // it's possible to initialize a pointer variable at the time it is declared

    int v5, *p6 = &v5; // it might even look like so

    /* once a pointer variable points to an object, the * operator can be used to access the value it points to */
    printf("%d\n", *p6); // this will display the value! of v5 (now is't undefined)

    v4 = *&v5; // equals to v4 = v5; (showcase of the pointer operators)

    /*
        as long as p6 points to v5, *p6 is an alias fo v5
        Not only does *p6 have the same value as v5, but changing the value of *p6 also changes the value of v5 (*p6 is an l-value, so assignment to it is legal)
    */

    int v6, *p7;
    p7 = &v6;
    v6 = 1;

    printf("%d | I should print 11\n", v6); // prints 1
    printf("%d | I should print 1\n", *p7); // prints 1

    *p7 = 2;

    printf("%d | I should print 2\n", v6);  // prints 2
    printf("%d | I should print 2\n", *p7); // prints 2

    /* as being said the * operator must not be applied to an uninitialized pointer variable - the behavior will be undefined */
    int *p8;
    // printf("%d\n", *p8); // wrong, p8 holds nothing (getting this: Segmentation fault (core dumped) "$outputExe")

    /* assigning a value to *p8 is particularly dangerous. if p8 happens to contain a valid memory address, the following assignment will attempt to modify the data stored at that address */
    // *p8 = 1; // dangerous, should be avoided (getting this: Segmentation fault (core dumped) "$outputExe")

    /*
        pointer assignment
        C allows the use of the assignment operator to copy pointers, provided that they have the same type
    */
    int v7, v8, *p9, *p10;

    p9 = &v7; // the address of v7 copies into p9
    p10 = p9; // copies the content of p9 (address of v7) into p10, now p9 and p10 point to the same memory address

    *p9 = 1;
    *p10 = 2;

    printf("%d | I should print 2\n", *p9); // prints 2

    /* not confuse ! */
    p9 = p10;   // pointer assignment
    *p9 = *p10; // value assignment

    p9 = &v7;
    p10 = &v8;
    v7 = 1;

    *p9 = *p10; // copies the value that p10 points to (v8) into the object that p9 points to (v7)

    /* pointers as arguments */
    decomposeV2(3.14159, &v7, &v8);

    /*
    In most cases if a function accepts a pointer as one of its parameters, presumably the argument will be changed by the function.
    Nevertheless there is the case when it is not needed. It this situation, the key word 'const' could be placed before argument type to prevent its change, event if it's a pointer.
        void f(const int *p)
        {
            *p = 0; // WRONG
        }
    */

    /* pointers as return types */
    int *p11, v9 = 9, v10 = 10;

    p11 = max(&v9, &v10);
    printf("%d | I should print 10\n", *p11); // prints 10
}

void decomposeV2(double x, long *intPart, double *fracPart)
{
    *intPart = (long)x;
    *fracPart = x - *intPart;
}

/**
 * Returns a pointer to whichever integer is larger
 * Although the function returns one of the pointers passed to it as an argument, that's not the only possibility. 
 * A function could also return a pointer to an external variable or to a local variable that's been declared static.
 */
int *max(int *x, int *y)
{
    if (*x > *y)
    {
        return x;
    }
    return y;
}