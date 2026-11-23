

## **Program-50: String Declaration — Character Array vs. String Literal (`str = "..."`)**

* This program demonstrates the two ways to declare strings in C: as a mutable character array (`char course[]`) stored in stack memory, and as a string literal pointer (`const char *uni`) stored in read-only memory.
* **Key Difference:** `course[0] = 'M'` is valid because arrays own their own modifiable memory copy. Modifying `uni[0] = 'B'` causes a **Segmentation Fault** (runtime crash) because string literals are read-only.

```c
#include <stdio.h>

int main() {
    // Method 1: Character Array (Modifiable copy in stack memory)
    char course[] = "CSE-101";

    // Method 2: String Literal Pointer (Read-only memory)
    const char *university = "DUET";

    // Allowed: modifying a character array
    course[0] = 'E';
    printf("Updated Course : %s\n", course); // Output: ESE-101

    // university[0] = 'B'; // DANGER: Causes runtime crash (Segmentation Fault)
    printf("University     : %s\n", university);

    // Re-pointing the pointer to a new literal IS allowed
    university = "BUET";
    printf("New University : %s\n", university);

    return 0;
}

```

## **Program-51: The Null Character (`'\0'`) and `strlen()` Behavior**

* Every C string must end with `'\0'` (ASCII `0`) so functions know where the string stops in memory.
* This program shows how `strlen()` counts characters up to `'\0'` (excluding `'\0'` itself), and demonstrates what happens when `'\0'` is placed in the middle of a string or omitted entirely from a character array.

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Compiler automatically appends '\0' (Total size = 6 bytes)
    char city[20] = "Dhaka";
    printf("Length of '%s' = %lu\n", city, strlen(city)); // Output: 5

    // Truncating a string early by inserting '\0'
    city[3] = '\0';
    printf("After inserting '\\0' at index 3: '%s' (Length = %lu)\n", city, strlen(city)); // Output: Dha (Length = 3)

    // DANGER: Character array WITHOUT '\0' (Not a valid C string)
    char broken[4] = {'T', 'e', 's', 't'};
    // strlen(broken) will keep reading garbage memory past 't' until it randomly hits a 0 byte!
    printf("Valid char array size: %lu bytes\n", sizeof(broken));

    return 0;
}

```

## **Program-52: Copying Strings with `strcpy()` — Swapping Two Student Names**

* Because C does not allow direct array assignment (`name1 = name2;` causes a compiler error), `strcpy(destination, source)` is used to copy characters—including the `'\0'`—from one string to another.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char topScorer[30] = "Nusrat Jahan";
    char runnerUp[30] = "Tanvir Hasan";
    char temp[30];

    printf("Before Swap -> 1st: %s | 2nd: %s\n", topScorer, runnerUp);

    // Swapping two strings requires a temporary buffer and strcpy()
    strcpy(temp, topScorer);
    strcpy(topScorer, runnerUp);
    strcpy(runnerUp, temp);

    printf("After Swap  -> 1st: %s | 2nd: %s\n", topScorer, runnerUp);

    return 0;
}

```

## **Program-53: Single String Input (`%s`) vs. Single Character (`%c`)**

* `%s` automatically skips leading whitespace (` `, `\n`, `\t`), reads characters until the next whitespace, and automatically appends `'\0'`. Note that `%s` stops at spaces, so it only reads a single word.

```c
#include <stdio.h>

int main() {
    char username[30];

    printf("Enter username (no spaces): ");
    scanf("%29s", username); // %29s prevents buffer overflow for a 30-char array

    printf("Welcome, %s!\n", username);
    return 0;
}

```

## **Program-54: Multiple String Input and Leading Space Buffer Issue (`" %s"` / `" %c"`)**

* When reading multiple inputs across lines, pressing **Enter** leaves a leftover newline (`'\n'`) in the input buffer.
* While `%s` naturally skips leading whitespace, mixing `%s` with `%c` or scansets (`%[ ]`) fails unless you place a **leading space** (`" %c"`, `" %[^\n]"`) in the format string to flush leftover whitespace/newlines.

```c
#include <stdio.h>

int main() {
    char firstName[30], lastName[30];
    char section;

    printf("Enter First Name and Last Name: ");
    scanf("%s %s", firstName, lastName); // Space separates two words

    // Leading space before %c is CRITICAL to consume the '\n' left by Enter
    printf("Enter Section (A/B/C): ");
    scanf(" %c", &section);

    printf("Student: %s %s | Section: %c\n", firstName, lastName, section);
    return 0;
}

```

## **Program-55: String Printing & Multiple String Printing (`printf` vs `puts`)**

* This program compares `printf("%s")` (which gives full inline control for printing multiple strings together) with `puts()` (which prints a single string and automatically adds a newline `\n` at the end).

```c
#include <stdio.h>

int main() {
    char dept[10] = "CSE";
    char batch[10] = "2026";
    char status[20] = "Enrolled";

    // Multiple string printing in a single formatted line
    printf("Department: %s | Batch: %s | Status: %s\n", dept, batch, status);

    // puts() prints a single string and automatically appends '\n'
    puts("--- End of Record ---");

    return 0;
}

```

## **Program-56: Scanset Input (`%[ ]`) — Reading Full Lines & Filtering Characters**

* Standard `%s` cannot read spaces (like `"Md. Abdul Karim"`). The scanset specifier `%[...]` lets you define exact rules for which characters `scanf` should accept or reject:
* `%[^\n]` reads everything **until** a newline (allowing spaces).
* `%[A-Za-z ]` reads **only** letters and spaces, stopping immediately if a digit or symbol appears.



```c
#include <stdio.h>

int main() {
    char fullName[50];
    char alphaOnly[50];

    // 1. Read a full name containing spaces until Enter ('\n') is pressed
    printf("Enter Full Name: ");
    scanf(" %[^\n]", fullName); // Leading space clears any prior '\n'

    // 2. Read only alphabets and spaces (stops as soon as a number/symbol is typed)
    printf("Enter City Name (stops at digits): ");
    scanf(" %[A-Za-z ]", alphaOnly);

    printf("Full Name : %s\n", fullName);
    printf("City Name : %s\n", alphaOnly);

    return 0;
}

```

## **Program-57: Playing with `%s` Output Formatting in `printf` (Width, Alignment, Truncation)**

* `printf` supports field-width and precision modifiers on `%s` (`%[flags][width].[precision]s`), which are ideal for building clean, aligned console tables and clipping long text:
* `%15s` — Right-aligns inside a 15-character column.
* `%-15s` — Left-aligns inside a 15-character column.
* `%.5s` — Prints **at most** the first 5 characters (truncation).
* `%*s` — Sets column width dynamically using an integer variable.



```c
#include <stdio.h>

int main() {
    char s1[] = "Rahim";
    char s2[] = "Christopher";
    int dynamicWidth = 12;

    printf("--- Table Alignment (Width = 15) ---\n");
    printf("|%15s|%15s|\n", s1, s2);   // Right-aligned
    printf("|%-15s|%-15s|\n", s1, s2); // Left-aligned

    printf("\n--- String Truncation (%.5s) ---\n");
    printf("Shortened Name: %.5s\n", s2); // Output: Chris

    printf("\n--- Combined Left-Align & Truncate (%-10.6s) ---\n");
    printf("|%-10.6s| -> padded to 10 spaces, clipped to 6 chars\n", s2);

    printf("\n--- Dynamic Width (%*s) ---\n");
    printf("|%*s|\n", dynamicWidth, s1); // Width controlled by variable

    return 0;
}

```
