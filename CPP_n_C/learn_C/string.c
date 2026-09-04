#include <stdio.h>
#include <string.h>

int main() {
    const char *name = "moiti";
    const char *last = "havoc";

    const char *cpare = "mosit";
    char myname[] = "moiti";
    char lastname[] = "havoc";

    int res = strncmp(name, cpare, 5);
    printf("%d", res);
    strncat(myname, lastname, 5);
    printf("%s", myname);
}
