#include <iostream>
#include <math.h>

using namespace std;

// Function to calculate simple interest
void simple_interest(float& principle, float& rate, float& time, float& si) {
  si = principle * rate * time / 100;
}

// Function to calculate compound interest
void compound_interest(float& principle, float& rate, float& time, float& ci) {
  ci = principle * (pow(1 + rate / 100, time)) - principle;
}

int main() {
  // Get the principle, rate and time from the user
  float principle, rate, time;
  cout << "Enter the principle amount: ";
  cin >> principle;
  cout << "Enter the rate of interest: ";
  cin >> rate;
  cout << "Enter the time period in years: ";
  cin >> time;

  // Calculate the simple interest
  float si;
  simple_interest(principle, rate, time, si);

  // Calculate the compound interest
  float ci;
  compound_interest(principle, rate, time, ci);

  // Print the results
  cout << "Simple interest = " << si << endl;
  cout << "Compound interest = " << ci << endl;

  return 0;
}