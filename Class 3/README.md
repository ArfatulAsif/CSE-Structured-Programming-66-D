## **Program-24: Array Initialization and Printing**

* This program demonstrates how to declare a 1-dimensional (1D) array, initialize it with a fixed set of values, and print its elements using a `for` loop.

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

```

## **Program-25: Reading and Printing Array Elements**

* This script takes the size of the array and its elements as input from the user, storing them in memory and then displaying them back sequentially.

```c
#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

```

## **Program-26: Sum of Array Elements**

* This program iterates through an array of numbers entered by the user, adding each element to a total sum variable.

```c
#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}

```

## **Program-27: Maximum Element in an Array**

* This code reads an array, assumes the first element is the maximum, and compares it against all other elements to find the largest number.

```c
#include <stdio.h>

int main() {
    int n, arr[100], max;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    return 0;
}

```

## **Program-28: Count Even and Odd Numbers**

* This program scans an array and uses the modulo operator inside an `if-else` block to count how many numbers are even and how many are odd.

```c
#include <stdio.h>

int main() {
    int n, arr[100];
    int evenCount = 0, oddCount = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even count = %d, Odd count = %d\n", evenCount, oddCount);
    return 0;
}

```

## **Program-29: Linear Search in an Array**

* This script asks the user for a target number, then searches the array step-by-step to check if the target exists, using a variable flag to track the result.

```c
#include <stdio.h>

int main() {
    int n, arr[100], target, found = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            printf("Found at index %d\n", i);
            break;
        }
    }

    if (found == 0) {
        printf("Not found\n");
    }

    return 0;
}

```

## **Program-30: Printing an Array in Reverse**

* This program reads a set of elements and prints them backwards by starting the `for` loop from the last index (`n - 1`) down to `0`.

```c
#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

```

## **Program-31: Copying Elements to Another Array**

* This code demonstrates copying data from one array to a second, separate array by iterating through the original and assigning elements index by index.

```c
#include <stdio.h>

int main() {
    int n, arr1[100], arr2[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Array 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

```

## **Program-32: Fixed 2D Array (Matrix) Initialization**

* This program introduces 2-dimensional (2D) arrays, initializing a 2x3 matrix with fixed values and printing it in a grid format using nested loops.

```c
#include <stdio.h>

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```

## **Program-33: Reading and Printing a 2D Matrix**

* This script takes rows and columns as inputs, uses nested loops to populate a 2D matrix, and prints the stored matrix to the console.

```c
#include <stdio.h>

int main() {
    int rows, cols, matrix[10][10];
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```

## **Program-34: Matrix Addition**

* This program reads two matrices of the same dimensions and creates a third matrix where each element is the sum of the corresponding elements from the first two.

```c
#include <stdio.h>

int main() {
    int rows, cols, A[10][10], B[10][10], C[10][10];
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```

## **Program-35: Sum of Diagonal Elements in a Matrix**

* This code calculates the sum of the primary diagonal elements in a square matrix by adding elements where the row index matches the column index.

```c
#include <stdio.h>

int main() {
    int size, matrix[10][10], sum = 0;
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Diagonal sum = %d\n", sum);
    return 0;
}

```

## **Program-36: Character Array (String) Input and Output**

* This script introduces character arrays (strings), reading a single continuous word using the `%s` format specifier and displaying it.

```c
#include <stdio.h>

int main() {
    char str[50];
    scanf("%s", str); // Notice: No '&' needed for arrays with %s

    printf("You entered: %s\n", str);
    return 0;
}

```

## **Program-37: Manual String Length Calculation**

* This program iterates through a character array one character at a time until it hits the null terminator (`\0`), manually counting the length of the string.

```c
#include <stdio.h>

int main() {
    char str[50];
    scanf("%s", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("String length = %d\n", length);
    return 0;
}

```

## **Program-38: Counting Vowels in a Character Array**

* This program checks each character in a string one-by-one to count the total number of vowels using multiple logical `||` operators.

```c
#include <stdio.h>

int main() {
    char str[50];
    int count = 0, i = 0;
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        i++;
    }

    printf("Number of vowels = %d\n", count);
    return 0;
}

```






## **Program-39: Palindrome String Check**

* This program checks if a string reads the same forwards and backwards. It compares the character at the beginning with the character at the end, moving towards the middle.

```c
#include <stdio.h>

int main() {
    char str[50];
    int length = 0, isPalindrome = 1;
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from opposite ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Mismatch found
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}

```

## **Program-40: Second Largest Element in a 1D Array**

* This program runs two separate loops over an array of positive numbers: the first loop finds the maximum value, and the second loop finds the highest value that is strictly less than the maximum.

```c
#include <stdio.h>

int main() {
    int n, arr[100];
    int max = 0, secondMax = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pass 1: Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Pass 2: Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    printf("Second Largest = %d\n", secondMax);
    return 0;
}

```

## **Program-41: Matrix Transpose (2D Array)**

* This code reads a matrix and creates its transpose by swapping the row and column indices (i.e., making the first row the first column, the second row the second column, etc.).

```c
#include <stdio.h>

int main() {
    int rows, cols, matrix[10][10], transpose[10][10];
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Swap indices to compute transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transposed Matrix:\n");
    // Notice rows and cols are swapped in the loop limits for printing
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```





