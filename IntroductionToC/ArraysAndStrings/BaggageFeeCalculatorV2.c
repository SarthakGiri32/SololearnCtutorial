//
// Created by sarthakgiri on 23/6/25.
//
#include <stdio.h>

void baggage(int weight) {

    int total;
    if(weight <= 23) {
        total = 0;
    }
    else {
        total = (weight-23)*12;
    }
    printf("Total: $%d", total);
}
int main() {
    int weight;
    scanf("%d", &weight);

    baggage(weight);

    return 0;
}
