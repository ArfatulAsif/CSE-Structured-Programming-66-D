# Function Practice:

## **Program-42: Basic Function Definition — Printing a Exam Hall Banner**

* This program demonstrates declaring and calling a `void` function to print a formatted header banner—a practical way to avoid repeating formatting code in console menus or reports.

```c
#include <stdio.h>

void printExamHeader();

int main() {
    printExamHeader();
    printf("Candidate Name: Rahim Ahmed\n");
    printf("Seat Number   : CS-204\n");
    printExamHeader();

    return 0;
}

void printExamHeader() {
    printf("====================================\n");
    printf("   CSE-101 MIDTERM EXAM ADMIT SLIP  \n");
    printf("====================================\n");
}

```

## **Program-43: Different Return Types (`int`, `double`, `char`) — Student Result Evaluator**

* This script uses three separate functions returning `int`, `double`, and `char` to compute total marks, percentage, and final letter grade from raw exam scores.

```c
#include <stdio.h>

int calculateTotal(int quiz, int midterm, int finalExam) {
    return quiz + midterm + finalExam;
}

double calculatePercentage(int totalMarks, int maxMarks) {
    return ((double)totalMarks / maxMarks) * 100.0;
}

char assignGrade(double percentage) {
    if (percentage >= 80.0) return 'A';
    if (percentage >= 65.0) return 'B';
    if (percentage >= 50.0) return 'C';
    return 'F';
}

int main() {
    int quiz, mid, finalExam;
    scanf("%d %d %d", &quiz, &mid, &finalExam); // e.g., 18 25 42 (out of 100)

    int total = calculateTotal(quiz, mid, finalExam);
    double pct = calculatePercentage(total, 100);
    char grade = assignGrade(pct);

    printf("Total: %d/100 | Percentage: %.2lf%% | Grade: %c\n", total, pct, grade);
    return 0;
}

```

## **Program-44: Multiple Parameters of Different Types — Electricity Bill Calculator**

* This program passes mixed parameter types (`int` units consumed, `double` per-unit rate, `char` connection type `'R'` for Residential or `'C'` for Commercial) to calculate a utility bill with surcharge rules.

```c
#include <stdio.h>

double calculateBill(int units, double ratePerUnit, char connectionType) {
    double baseAmount = units * ratePerUnit;

    // Commercial connections ('C') incur a 15% service surcharge
    if (connectionType == 'C' || connectionType == 'c') {
        return baseAmount + (baseAmount * 0.15);
    }
    return baseAmount;
}

int main() {
    int unitsUsed;
    double rate;
    char type;

    scanf("%d %lf %c", &unitsUsed, &rate, &type); // e.g., 250 7.5 C

    double payable = calculateBill(unitsUsed, rate, type);
    printf("Total Payable Bill = %.2lf BDT\n", payable);

    return 0;
}

```

## **Program-45: Passing an Array to a Function — Finding Class Highest & Average**

* Building directly on Programs 26 and 27, this code moves array traversal logic into dedicated functions to analyze an array of student test scores.

```c
#include <stdio.h>

int getHighestScore(int scores[], int n) {
    int max = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

double getClassAverage(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (double)sum / n;
}

int main() {
    int n, scores[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    printf("Highest Score = %d\n", getHighestScore(scores, n));
    printf("Class Average = %.2lf\n", getClassAverage(scores, n));

    return 0;
}

```

## **Program-46: Pass by Value vs. Pass by Reference — Applying Bonus Grace Marks**

* This program demonstrates why single variables need a return value to update (`bonus` passed by value), while an array of marks updates directly in memory (`marks[]` passed by reference) when awarding grace marks to failing students.

```c
#include <stdio.h>

// Pass by Value: modifying 'bonus' here does NOT affect 'gracePoints' in main
void attemptBonusReset(int bonus) {
    bonus = 0;
}

// Pass by Reference: modifies the actual array elements in main's memory
void applyGraceMarks(int marks[], int n, int bonus) {
    for (int i = 0; i < n; i++) {
        // Give grace marks only to students scoring between 35 and 39
        if (marks[i] >= 35 && marks[i] < 40) {
            marks[i] += bonus;
        }
    }
}

int main() {
    int n, marks[100], gracePoints = 5;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]); // e.g., 36 45 38 29 50
    }

    attemptBonusReset(gracePoints);
    applyGraceMarks(marks, n, gracePoints);

    printf("Grace Points variable in main: %d\n", gracePoints); // Still 5
    printf("Updated Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]); // Becomes: 41 45 43 29 50
    }
    printf("\n");

    return 0;
}

```

## **Program-47: Basic Recursion — Fibonacci Series**

* This script uses recursion to generate the $n$-th Fibonacci term by reducing each call into two smaller subproblems until reaching the base cases `0` and `1`.

```c
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

```

## **Program-48: Recursion — Binary Search on a Sorted Array**

* Replacing the iterative linear search from Program-29, this recursive function divides a sorted array in half on every call (`mid`) to locate a target ID in logarithmic steps.

```c
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: target not found
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target) {
        return mid; // Base case: target found at index mid
    } else if (target < arr[mid]) {
        return binarySearch(arr, low, mid - 1, target); // Search left half
    } else {
        return binarySearch(arr, mid + 1, high, target); // Search right half
    }
}

int main() {
    int n, arr[100], target;
    scanf("%d", &n);

    // Input must be sorted in ascending order
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1) {
        printf("Target found at index %d\n", index);
    } else {
        printf("Target not found\n");
    }

    return 0;
}

```

## **Program-49: Recursion — Palindrome String Check**

* Rewriting Program-39 recursively, this function checks whether a string is a palindrome by comparing the outer characters (`left` and `right`) and recursively shrinking inward.

```c
#include <stdio.h>

int isPalindromeRecursive(char str[], int left, int right) {
    if (left >= right) {
        return 1; // Base case: crossed middle without mismatch
    }
    if (str[left] != str[right]) {
        return 0; // Base case: mismatch found
    }
    return isPalindromeRecursive(str, left + 1, right - 1);
}

int main() {
    char word[50];
    scanf("%s", word);

    int len = 0;
    while (word[len] != '\0') {
        len++;
    }

    if (isPalindromeRecursive(word, 0, len - 1)) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}

```
