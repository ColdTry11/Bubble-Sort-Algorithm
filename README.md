# Bubble-Sort-Algorithm

This is a C++ program that reads a file containing records in a specific format, sorts the records using the bubble sort algorithm based on the ID number, and outputs the sorted records to a file. The program also counts the number of steps (i.e. comparisons) performed during the course of the algorithm and prints it to the console.

## Getting Started

To run this program, you must have Visual Studio installed on your system.

### Prerequisites

This program requires Visual Studio 2019 or later to run.

## Running the Program

To run the program, please follow the instructions below:

1. Open the solution file (Bubble Sort.sln) in Visual Studio.
2. In the Solution Explorer, right-click on the project and select Properties.
3. In the Project Properties dialog, select the Debug tab.
4. Under the Debugging section, locate the Command Arguments field.
5. Enter the path to your input file in the Command Arguments field.
6. Save the changes and run the program.

Note: The program requires a single command-line parameter, which is the path to the input file. If the path is not provided, or the file cannot be found, the program will report an appropriate error message.

## Input File Format

The input file should be formatted as follows:

- The first line should be a single integer, `n`, indicating the number of employees in the file.
- The next `n` lines should contain the employee information, with each line containing the following fields, separated by vertical bars (pipes):
  - Name
  - ID number
  - Age
  - Job title
  - Hire date

Here is an example input file:

10

Antharion Buxyho|10|31|Engineer|2020

Molly Nyxujijo|2|42|Custodian|2016

Grubbo Totexyca|9|47|Tester|2011

Thriff Cosapeka|7|24|Technician|2019

Grubbo Neferele|6|61|Director|1995

Borphee Rozuzy|5|23|Director|2019

Jeearr Heposiko|1|32|Engineer|2012

Krill Dodepo|4|48|Physicist|1997

Mumbo Muveze|8|27|Physicist|2019

Rezrov Zapefaty|3|44|Bookkeeper|2008


## Output

The program will output the intermediate values of the list at each iteration of the bubble sort algorithm. The output will consist of the IDs only, and will be formatted as follows:

10 2 9 7 6 5 1 4 3 8 

10 2 9 7 6 5 1 3 4 8 

10 2 9 7 6 1 5 3 4 8 

10 2 9 7 1 6 5 3 4 8 

10 2 9 1 7 6 5 3 4 8 

10 2 1 9 7 6 5 3 4 8 

10 1 2 9 7 6 5 3 4 8 

1 10 2 9 7 6 5 3 4 8 

1 10 2 9 7 6 3 5 4 8 

1 10 2 9 7 3 6 5 4 8 

1 10 2 9 3 7 6 5 4 8 

1 10 2 3 9 7 6 5 4 8 

1 2 10 3 9 7 6 5 4 8 

1 2 10 3 9 7 6 4 5 8 

1 2 10 3 9 7 4 6 5 8 

1 2 10 3 9 4 7 6 5 8 

1 2 10 3 4 9 7 6 5 8 

1 2 3 10 4 9 7 6 5 8 

1 2 3 10 4 9 7 5 6 8 

1 2 3 10 4 9 5 7 6 8 

1 2 3 10 4 5 9 7 6 8 

1 2 3 4 10 5 9 7 6 8 

1 2 3 4 10 5 9 6 7 8 

1 2 3 4 10 5 6 9 7 8 

1 2 3 4 5 10 6 9 7 8 

1 2 3 4 5 10 6 7 9 8 

1 2 3 4 5 6 10 7 9 8 

1 2 3 4 5 6 10 7 8 9 

1 2 3 4 5 6 7 10 8 9 

1 2 3 4 5 6 7 8 10 9 

1 2 3 4 5 6 7 8 9 10 

It took 45 comparisons to sort this list.


## Acknowledgments

This program was created as part of a programming exercise, and is not intended for commercial use.

