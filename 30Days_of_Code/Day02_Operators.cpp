#include <iostream>
#include <cmath>

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost / 100.0 * tip_percent;
    double tax = meal_cost / 100.0 * tax_percent;
    int total_cost = round(tip + tax + meal_cost);
    std::cout << total_cost;
}