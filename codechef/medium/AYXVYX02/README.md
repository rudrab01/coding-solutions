# AYXVYX02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are helping a school administrator with a data entry task. They need a simple program to check for errors. You are given a list of 10 student ID numbers that have been entered into the system. Your task is to find the first student ID that appears more than once in the list. If all IDs are unique, the program should indicate that.

### Input Format
- A single line containing 10 space-separated integers.
### Output Format
- If a duplicate is found, print the first number that is repeated.
- If there are no duplicates, print "No duplicates".
### Sample 1:
Input
Output

```
101 102 103 104 102 105 106 107 108 109
```

```
102
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T19:55:53.732Z  

```c_cpp
#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

int main() {
    int ids[SIZE],i;
    int firstDuplicate = 0;
    bool found = false;

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &ids[i]);
    }

    for (i = 0; i < SIZE; i++){
        for(int j=i+1; j< SIZE; i++){
            if (ids[i]==ids[j]){
                found = true;
                break;
            }
        }
        if (found)
        break;
    }
    firstDuplicate = ids[i];

    if (found) {
        printf("%d\n", firstDuplicate);
    } else {
        printf("No duplicates\n");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX02)