#include "stdio.h"

struct Date{int day; int month; int year;};
struct Event {char name[50]; struct Date date;};

int main(){
    struct Event event1 = {"Coference", {15,150,2024}};

}