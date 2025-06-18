//
// Created by Sarthak Giri on 18-06-2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    char *endptr;
    int startPage = (int) strtol(input, &endptr, 10);
    int endPage = (int) strtol(endptr, NULL, 10);

    for (int i = startPage; i < endPage; i++) {
        printf("%d ", i);
    }
    printf("%d", endPage);

    return 0;
}
