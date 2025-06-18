//
// Created by Sarthak Giri on 18-06-2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    char *endptr;
    const int mileage = (int) strtol(input, &endptr, 10);
    const int months = (int) strtol(endptr, NULL, 10);

    if (mileage > 10000 || months > 12) {
        printf("Change Oil");
    }
    else {
        printf("OK");
    }

    return 0;
}
