//
// Created by Sarthak Giri on 17-06-2025.
//
#include <stdio.h>

int main() {
    char dir;
    scanf("%c", &dir);

    switch (dir) {
        case 'w':
            printf("%s", "Up");
            break;
        case 's':
            printf("%s", "Down");
            break;
        case 'a':
            printf("%s", "Left");
            break;
        case 'd':
            printf("%s", "Right");
            break;
        default:
            printf("%s", "Wrong");
    }

    return 0;
}