#include "stdio.h"
#include "string.h"

struct Book { char title[100]; char author[50]; int year;};

int main(){
    struct Book library[2] = {
        {"The C programming language", "blah blah", 1829},
        {"Clean code", "dude 2", 2000}
    };

    for(int i = 0; i < 2; i++){
      // printf("Title: %s\nAUthor: %s\nYear")
    }
}