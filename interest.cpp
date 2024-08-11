#include <iostream>
#include <iomanip>
#include <string>
#include "interest.h" // Include the header file for the InterestCalculator class

using namespace std;

//This method will get the initial investment amount.

double InterestCalculator::GetInitialInvestment() const {
    return m_initialInvestment;
}

//This method will get the monthly deposit amount.

double InterestCalculator::GetMonthlyDeposit() const {
    return m_monthlyDeposit;
}

//This method will get the annual interest rate.

double InterestCalculator::GetAnnualInterestRate() const {
  return m_annualInterestRate;
}

//This method will calculate the interest without deposit and display the result.

void InterestCalculator::CalculateWithoutDeposit() {
  int i;
  int year = 1;
  double openingBalance = GetInitialInvestment();
  double interest;
  double interestSoFar = 0.00;
  double closingBalance;

  cout << fixed << setprecision(2);

  for (i = 0; i < m_monthsInYear; ++i) {

  interest = openingBalance *(GetAnnualInterestRate() / 100 /12);
  interestSoFar += interest;
  closingBalance = openingBalance + interest;

    if (i % 12 == 11) {
      cout << setw(20) << left << year << setw(20) << left << closingBalance << setw(12) << right << interestSoFar << endl;
      ++year;
      interestSoFar = 0.00;
    }

    openingBalance = closingBalance;

  }

}

//This method will calculate the interest with deposit and display the result.

void InterestCalculator::CalculateWithDeposit() {

  int i;
  int year = 1;
  double openingBalance = GetInitialInvestment();
  double interest;
  double interestSoFar = 0.00;
  double closingBalance;
  double monthlyDeposit = GetMonthlyDeposit();

  cout << fixed << setprecision(2);

  for (i = 0; i < m_monthsInYear; ++i) {

  interest = (openingBalance + monthlyDeposit) *(GetAnnualInterestRate() / 100 /12);
  interestSoFar += interest;
  closingBalance = openingBalance + interest + monthlyDeposit;

   if (i % 12 == 11) {
      cout << setw(20) << left << year << setw(20) << left << closingBalance << setw(12) << right << interestSoFar << endl;
      ++year;
      interestSoFar = 0.00;
    }

    openingBalance = closingBalance;

  }

}

//This method will display the input values.

void InterestCalculator::DisplayInput() {
    string exit;
    int numberOfYears;

    cout << "------------------------------------------------------------" << endl;
    cout << "|                         DATA INPUT                       |" << endl;
    cout << "------------------------------------------------------------" << endl;

    do {
        cout << "Initial Investment Amount: $";
        cin >> m_initialInvestment;
        if (m_initialInvestment < 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
        }
    } while (m_initialInvestment < 0);
    cout << endl;

    do {
        cout << "Monthly Deposit: $";
        cin >> m_monthlyDeposit;
        if (m_monthlyDeposit < 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
        }
    } while (m_monthlyDeposit < 0);
    cout << endl;

    cout << "Annual Interest Rate: %";
    cin >> m_annualInterestRate;
    cout << endl;

    do {
        cout << "Number of Years: ";
        cin >> numberOfYears;
        if (numberOfYears <= 0) {
            cout << "Invalid input. Please enter a number greater than 0." << endl;
        }
    } while (numberOfYears <= 0);
    m_monthsInYear = numberOfYears * 12;
    cout << endl;

    cout << "Type anything and hit enter to continue: ";
    cin >> exit;
    cout << endl;
}


//This method will display the interest output for user without the monthly deposit.

void InterestCalculator::OutputWithoutDeposit() {
  cout << "------------------------------------------------------------" << endl;
  cout << "| Balance and Interest Without Additional Monthly Deposits |" << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "|Year          Year-End Balance           Year-End Interest|" << endl;
  cout << "============================================================" << endl;
  CalculateWithoutDeposit(); // Outputs the calculated numbers
}

//This method will display the interest output for user with the monthly deposit.

void InterestCalculator::OutputWithDeposit() {
  cout << "------------------------------------------------------------" << endl;
  cout << "|        Balance and Interest With Monthly Deposits        |" << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "|Year          Year-End Balance           Year-End Interest|" << endl;
  cout << "============================================================" << endl;
  CalculateWithDeposit(); // Outputs the calculated numbers
}
