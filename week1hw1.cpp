/*
   Program name:  e.g. Rectangle.cpp
   Programmer:  your name
   Date: 2-18-22
   Version: 1.4
   Description: about 3 to 5 lines explain what is this program all about.
*/

#include <iostream>
#include <string>

using namespace std;

struct MonthlyBudget {
  double housing, utilities, householdE, transportation, food, medical,
      insurance, entertainment, clothing, misc;
};

// function prototypes
//  function to ask user how much is spent in each category per month (why pass
//  by reference?*********)
void spent(MonthlyBudget &S);
void overUnder(double B, double S);
double sum(MonthlyBudget q);
void report(MonthlyBudget B, MonthlyBudget S);

int main() {
  MonthlyBudget budget = {500.0, 150.0, 65.0,  50.0, 250.00,
                          30.0,  100.0, 150.0, 75.0, 50.0};

  MonthlyBudget spending;

  spent(spending);

  report(budget, spending);

  return 0;
};

void spent(MonthlyBudget &S) {
  cout << "Please input amount spent in each category per month \n";

  cout << "housing? " << '\n';
  cin >> S.housing;
  cout << '\n';

  cout << "utilities? " << '\n';
  cin >> S.utilities;
  cout << '\n';

  cout << "household Expenses? " << '\n';
  cin >> S.householdE;
  cout << '\n';

  cout << "transportation? " << '\n';
  cin >> S.transportation;
  cout << '\n';

  cout << "food? " << '\n';
  cin >> S.food;
  cout << '\n';

  cout << "medical? " << '\n';
  cin >> S.medical;
  cout << '\n';

  cout << "insurance? " << '\n';
  cin >> S.insurance;
  cout << '\n';

  cout << "entertainment? " << '\n';
  cin >> S.entertainment;
  cout << '\n';

  cout << "clothing? " << '\n';
  cin >> S.clothing;
  cout << '\n';

  cout << "misc? " << '\n';
  cin >> S.misc;
  cout << '\n';
};

void overUnder(double B, double S) {
  if (S > B) {
    cout << "Over budget by " << S - B << '\n';
  } else {
    cout << "Under budget by " << B - S << '\n';
  }
};

double sum(MonthlyBudget q) {
  return q.housing + q.utilities + q.householdE + q.transportation + q.food +
         q.medical + q.insurance + q.entertainment + q.clothing + q.misc;
};

void report(MonthlyBudget B, MonthlyBudget S) {
  cout << "Report for monthly expenditures\n"
       << "--------------------------------\n";

  cout << "housing: ";
  overUnder(B.housing, S.housing);

  cout << "utilities: ";
  overUnder(B.utilities, S.utilities);

  cout << "Household expenses: ";
  overUnder(B.householdE, S.householdE);

  cout << "transportation: ";
  overUnder(B.transportation, S.transportation);

  cout << "food: ";
  overUnder(B.food, S.food);

  cout << "medical: ";
  overUnder(B.medical, S.medical);

  cout << "insurance: ";
  overUnder(B.insurance, S.insurance);

  cout << "entertainment: ";
  overUnder(B.entertainment, S.entertainment);

  cout << "clothing: ";
  overUnder(B.clothing, S.clothing);

  cout << "misc: ";
  overUnder(B.misc, S.misc);

  double sumBudget = sum(B), sumSpending = sum(S);

  cout << "For the total budget: ";
  overUnder(sumBudget, sumSpending);
};