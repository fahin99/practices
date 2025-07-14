#include <stdio.h>
#include <string.h>

// Function to check if str2 is a rotation of str1
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths differ, they can't be rotations
    if (len1 != len2)
        return 0;

    // Create a temp string: str1 + str1
    char temp[2000];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 exists inside temp
    return strstr(temp, str2) != NULL;
}

// Function to remove trailing newline
void removeNewline(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

int main() {
    char str1[1000], str2[1000];

    printf("Input first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewline(str1);

    printf("Input second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewline(str2);

    if (isRotation(str1, str2))
        printf("Output: Yes\n");
    else
        printf("Output: No\n");

    return 0;
}
