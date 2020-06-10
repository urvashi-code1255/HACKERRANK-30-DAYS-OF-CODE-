#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, double tip_percent, double tax_percent) {
    double TotalCost; 
    TotalCost = meal_cost + meal_cost*(tip_percent + tax_percent)/100;
    cout<<round(TotalCost)<<endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

