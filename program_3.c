#include <stdio.h>
#include <string.h>
void justifySentence(char sentence[], int screenLength) {
    int len = strlen(sentence);
    int spaceCount = 0;
    for (int i = 0; i < len; i++) {
        if (sentence[i] == ' ') {
            spaceCount++;
        }
    }
    int spacesToReplace = screenLength - len + spaceCount;
    int starsBetweenWords = spacesToReplace / spaceCount;
    int remainingStars = spacesToReplace % spaceCount;
    for (int i = 0; i < len; i++) {
        if (sentence[i] == ' ') {
            for (int j = 0; j < starsBetweenWords; j++) {
                printf("*");
            }
            if (remainingStars > 0) {
                printf("*");
                remainingStars--;
            }
        } 
        else {
            printf("%c", sentence[i]);
        }
    }
    printf("\n");
}
int main() {
    char sentence[100];
    int screenLength;
    printf("Sentence: ");
    gets(sentence);
    printf("Screen length: ");
    scanf("%d", &screenLength);
    printf("Output:\n");
    justifySentence(sentence, screenLength);
    return 0;
}