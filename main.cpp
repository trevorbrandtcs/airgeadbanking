#include <iostream>
#include <iomanip>
#include <string>
#include "interest.h" // Include the header file for the InterestCalculator class

using namespace std;

//This is the main function where the program starts execution.

int main() {

    InterestCalculator calc; // Create an instance of the InterestCalculator class

    //This method will display the input values.

    calc.DisplayInput();

    //This method will calculate and display the output without deposit.

    calc.OutputWithoutDeposit();

    //This method will calculate and display the output with deposit.
      
    calc.OutputWithDeposit();

    return 0; // Return 0 to indicate that the program has executed successfully
}
