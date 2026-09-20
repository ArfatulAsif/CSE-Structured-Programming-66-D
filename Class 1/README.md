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


## **Program-07: Logical AND (`&&`) – Largest of Three Numbers**

* This program reads three integers and uses the logical AND (`&&`) operator to combine relational expressions and find the maximum value.

```c
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the largest\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest\n", b);
    else
        printf("%d is the largest\n", c);

    return 0;
}

```

---

## **Program-08: Logical OR (`||`) – Vowel or Consonant**

* This script checks if an alphabet character entered by the user is a vowel or a consonant using multiple logical OR (`||`) operators.

```c
#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is a consonant\n", ch);
    }

    return 0;
}

```

---

## **Program-09: Combining Ranges with `&&` – Character Classification**

* This program classifies an input character into an uppercase letter, lowercase letter, digit, or special character using ASCII range boundaries evaluated with `&&`.

```c
#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    } else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;
}

```

---

## **Program-10: Nested `&&` and `||` – Leap Year Determination**

* This program demonstrates how logical AND and OR operators work together inside a single conditional block to check if a given year is a leap year.

```c
#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

```

---

## **Program-11: Logical NOT (`!`) – Input Range Validation**

* This program uses the logical NOT (`!`) operator to invert a condition, validating whether an entered score falls within the legitimate range of 0 to 100 before assigning a pass/fail grade.

```c
#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    // If marks are NOT between 0 and 100
    if (!(marks >= 0 && marks <= 100)) {
        printf("Invalid marks entered!\n");
    } else if (marks >= 40) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}

```

---

## **Program-12: Geometric Rules with `&&` and `||` – Triangle Validity & Types**

* This script verifies whether three sides can physically form a triangle using the Triangle Inequality Theorem, then checks whether the triangle is equilateral, isosceles, or scalene.

```c
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Sum of any two sides must exceed the third side
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        } else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}

```

---

## **Program-13: Grading System with Range Checks (`&&`)**

* This program reads a student's total score and assigns an academic letter grade by checking bounds using a sequence of `else if` conditions with logical AND.

```c
#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid Score\n");
    } else if (score >= 80 && score <= 100) {
        printf("Grade: A+\n");
    } else if (score >= 70 && score < 80) {
        printf("Grade: A\n");
    } else if (score >= 60 && score < 70) {
        printf("Grade: B\n");
    } else if (score >= 50 && score < 60) {
        printf("Grade: C\n");
    } else if (score >= 40 && score < 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

```



