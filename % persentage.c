#include <stdio.h>

int main() {
    int roll_number, marks[3], total = 0;
    char name[50];
    float percentage;
    char division[10];

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("Enter name: ");
    scanf("%s", name);

    for(int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 3;

    if(percentage >= 60) {
        strcpy(division, "First");
    } else if(percentage >= 50) {
        strcpy(division, "Second");
    } else if(percentage >= 40) {
        strcpy(division, "Third");
    } else {
        strcpy(division, "Fail");
    }

    printf("\nRoll Number: %d", roll_number);
    printf("\nName: %s", name);
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f", percentage);
    printf("\nDivision: %s", division);

    return 0;
}
