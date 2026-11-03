#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float number, decimal;
    
    cout << "Δώσε ένα δεκαδικό αριθμό: ";
    cin >> number;

    decimal = fmod(number, 1);

    cout << "Δεκαδικό Μέρος = " << decimal;

    return 0;
}