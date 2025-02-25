#include <bits/stdc++.h>

using namespace std;

int main()
{
    double principal_amount = 10000, rate_of_int = 5, time = 2;

    // Calculating compound interest
    double amount = principal_amount * ((pow((1 + rate_of_int / 100), time)));
    double compound_intrest = amount - principal_amount;

    cout << "Compound interest is " << compound_intrest;

    return 0;
}