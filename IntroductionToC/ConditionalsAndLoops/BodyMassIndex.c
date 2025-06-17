//
// Created by Sarthak Giri on 17-06-2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    //your code goes here
    // Use strtof with scanf
    char input[20];
    scanf("%s", input);
    const float bmi = strtof(input, NULL);

    if (bmi < 18.5) {
        printf("Underweight");
    }
    else if (bmi > 25) {
        printf("Overweight");
    }
    else {
        printf("Normal");
    }

    return 0;
}
