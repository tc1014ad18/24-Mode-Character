#include <stdio.h>
#include <memory.h>
#include <ctype.h>

int main() {
    char string[1000];
    char character = '\0';
    int appearances = 0;

    printf("Hullo, mate-y!\nGive me a sentence and I'll tell you the most repeated character.\n");
    printf("Your string (it should not pass of 1000 chars): ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++) {
        if (!isspace(string[i])) {
            int times = 1;
            for (int j = i + 1; j < strlen(string); j++) {
                if (string[i] == string[j]) {
                    times++;
                }
            }
            if (times > appearances) {
                character = string[i];
                appearances = times;
            }
        }
    }

    printf("The most repeated character is: %c\n", character);
    printf("\nSee you around, mate!\n");

    return 0;
}