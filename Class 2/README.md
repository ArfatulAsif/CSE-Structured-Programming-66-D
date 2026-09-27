# Loops

## **Program-14: Print 1 to N (`for` Loop)**

* This program takes an integer $N$ from the user and uses a `for` loop to print all numbers sequentially from $1$ up to $N$.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

```

## **Program-15: Sum of Natural Numbers (`while` Loop)**

* This script reads an integer $N$ and calculates the cumulative sum of numbers from $1$ to $N$ using a `while` loop.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Sum=%d\n", sum);
    return 0;
}

```

## **Program-16: Multiplication Table (`for` Loop)**

* This program takes a number as input and uses a `for` loop to generate and display its multiplication table from 1 to 10.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

```

## **Program-17: Print Even Numbers (`while` Loop)**

* This program reads a limit $N$ and uses a `while` loop alongside a modulo condition to print all even numbers between 1 and $N$.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}

```

## **Program-18: Factorial Calculation (`for` Loop)**

* This script calculates the factorial of a given number $N$ ($N!$) by continuously multiplying the loop counter into an accumulator variable.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial=%d\n", fact);
    return 0;
}

```

---

## **Program-19: Exit Loop Early (`break` in `for` Loop)**

* This program loops from 1 to 10, but uses the `break` statement to immediately terminate the loop when the counter reaches 5.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

```

## **Program-20: Skip an Iteration (`continue` in `for` Loop)**

* This script prints numbers from 1 to 10, but uses the `continue` statement to skip printing the number 5 without stopping the loop.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

```

## **Program-21: Stop Input on Zero (`break` in `while` Loop)**

* This program continuously reads integer inputs inside an infinite `while` loop, echoing each value back until the user inputs `0`, which triggers `break`.

```c
#include <stdio.h>

int main() {
    int a;

    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        printf("You entered: %d\n", a);
    }

    return 0;
}

```

## **Program-22: Ignore Negative Numbers (`continue` in `for` Loop)**

* This code reads 5 numbers from the user and calculates the sum, using `continue` to skip any negative numbers so only positive values are added.

```c
#include <stdio.h>

int main() {
    int a, sum = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &a);
        if (a < 0) {
            continue;
        }
        sum = sum + a;
    }

    printf("Sum of positive numbers=%d\n", sum);
    return 0;
}

```

## **Program-23: Combined `break` and `continue**`

* This program demonstrates using both statements in one loop: it skips odd numbers using `continue` (printing only evens) and completely stops when the counter hits 12 using `break`.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 12) {
            break;
        }
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

```
