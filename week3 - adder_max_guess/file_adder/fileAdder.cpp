/********************************************************************* 
** Author:         Adam Wright
** Date:           1/21/2019
** Description:    Program that reads in the name of a file and then 
**                 opens it and reads a list of integers and then prints
**                 the sum to another file
*********************************************************************/ 

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::ifstream;
using std::ofstream;


int main()
{
    string userFileName;    // Variable to hold the filename
    int inputNum = 0;       // Variable to hold the numbers from the file
    int numberSum = 0;      // Variable to hold the sum to be outputted

    // Request the filename that will be opened
    cout << "Please enter your filename.\n";
    getline(cin, userFileName);

    // Open the input file
    ifstream infile;
    infile.open(userFileName);

    // If the file opens then add up the numbers and print the result to sum.txt
    if (infile)
    {
        while (infile >> inputNum)
        {
            numberSum += inputNum;
        }

        infile.close();

        // Create a new file called sum.tst
        ofstream outfile;
        outfile.open("sum.txt");


        // Print the sum to the file
        outfile << numberSum;
        outfile.close();

        // Prompt the user that the file was written
        cout << "result written to sum.txt\n";
    }

    // If the file doesn't open then report the error
    else
    {
        cout << "could not access file\n";
    }

    return 0;
}
