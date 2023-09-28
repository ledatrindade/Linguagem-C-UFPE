#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{

    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);

    return 0;
}

int get_cents()
{

    int cents;
    do
    {
        // Ask how many cents the customer is owed
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    return cents;
}

int calculate_quarters(int cents)
{

    int r = 0;

    r = cents / 25;

    // calculation
    return r;
}

int calculate_dimes(int cents)
{

    int r = 0;

    r = cents / 10;

    // calculation
    return r;
}

int calculate_nickels(int cents)
{

    int r = 0;

    r = cents / 5;

    // calculation
    return r;
}

int calculate_pennies(int cents)
{

    int r = 0;

    r = cents / 1;

    // calculation
    return r;
}
