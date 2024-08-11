# Airgead Banking
Airgead Banking Investment Calculator

# Scenario

Congratulations! You have completed the interview process and have been hired as a junior developer at Chada Tech. Now that you have successfully completed your new-hire orientation and have been introduced to the rest of your team, you are ready to jump in and start working on your first project.

You are asked to collaborate with Airgead Banking, one of Chada Tech’s clients. Airgead Banking is well known in the community. They often sponsor schools and have recently decided to partner with the local high school to develop a program that will teach students the concepts of fiscal responsibility (such as living within their means and spending less than they make) via an interactive system. The initial focus for this project will be on investing and the power of compound interest. You will develop an application that allows users to see how their investments will grow over time. Airgead Banking has provided you with a list of functional requirements that describe what they need their application to do.

# Pseudocode

# >>File 1: main.cpp 

Include the necessary libraries and the “interest.h” header file. 

Use the standard namespace. 

Define the main function. 

Create an instance of the InterestCalculator class named calc. 

Call the DisplayInput method of the calc object to display the input values. 

Call the OutputWithoutDeposit method of the calc object to calculate and display the output without deposit. 

Call the OutputWithDeposit method of the calc object to calculate and display the output with deposit. 

Return 0 to indicate that the program has executed successfully. 

# >>File 2: interest.cpp 

Include the necessary libraries and the “interest.h” header file. 

Use the standard namespace. 

Define the methods of the InterestCalculator class: 

GetInitialInvestment: Return the initial investment amount. 

GetMonthlyDeposit: Return the monthly deposit amount. 

GetAnnualInterestRate: Return the annual interest rate. 

DisplayInput: Display the input values. 

OutputWithoutDeposit: Calculate and display the output without deposit. 

OutputWithDeposit: Calculate and display the output with deposit. 

CalculateWithoutDeposit: Calculate the interest without deposit. 

CalculateWithDeposit: Calculate the interest with deposit. 

# >>File 3: interest.h 

Define the InterestCalculator class with the following public methods: 

DisplayInput 

OutputWithDeposit 

OutputWithoutDeposit 

CalculateWithDeposit 

CalculateWithoutDeposit 

GetInitialInvestment 

GetMonthlyDeposit 

GetAnnualInterestRate 

Define the InterestCalculator class with the following private variables: 

m_initialInvestment 

m_monthlyDeposit 

m_annualInterestRate 

m_monthsInYear 
