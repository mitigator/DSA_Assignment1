#include <stdio.h>
#include <string.h>

#define MAX_NAMES 50
#define MAX_NAME_LENGTH 50


void readNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int n) {
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void displayNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int n) {
   
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}


void bubbleSortNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int n) {
    int swapped;
    char temp[MAX_NAME_LENGTH];

    for (int i = 0; i < n - 1; i++) {
        swapped = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break; 
        }
    }
}

int main() {
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[MAX_NAMES][MAX_NAME_LENGTH];

    readNames(names, n);
   

    
    bubbleSortNames(names, n);

    printf("Sorted names:\n");
    displayNames(names, n);

    return 0;
}
