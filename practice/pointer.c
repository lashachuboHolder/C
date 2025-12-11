// 1) Swap two integers using pointers

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

// 2) Create an array of pointers to integers and print values

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", *arr[i]);
    }
    
    return 0;
}

// 3) Use double pointers to modify a pointer variable

#include <stdio.h>

int main() {
    int x = 100;
    int* ptr = &x;
    int** dptr = &ptr;
    
    **dptr = 200;
    
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    printf("**dptr = %d\n", **dptr);
    
    return 0;
}

// 4) Find the maximum value in an array using pointers

#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 9, 4};
    int size = 5;
    int* ptr = arr;
    int max = *ptr;
    
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    
    printf("Max: %d\n", max);
    
    return 0;
}

// 5) Reverse an array using pointers

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int* start = arr;
    int* end = arr + size - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}