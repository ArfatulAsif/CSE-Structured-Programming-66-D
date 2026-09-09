## **Program-01: Hello World**

* The first program is a basic script designed to print the text "Hello world" to the console.



```c
#include <stdio.h>

int main () {
    printf("Hello world");
    return 0;
}

```

## **Program-02: Integer Addition**

* This script takes two integer inputs from the user, calculates their sum, and prints the resulting value.



```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Sum=%d", sum);
    return 0;
}

```

## **Program-03: Integers and Character Input**

* This code snippet reads two integers and one character, then calculates the sum of the integers and prints it alongside the character.



```c
#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    printf("%d %c", a+b, c);
    return 0;
}

```

## **Program-04: Multiple Variable Formats**

* This program demonstrates scanning multiple paired character and integer variables and subsequently printing them using appropriate format specifiers and newline escape sequences.



```c
#include <stdio.h>

int main() {
    int a, b, c, d;
    char A, B, C, D;
    scanf("%c%d", &A, &a);
    scanf("%c%d", &B, &b);
    scanf("%c%d", &C, &c);
    scanf("%c%d", &D, &d);
    printf("%c=%d\n", A, a);
    printf("%c=%d\n", B, b);
    printf("%c=%d\n", C, c);
    printf("%c=%d\n", D, d);
    return 0;
}

```

## **Program-05: Conditional Statements**

* The first conditional block checks if the calculated sum of two inputs is an even or odd number using the modulo operator.



```c
#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    if (sum % 2 == 0)
        printf("sum is even\n");
    else
        printf("sum is odd\n");
    return 0;
}

```

* The second conditional block evaluates whether the subtraction of two numbers results in a positive, zero, or negative value.



```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a - b > 0)
        printf("Sub is positive\n");
    else if (a - b == 0)
        printf("sub is zero\n");
    else
        printf("sub is negetive\n");
    return 0;
}

```

* The final conditional script compares two user inputs to explicitly determine if the first number is less than, equal to, or greater than the second number.



```c
#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("First is less than second \n");
    else if (a == b)
        printf("First is equal to second\n");
    else
        printf("First is greater than second \n");
    return 0;
}

```


## **Program-06: Conditional Statements Chain:**


```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // 1. Check if the sum is even or odd
    int sum = a + b;
    if (sum % 2 == 0)
        printf("sum is even\n");
    else
        printf("sum is odd\n");

    // 2. Check if the subtraction result is positive, zero, or negative
    if (a - b > 0)
        printf("Sub is positive\n");
    else if (a - b == 0)
        printf("sub is zero\n");
    else
        printf("sub is negetive\n");

    // 3. Compare the two numbers
    if (a < b)
        printf("First is less than second \n");
    else if (a == b)
        printf("First is equal to second\n");
    else
        printf("First is greater than second \n");

    return 0;
}

```
