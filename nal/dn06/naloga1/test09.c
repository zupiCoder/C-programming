
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

char* NIZI[] = {"_", "__", "___", "____", NULL};

int main() {
    char* niz = zdruzi(NIZI, "  ");
    printf("<%s>\n", niz);

    return 0;
}
