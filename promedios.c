#include <stdio.h>

float average(int values[], int quantity) {
    int i;
    float sum = 0.0;

    for (i = 0; i < quantity; ++i)
        sum += values[i];

    return sum / (float) quantity;
}


int main() {

    int note[10];
    char name[20];
    char option[3];
    int n, i;

    do {
        printf("Enter student's name: ");
        scanf("%s", name);

        printf("How many grades does %s have? ", name);
        scanf("%d", &n);

        for (i = 0; i < n; ++i) {
            printf(" Note %d: ", i + 1);
            scanf("%d", &notes[i]);
        }

        printf("The average of %s is %.1f\n", name, average(grades, n));

        printf("Do you want to calculate more averages (yes/no)? ");
        scanf("%s", option);

    } while (option[0] == 's' || option[0] == 'S');

    return 0;
}