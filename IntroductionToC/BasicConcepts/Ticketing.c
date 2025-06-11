//
// Created by Sarthak Giri on 11-06-2025.
//
#include <stdio.h>

int main() {
    // number of tickets ordered
    int tickets = 73;
    // price per ticket
    float price = (float) 7.45;

    // Task: calculate the total price and store it in a variable
    // Hint: use a float to store the result.
    float totalTicketPrice = (float) tickets * price;

    //Task: output the total in the format "Total: X", where X is the total price.
    printf("Total: %f\n", totalTicketPrice);

    return 0;
}
