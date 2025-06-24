//
// Created by sarthakgiri on 24/6/25.
//
#include <stdio.h>

int baggage(int weight) {

    int total;
    if(weight <= 23) {
        total = 0;
    }
    else {
        total = (weight-23)*12;
    }
     return total;

}
int main() {
    int weight;
    scanf("%d", &weight);

    int total = baggage(weight);
    printf("Total: $%d", total);

    return 0;
}
