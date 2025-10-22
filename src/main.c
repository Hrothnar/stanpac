#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // give acess to C99 "key" words such as bool, true, false (which are wrappers by the nature)
#include <ctype.h>x

// directive declaration
#define INCHES_PER_POUND 166
#define LEN 10
#define STR_LEN 80
#define SENT_LEN 160

// type definition
typedef int Bool;

// function declaration (or function prototype)
void one(), two(), three(), four(), five(), six(), seven(), eight(), nine();
void twelve(), thirteen(), fourteen(), sixteen(), seventeen(), eighteen(), nineteen();
void twenty(), twentyOne(), twentyTwo(), twentyThree(), twentyFour(), twentyFive(), twentySix(), twentySeven(), twentyEight();

void decomposeV2(double, long *, double *);
int *max(int *, int *);
int sumArrayPointerLoop();
void twoDimensionArrayLoop();
char convertToHexChar(int);
int readLine(char[], int);
void f1(int), f2(int, int);
char *concat(const char *, const char *);

struct part
{
    int number;
    char name[25];
    int onHand;
}; // the semicolon must follow a struct declaration

void printPart(part);
struct part buildPart(int, const char *, int);

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
    // nineteen();
    // twenty();
    // twentyOne();
    // twentyTwo();
    // twentyThree();
    // twentyFour();
    // twentyFive();
    // twentySix();
    // twentySeven();
    twentyEight();

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

void twenty()
{
    /* pointers and arrays */
    /**
     * C supports three forms of pointer arithmetic:
     *   adding an integer to a pointer,
     *   substracting an integer from a pointer,
     *   substracting on pointer from another
     */

    int a1[10], *p1, *p2, v1, v2;

    /**
     * Adding an integer j to a pointer p yields a pointer to the element j places after the on that p points to.
     * More  precisely, if p points to the array element a[i], then p + j points to a[i+j].
     * When one pointer is subtracted from another, the result is the distance (measured in array elements) between the pointers.
     * Thus, if p points to a[i] and q points to a[j], then p - q is equal to i - j.
     */

    // subtracting an integer from a pointer
    p1 = &a1[8];
    p2 = p1 - 3;
    p1 -= 6;

    // subtraction one pointer from another
    p1 = &a1[5];
    p2 = &a1[1];

    v1 = p1 - p2; // v1 is 4
    v1 = p2 - p1; // v1 is -4

    /**
     * Performing arithmetic on a pointer that doesn't point to an array element causes undefined behavior.
     * Furthermore, the effect of subtraction on pointer from another is undefined unless both point to elements fo the same array.
     */

    /**
     * Pointers also could be compared using known relation and equality operators.
     * The outcome of the comparison depends on the relative positions of the two elements in the array.
     */

    // Pointer to compound literals
    int *p3 = (int[]){3, 0, 3, 4, 1};

    /**
     * p3 points to the first element of a five-element array.
     * Using a compound literal saves the trouble of first declaring an array variable and then making p3 point to the first element of that array
     */

    int sum = sumArrayPointerLoop();
    printf("The sum of the array is %d\n", sum); // the sum is 308

    /** combining the * and ++ operators */
    // Here's the simple case of storing a value into an array element and then advancing to the next element.

    a1[v1++] = v2; // using array subscripting
    *p1++ = v2;    // if p1 points to an array element

    /**
     * Expression               Meaning
     * *p++ or * (p++)          Value of expression is *p before increment; increment p later
     * (*p)++                   Value of expression is *p before increment; increment *p later
     * *++p or * (++p)          Increment p first; value of expression is *p after increment
     * ++*p or ++ (*p)          Increment *p first; value of expression is *p after increment
     */

    /* using an array name as a pointer */
    int a2[10];
    *a2 = 7;        // a2 as a pointer to the first element in the array
    *(a2 + 1) = 12; // stores 12 in a[1] element

    /**
     * In general, a + i is the same as &a[i] and *(a + i) is equivalent to a[i]/
     * The fact that an array name can serve as a pointer makes it easier to write loops that step through an array, like so:
     * for (p = a; p < a + n; p++) {
     *     sum += *p;
     * }
     */
    /**
     * Although an array name can be used as a pointer, it's not possible to assign it a new value.
     *   a++ // wrong
     * but, there's a workaround:
     *   p = a;
     *   p++;
     */
    /**
     * C allows to subscript a pointer as though it were an array name:
     * int n = 10, a[n], i, sum = 0, *p = a;
     * for (i = 0; i < n; i++) {
     *      sum += p[i];
     * }
     */

    /* processing the elements of a multidimensional array */
    // to be filled up
    twoDimensionArrayLoop();

    /* pointers and variable-length arrays */
    /**
     * Pointes are allowed to point to elements of variable-length arrays (VLAs).
     */
    f1(11);
    /**
     * When VLA has more than one dimension, the type of the pointer depends on the length of each dimension except of the first.
     */
    f2(5, 7);
}

/**
 * We could just as easily have written the loop without pointers, of course, using subscripting instead.
 * The argument most often cited in support of pointer arithmetic is that it can save execution time.
 * However, that depends on the implementation - some C compilers actually produce better code for loops that rely on subscripting.
 */
int sumArrayPointerLoop()
{
    int a[] = {11, 22, 33, 44, 55, 66, 77}, n = 7, sum = 0, *p;

    for (p = &a[0]; p < &a[n]; p++)
    {
        sum += *p;
    }

    return sum;
}

void twoDimensionArrayLoop()
{
    int *p, rows = 6, columns = 8, a[rows][columns];

    for (p = &a[0][0]; p <= &a[rows - 1][columns - 1]; p++)
    {
        *p = 0;
    }
}

void f1(int n)
{
    int a[n], *p;
    p = a;
    // logic
}

void f2(int n, int m)
{
    /**
     * Since the ttype of p depends on n, which isn't constant, p is said to have a variably modified type.
     * The validity of an assignment such as p = a can't always be determined by the compiler.
     *
     */
    int a[m][n], (*p)[n];
    p = a;
    // logic
}

void twentyOne()
{
    /* strings*/
    /**
     * A sting literal is a sequence of characters enclosed withing double quotes: "sting literal"*.
     * String literals may contain the same escape sequences as charater constants.
     * Using octal and hexadecimal escape sequences in string literals should be conscious, it has some caveats.
     */

    printf("When you come to a fork in the road, take it.\
            -- Yogi Berra"); // '\' allows to split a sring an continue on another line

    /* There's another way to move a part of a sting to another line */

    printf("When you come to a fork in the road, take it. "
           "-- Yogi Berra"); // allows to split a sring with the help of the whitespace and continue on another line

    /**
     * In essence, C treats sting literals as character arrays. When a C compiler encounters a string literal of length n in a program,
     * it sets aside n + 1 bytes of memory for the string. This area of memory will contain the characters in the string, plus on extra character
     * - the null character - to mark the end of the string. The null character is a byte whose bits are all zero, so it's represented by the \0 escape sequence.
     */

    "abc"; // is stored as an array [a, b, c, \0];
    "";    // is stored as an array [\0];

    /**
     * Since a sting literal is stored as an array, the compiler treats it as a pointer of type char *.
     * Both printf and scanf, for example, expect a value of type char * as their first argument.
     */

    /* operations on stirng literals */
    char *p1;
    p1 = "abc"; // doesn't copy the characters in "abc"; it merely makes p1 point to the first character of the string.

    // C allows pointers ot be subscripted
    char ch1;
    ch1 = "abc"[1];

    const asHex = convertToHexChar(4);

    // attempting to modify a string literal causes undefined behavior:
    char *p2 = "abc";
    *p2 = 'd'; // wrongs

    /* one must now use a character where char pointer expected */
}

char convertToHexChar(int digit)
{
    // the showcase of a string subscription
    return "0123456789ABCDEF"[digit];
}

void twentyTwo()
{
    /* string variables */
    /**
     * In C despite other language there's no dedicated 'string' type, instead it allows every array of characters to be 'string'
     * Due to this fact, a programmer should be careful when declaring such, every array of character that is aimed to serve as a string
     * must be proceeded with a null terminator at the end, as the last cell of the array.
     */

    char string[STR_LEN + 1]; // declaring a string, allocating memory + one termination character

    /**
     * Declaring a character array to have length STR_LEN + 1 doesn't mean that is will always contain a string of STR_LEN characters.
     * The length of a string depends on the position of the termination null character, not on the length of the array in which the string is stored.
     */

    /**
     * The compiler will put the characters from "June 14" in the date1 array, then add a null character so that date1 can be used as a string.
     * Although "June 14" appears to be a sring literal, it's not. Instead, C views it a an abbreviation for an array initializer.
     */
    char date1[8] = "June 14";                                 // declaring of a sring variable = [J, u, n, e, , 1, 4, \0];
    char date2[8] = {'J', 'u', 'n', 'e', ' ', '1', '4', '\0'}; // equals to the row above
    // if an initializer is too short the sring variable then remaining cells will be filled with null terminator character

    char date3[7] = "June 14"; // legal, but, there's no room for \0, so I can't be used as a

    char date4[] = "June 14"; // omitting the length on declaration

    /* Character Arrays versus Character Pointers */
    /**
     * There are significant differences between these declarations.
     * In the array version the characters stored in date4 can be modifies, lke the elements of any array.
     * In the pointer version, date5 pointes to a string literal, and sring literals shouldn't be modified.
     *
     * In the array version date4 is an array name. In the pointer version, date5 is a variable that can be made to point to other strings
     * during program execution.
     */
    char date5[] = "June 14";
    char *date6 = "June 14";

    char *p1; // declaring a pointer isn't enough if modified char array is needed

    // now it points to an array of characters
    char string2[STR_LEN + 1], *p2;
    p2 = string2;

    /* Reading and Writing Strings */
    char str[] = "Are we having fun yet?";
    printf("%s\n", str);   // Are we having fun yet?
    printf("%.6s\n", str); // Are we

    /**
     * A string, like a number, can be printed withing a field. The %ms conversion will display a sting in a field of size m.
     * A string could be right - m or left - -m adjusted
     */

    puts(str); // writes the string and additional new-line character

    /* Reading Srings Using scanf and gets */
    /**
     * The %s conversion specification allow scanf to read a string into a character array
     * There's no need to put the & operator in front of str in the call of scanf,
     * like any array name, str is treated as a pointer when passed to a function
     */

    // scanf("%s", str); // a sting read using scanf will never contain white space

    /**
     * As alternative there's a function = gets() tat does not skip white space before starting to read the string.
     * It reads until it finds a new-line character (scanf stops at any white-space character). Incidentally, gets() discards the new-line character
     * instead of storing it in the array, the null character takes its place.
     */

    char sentence[SENT_LEN + 1];

    printf("Enter a sentence (scanf()):\n"); // "To C, or not to C: that is the question."
    scanf("%s", sentence);                   // "To"

    printf("The stored string (scanf()): ");
    puts(sentence);

    printf("Enter a sentence (gets()):\n"); // "To C, or not to C: that is the question."
    gets(sentence);                         // " To C, or not to C: that is the question."

    printf("The stored string (gets()): ");
    puts(sentence);

    // scanf("%4s", sentence); // 4 - indicates the length of a sring that will be read

    // readLine(sentence, 15);
}

/**
 * Since scanf() and gets() are not particularly convenient, programmers tend to write their own string reading functions.
 * This one as an example of a such function.
 */
int readLine(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        str[i] = '\0';
        return i;
    }
}

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define IS_EVEN(n) ((n) % 2 == 0)
#define PRINT_INT(n) printf(#n " = %d\n", n)
#define ADD(x, y) (x + y)
#define TEST(condition, ...) ((condition) ? printf("Passed test: %s\n", #condition) : printf(__VA_ARGS__))

void twentyThree()
{
    /** the preprocessor */

    /**
     * Most preprocessing directives fall into one of three categories:
     * Macro definition:
     *  The #define directive defines a macro; the #undef directive removes a macro definition
     * File inclusion:
     *  The #include directive causes the contents of a pecified file to be include in a program.
     * Conditional compilation:
     *  The #if, #ifdef, #ifndef, #elif, #else and #endif directives allow blocks of text to be either
     *  included in or excluded from a program, depending on conditions that can be tested by the preprocessor.
     *
     * There are also #error, #line and #pragma directives, they are more specialized and therefore used less often.
     * Directives could be continues on next line if the previous ended with \ symbol.
     */

    /**
     * Simple macros:           #define identifier replacement-list
     * Parameterized macro:     #define identifier(x1, x2, ..., x3) replacement-list
     */

    int j, k, m, n, i = MAX(j + k, m - n); // -> ((j + k) > (m - n) ? (j + k) : (m - n))
    if (IS_EVEN(i))                        // -> ((i) % 2 == 0)
        i++;

    /**
     * Macro definitions may contain two special operators, # and ##.
     * Neither operator is recognized by the compiler; instead, they're executed during preprocessing.
     * The # operator converts a macro argument into a string literal; is can appear only in the
     * replacement list of a parameterized macro.
     * The ## operator is rarely used.
     */

    PRINT_INT(k / m); // -> printf("k / m" " = %d\n", k / m)

    /**
     * Creating longer macros is now a simple task, considering how preprocessor replaces them.
     * But this syntax in general allow to create such macros, but unfortunately, it cannot be used in every situation:
     *          #define ECHO(s) (gets(s), puts(s)) // an example of a complex macros
     */

    /** predefined macros */

    /**
     * __LINE__ Line number of file being compiled
     * __FILE__ Name of file being compiled
     * __DATE__ Date of compilation(in the form "Mmm dd yyyy")
     * __TIME__ Time of compilation (in the form "hh:mm: ss")
     * __STDC__ 1 if the compiler conforms to the C standard (C89 or C99)
     *
     * C99
     * __STDC__ HOSTED__ 1 if this is a hosted implementation; 0 if it is freestanding
     * __STDC__ VERSION__ Version of C standard supported
     * __STDC_IEC_559__ 1 ifIEC 60559 floating-point arithmetic is supported
     * __STDC IEC 559 COMPLEX__ 1 if EC 60559 complex arithmetic is supported
     * __STDC_ISO_10646__ yyyymmL if wchar_t values match the ISO 10646 standard of the specified year and month
     */

    /** empty macro arguments C99 */

    /**
     * C99 allows any or all of the arguments in a macro call to be empty.
     * Such a call ill contain the same number of commas as a normal call, however.
     * In most cases, the effect of an empty argument is clear. Wherever the corresponding parameter name
     * appears in the replacement list, it's replaced by nothing - it simply disappears from the replacement list.
     */

    i = ADD(j, k); // -> (j + k)
    i = ADD(, k);  // > ( + k)

    /**
     * When an empty argument is an operand of the # or ## operators, special rules apply.
     * If an empty argument is "stringized" by the # operator, the result is "" (the empty string).
     */

    /** macros with a variable number of arguments C99 */

    int voltage, maxVoltage;
    TEST(voltage <= maxVoltage, "Voltage %d exceeds %d\n", voltage, maxVoltage);

    /**
     * There's also __func__ identifier that stores the name of the currently executing function
     */
}

void twentyFour()
{
    /* structs */

    struct
    {
        int number;
        char name[25];
        int onHand;
    } one, two;

    struct
    {
        int number;
        char name[25];
        int onHand;
    } three = {322, "Potato", 11},
      four = {153, "Strawberry", 87},
      five = {.onHand = 32, .number = 482, .name = "Toy car"};

    printf("One number: %d\n", one.number);
    printf("Two name: %s\n", two.name);

    one.number = 444;
    two.onHand++;

    one = two; // copies all members from one struct to another

    /* declaring a structure tag */

    /**
     * A structure tag is a name used to identify a particular kind of structure.
     * All structures declared to have type struct part are compatible with one another.
     * The following example declares a structure tag named part:
     */

    // struct part
    // {
    //     int number;
    //     char name[25];
    //     int onHand;
    // }; // the semicolon must follow a struct declaration

    struct part six, seven; // the word "struct" shall remain in a variable declaration

    /* defining a structure type */

    /**
     * Aa an alternative to declaring a structure tag, typedef can be used.
     */

    typedef struct
    {
        int number;
        char nome[25];
        int onHand;
    } Part;

    Part eight, nine; // the word "struct" isn't needed

    /* structures as arguments and return values */

    printPart(six);
    struct part ten = buildPart(23, "Orange", 3);

    /* compound literals */

    printPart((struct part){528, "Disk drive", 10});

    /* nested structures */

    struct personName
    {
        char first[25];
        char middleInitial;
        char last[25];
    };

    struct student
    {
        struct personName name;
        int id, age;
        char sex;
    } student1, student2;

    strcpy(student1.name.first, "Fred");

    struct personName newName;
    student1.name = newName;

    /* arrays of structures */

    struct part inventory[100];

    printPart(inventory[2]);

    inventory[3].number = 883;

    inventory[4].name[0] = '\0'; // changes the name to an empty string

    /* initializing an array of structures */

    struct dialingCode
    {
        char *country;
        int code;
    };

    // inner braces around each stucture value are optional
    const struct dialingCode countryCodes[] = {
        {"Argentina", 54},
        {"Brazil", 55},
        {"China", 86}};

    /**
     * C99 introduced designated initializers that allow an item to have more than one designator.
     */
    struct part inventory2[100] = {[0].number = 332, [0].onHand = 77, [0].name[0] = '\0'};
}

void printPart(struct part p)
{
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.onHand);
}

struct part buildPart(int number, const char *name, int onHand)
{
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.onHand = onHand;
    return p;
}

void twentyFive()
{
    /* unions */

    /**
     * Structs are unions differ in only one way: the members of a struct are stored at different addresses in memory,
     * while the members of a union are stored at the same address.
     */
    union
    {
        int i;
        double d;
    } u1;

    u1.i = 82;
    u1.d = 74.7;

    /**
     * Since the compiler overlays storage for the members of a union,
     * changing one member alters any value previously stored in any of the other members.
     * Unions mirror almost every property and action that can be done on a struct,
     * except that only one member can be initialized in designated initialization (and only the first with the simple initialization)
     */

    union
    {
        int i;
        double d;
    } u2 = {5};

    union
    {
        int i;
        double d;
    } u3 = {.d = 23.05};

    struct catalogItem
    {
        int stockNumber;
        double price;
        int itemType;
        union
        {
            struct
            {
                char title[25];
                char author[25];
                int numPages;
            } book;
            struct
            {
                char design[25];
            } mug;
            struct
            {
                char design[25];
                int colors;
                int sizes;
            } shirt;
        } item;
    };

    /**
     * There's one downsize in unions, it's impossible to know which member has value ans which not,
     * or in other words, which value has been modified last.
     * To overcome this problem a struct containing the special flag could be of help.
     * This struct, in addition to a union will contain a tag for tracking the last modified property.
     */
}

void twentySix()
{
    /* enumerations */

    /**
     * Behind the scenes, C treats enumeration variables and constants as integers.
     * By default, the compiler assigns the integers 0, 1, 2 ... to the constants in a particular enumeration.
     *
     */

    enum
    {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    } s1,
        s2;

    enum suit
    {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };

    enum suit s3, s4;

    typedef enum
    {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    } Suit;

    Suit s5, s6;
}

void twentySeven()
{
    /* dynamic storage allocation */

    /**
     * C's data structures are normally fixed in size. For example, the number of elements in an array is fixed once the program has been compiled.
     * In C99, the length of a variable-length array is determined at run time, but it remains fixed for the rest of the array's lifetime.
     * Fixed-size data structures can be a problem, since programmers are forced to choose their sizes when writing a program:
     * programmers can't change the seizes without modifying the program and compiling it again.
     *
     * C supports dynamic storage allocation: the ability to allocate storage during program execution.
     * Using dynamic storage allocation, people can design data structures that grow and shrink as needed.
     *
     * Although it's available for all types of data, dynamic storage allocation is used most often for strings, arrays and structures.
     * Dynamically allocated structures are of particular interest, since we can link them together to frm lists, trees and other data structures.
     */

    /**
     * malloc - allocates a block of memory but doesn't initialize it
     * calloc - allocates a block of memory and clears it
     * realloc - resizes a previously allocated block of memory
     */

    /**
     * When a memory allocation function is called to request a block of memory, it does not know what type of data is planned to be stored in memory,
     * so it can't return a pointer to an ordinary type such as int or char.
     * Instead, the function returns a value of type void *. A void * value is a "generic" pointer - essentially, just a memory address.
     */

    /* null pointer */

    /**
     * When a memory allocation function is called, there's always a possibility that it won't be able to locate a block of memory large
     * enough so satisfy the request.
     * If that should happen, the function will return a null pointer. A null pointer is a "pointer to nothing" - a special value that can be
     * distinguished from all valid pointers.
     * After the function's return value has been stored in a pointer variable, it must be tested to sed if it's a null pointer.
     */

    void *p1;

    p1 = malloc(10000);

    if (p1 == NULL)
    {
        // allocation failed
    }

    // or shorter
    if ((p1 = malloc(10000)) == NULL)
    {
        // allocation failed
    }

    /**
     * In C, pointer tets true of false in the same way as numbers. All non-null pointers test true; only null pointers are false.
     */

    if (!p1)
    {
        // logic
    }
    if (p1)
    {
        // logic
    }

    /* dynamically allocated strings */

    /**
     * void *malloc(size_t size); // malloc prototype
     * malloc returns the type size_t (unsigned integer), but unless a very large block of memory is allocated,
     * programmers can thing of size as an ordinary integer
     */

    /**
     * Using malloc to allocate memory for a string is easy, because C guarantees that a char value requires exactly one byte of storage.
     */

    int stringLength;

    p1 = malloc(stringLength + 1); // +1 for the null terminator

    /**
     * The generic pointer that malloc returns will be converted to char* when the assignment is performed; no cast is necessary,
     */

    char *string;

    string = malloc(stringLength + 1);
    // but it could be casted explicitly
    string = (char *)malloc(stringLength + 1);

    /**
     * Memory allocated using malloc isn't cleared or initialized in any way, so p1 will point ot an uninitialized array of stringLength + 1 characters
     */

    strcpy(string, "abc"); // one way to initialize an arrays

    char *newString = concat("abc", "def");

    /* dynamically allocated arrays */

    int *a, length = 33;

    /**
     * It is important to always use sizeof() to allocate a proper amount of bytes, firstly because sized of fundamental data types can vary
     */
    a = malloc(length * sizeof(int));

    /**
     * Once it points to a dynamically allocated block of memory, the fact that a is a pointer can be ignored, a can be used as an array name instead.
     * Pointer arithmetic also can be used to work with such a pointer
     */

    int i;
    for (i = 0; i < length; i++)
    {
        a[i] = 0; // treat a as an array name
    }

    /* the calloc function */

    /**
     * Although the malloc function can be used to allocate memory for an array, C provides an alternative
     * the calloc function - that's sometimes better.
     *
     * void *calloc(size_t nmemb, size_t size);
     *
     * calloc() allocates space for an array with nmemb elements, each of which is size bytes long.
     * It returns a null pointer if the requested space isn't available.
     * After allocating the memory, calloc initializes it by setting all bits to 0.
     */

    a = calloc(length, sizeof(int));

    /**
     * Since calloc() clears the memory that is allocates but malloc() doesn't, programmers may occasionally want to use calloc()
     * to allocate space for an object other than an array.
     * By calling calloc() with 1 as its firs argument, we can allocate space fo a data item of any type.
     */

    struct point
    {
        int x, y;
    } *p;

    p = calloc(1, sizeof(struct point));

    /* the realloc function */

    // void *realloc(void *ptr, size_t size);

    /**
     * When realloc() is called, ptr must point to a memory block obtained by a previous call of malloc, calloc or realloc.
     * The size parameter represents the new size of the block, which may be larger or smaller than the original size.
     *
     * The C standard stops short of specifying exactly how realloc works.
     * Still, we expect it to be reasonably efficient. When asked to reduce the size of a memory block, realloc should shrink the block "in place",
     * without moving the data stored in the block.
     * By the same token, realloc should always attempt to expand a memory block without moving it.
     * If it's unable to enlarge the block realloc will allocate a new block elsewhere, then copy the contents of the old block int the new one.
     *
     * So, once realloc has returned, a programmer has to make sure that all pointers to the memory block are updated.
     */

    /* deallocating storage */

    /**
     * malloc and the other memory allocation functions obtain memory blocks from a storage pool known as the heap.
     * Calling thse functions too often or asking them for large blocks of memory can exhaust the heap, causing the functions to return a null pointer.
     *
     * To make matters worse, a program may allocate blocks of memory and then lose track of them, thereby wasting space, like so;
     */
    void *one, *two, *three;

    one = malloc(8);
    two = malloc(8);
    one = two; // the memory allocated for one has been lost and takes places for nothing

    /**
     * A block of memory that's no longer accessible to a program is said to be garbage.
     * A program that leaves garbage behind has a memory leak.
     * Some languages provide a garbage collector that automatically locates and recycles garbage, but C doesn't.
     * Instead, each C program is responsible for recycling its own garbage by calling the free function to release unneeded memory.
     */

    /* the free function */
    // void free(void *ptr);

    /**
     * free() releases the block of memory tat two points to. This block is now available
     * for reuse in subsequent calls of malloc or other memory allocation functions.
     */
    free(two);
    two = three;

    /* the "dangling pointer" problem */

    /**
     * Attempting to access or modify a deallocated memory block causes undefined behaviour.
     * Trying to modify a deallocated memory block is likely to have disastrous consequences that may include a program crash.
     *
     * Dangling pointers can be hard to spat, since several pointes may point ot the same block of memory.
     * When the block is freed, all the pointes are left dangling.
     */
}

char *concat(const char *string1, const char *string2)
{
    char *result;

    result = malloc(strlen(string1) + strlen(string2) + 1);
    if (result == NULL)
    {
        printf("Error: malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }

    strcpy(result, string1);
    strcpy(result, string2);

    return result;
}

void twentyEight()
{
    /* linked list */
}