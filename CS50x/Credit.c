#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

int* ToArray(char string[]) {
    int *number = (int *)malloc(sizeof(int) * strlen(string));
    char copy;
    for(int a = 0;a < strlen(string);a++) {
        copy = string[a];
        number[a] = copy - '0';
    }
    return number;
}

bool CalculateChecksum(int number[], size_t index) {
    int sum = 0;
    for(int i = index-2;)
}

void Verify_Number(char string[]) {
    int *number;
    number = ToArray(string);
    size_t index = strlen(string);
    bool checksum = CalculateChecksum(number, index);
    if(number[0] == 3) {
        if(number[1] == 4 || number[1] == 7) {
            printf("AMEX");
        }
        else {
            printf("INVALID");
        }
    } 
}

void Validate_String(char string[], bool *valid) { //Validates string
    int counter = 0; //a counter to count the amount of invalid
    for(int a = 0;a < strlen(string);a++) {
        if(isalpha(string[a]) || ispunct(string[a])) {
            counter++;
            *valid = false; //makes the counter useless but I'm keeping it :)
        }
    }
}

int main(void) {
    char string[20];
    bool valid = true;
    printf("Number: ");
    fgets(string, 20, stdin);
    string[strcspn(string, "\n")] = '\0';
    Validate_String(string, &valid);
    if(valid && strlen(string) >= 13) {
        Verify_Number(string);
    }
    else {
        printf("INVALID");
    }
}
