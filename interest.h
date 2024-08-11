#ifndef INTEREST_H
#define INTEREST_H

/*
This class represents an interest calculator.
It contains methods to get the initial investment, monthly deposit, and annual interest rate.
It also contains methods to display the input, output without deposit, and output with deposit.
*/
class InterestCalculator {

  public:
  //This method will display the input values.

  void DisplayInput();

  //This method will display the interest output for user with the monthly deposit.

  void OutputWithDeposit();

  //This method will display the interest output for user without the monthly deposit.

  void OutputWithoutDeposit();

  //This method will calculate the interest with deposit.

  void CalculateWithDeposit();

  //This method will calculate the interest without deposit.

  void CalculateWithoutDeposit();

  //This method will get the initial investment amount.

  double GetInitialInvestment() const;

  //This method will get the monthly deposit amount.

  double GetMonthlyDeposit() const;

  //This method will get the annual interest rate.

  double GetAnnualInterestRate() const;

  private:
  double m_initialInvestment; // The initial investment amount
  double m_monthlyDeposit; // The monthly deposit amount
  double m_annualInterestRate; // The annual interest rate
  int m_monthsInYear; // The number of months in a year
};

#endif
