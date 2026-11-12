# XGKBWL05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Your task is to build a small text analyzer. The first feature to implement is a vowel counter.

You need to write a C program that counts the total number of vowels (a, e, i, o, u) in a string provided by the user. The check should be case-insensitive, meaning it should count both 'a' and 'A', 'e' and 'E', and so on.

To keep your code organized, you must create a separate function `int isVowel(char ch)` which will handle the logic of checking a single character.

### Input Format
- A single line of text.
### Output Format
- A single integer representing the total count of vowels in the input string.
### Sample 1:
Input
Output

```
Hello World
```

```
3
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T03:00:01.600Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')
    return 1;
    else
    return 0;
   
   
}

int main() {
    char str[101];
    fgets(str, 101, stdin);

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/XGKBWL05)