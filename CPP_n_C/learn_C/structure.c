#include <stdio.h>

typedef struct {
    char *name;
    int age;
} person;

void getold(person *p) { p->age++; }

int main(void) {

    person a;
    a.name = "moiti";
    a.age = 20;

    printf("I am %s, and I am %d\n", a.name, a.age);

    getold(&a);
    printf("Now, %s is %d years old\n", a.name, a.age);
}
