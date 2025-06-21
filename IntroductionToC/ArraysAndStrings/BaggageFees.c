//
// Created by sarthakgiri on 21/6/25.
//
#include <stdio.h>

//define the function here
void baggage() {
    int baggageWeight, baggageFees = 0;
    scanf("%d", &baggageWeight);

    if (baggageWeight > 23) {
        baggageFees = (baggageWeight - 23) * 12;
    }

    printf("%d", baggageFees);

}

int main() {
    baggage();

    return 0;
}
