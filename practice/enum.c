#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } Day;
typedef enum { LOW = 10, MEDIUM, HIGH, CRITICAL = 100 } Priority;
typedef enum {
    OWNER_READ = 1 << 0, OWNER_WRITE = 1 << 1, OWNER_EXEC = 1 << 2,
    GROUP_READ = 1 << 3, GROUP_WRITE = 1 << 4
} Permission;

void exercise1() {
    printf("\n=== EXERCISE 1: Days of the Week ===\n");

    Day today = WEDNESDAY;
    printf("MONDAY = %d\n", MONDAY);
    printf("WEDNESDAY = %d\n", today);
    printf("SUNDAY = %d\n", SUNDAY);
}

void exercise2() {
    printf("\n=== EXERCISE 2: Custom Starting Values ===\n");

    printf("LOW = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH = %d\n", HIGH);
    printf("CRITICAL = %d\n", CRITICAL);
}

void exercise3() {
    printf("\n=== EXERCISE 3: File Permissions ===\n");

    int perms = OWNER_READ | OWNER_WRITE | GROUP_READ;

    printf("Permissions set: %d\n", perms);
    if (perms & OWNER_READ)  printf("- Owner can read\n");
    if (perms & OWNER_WRITE) printf("- Owner can write\n");
    if (perms & OWNER_EXEC)  printf("- Owner can execute\n");
    if (perms & GROUP_READ)  printf("- Group can read\n");
    if (perms & GROUP_WRITE) printf("- Group can write\n");
}

void exercise4() {
    printf("\n=== EXERCISE 4: Toggle Bits ===\n");

    int status = FLAG_A | FLAG_C;
    printf("Initial: A=%d B=%d C=%d\n", !!(status&FLAG_A), !!(status&FLAG_B), !!(status&FLAG_C));

    status ^= FLAG_B;
    printf("After toggle B on: A=%d B=%d C=%d\n", !!(status&FLAG_A), !!(status&FLAG_B), !!(status&FLAG_C));

    status ^= FLAG_A;
    printf("After toggle A off: A=%d B=%d C=%d\n", !!(status&FLAG_A), !!(status&FLAG_B), !!(status&FLAG_C));
}


int main() {
    printf("ENUM PRACTICE EXERCISES\n");
    printf("=======================\n");

    exercise1();
    exercise2();
    exercise3();
    exercise4();


    return 0;
}
