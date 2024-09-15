#include <stdio.h>

int main() {
    int x = 10;
    
    if (x == 10) {
        goto label;
    }

    printf("This won't be printed.\n");

label:
    printf("Jumped to the label.\n");
    
    return 0;
}
