#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY } Day;
typedef enum { LOW = 10, MEDIUM, HIGH, CRITICAL = 100 } Priority;
typedef enum {
    OWNER_READ = 1 << 0, OWNER_WRITE = 1 << 1, OWNER_EXEC = 1 << 2,
    GROUP_READ = 1 << 3, GROUP_WRITE = 1 << 4
} Permission;
typedef enum { FLAG_A = 1 << 0, FLAG_B = 1 << 1, FLAG_C = 1 << 2 } StatusFlag;
typedef enum { HTTP = 1 << 0, HTTPS = 1 << 1, FTP = 1 << 2, SSH = 1 << 3 } Protocol;
typedef enum { RED, YELLOW, GREEN } TrafficLight;

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

void exercise5() {
    printf("\n=== EXERCISE 5: Remove a Bit Flag ===\n");

    int protocols = HTTP | HTTPS | FTP | SSH;
    printf("Before removing FTP: %d\n", protocols);
    printf("Active protocols: ");
    if (protocols & HTTP) printf("HTTP ");
    if (protocols & HTTPS) printf("HTTPS ");
    if (protocols & FTP) printf("FTP ");
    if (protocols & SSH) printf("SSH");
    printf("\n");

    protocols &= ~FTP;
    printf("\nAfter removing FTP: %d\n", protocols);
    printf("Active protocols: ");
    if (protocols & HTTP) printf("HTTP ");
    if (protocols & HTTPS) printf("HTTPS ");
    if (protocols & FTP) printf("FTP ");
    if (protocols & SSH) printf("SSH");
    printf("\n");
}

void exercise6() {
    printf("\n=== EXERCISE 6: Check Specific Bit Pattern ===\n");

    srand(time(NULL));
    int count = 0;

    printf("Numbers with bit 0 = 1 AND bit 1 = 0:\n");
    for (int i = 0; i < 50; i++) {
        int num = rand() % 32;
        if ((num & (1 << 0)) && !(num & (1 << 1))) {
            printf("%d ", num);
            count++;
        }
    }
    printf("\n\nTotal count: %d out of 50\n", count);
}

TrafficLight getNextLight(TrafficLight current) {
    switch(current) {
        case RED: return GREEN;
        case GREEN: return YELLOW;
        case YELLOW: return RED;
        default: return RED;
    }
}

const char* getLightName(TrafficLight light) {
    switch(light) {
        case RED: return "RED";
        case YELLOW: return "YELLOW";
        case GREEN: return "GREEN";
        default: return "UNKNOWN";
    }
}



int main() {
    printf("ENUM PRACTICE EXERCISES\n");
    printf("=======================\n");

    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise5();
    exercise6();

    return 0;
}
