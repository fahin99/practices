#include <stdio.h>

void removeDuplicates(char str[]) {
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break; // duplicate found
        }
        if (j < i) {
            // Shift all characters to the left to remove str[i]
            for (k = i; str[k] != '\0'; k++) {
                str[k] = str[k + 1];
            }
            i--; // recheck current position after shifting
        }
    }
    
}

int main() {
    char str[1000];

    printf("Input: ");
    scanf("%s", str); // Use %s for word input; use fgets for full line if needed
    removeDuplicates(str);
    printf("Output: %s\n", str);
    return 0;
}
