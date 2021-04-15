/*
*Rohan Parikh
*Unit 7 Files
* 1 April 2021 - 
*Extra Thing for Worksheet Create: Adding the random numbers together and printing the output\
*Extra Thing for Worksheet Read: User can save amount of evens, odds, entries and average to a new file
*/

#include "Methods.h"
#include <sstream>
#include <stdlib.h>
#include <Math.h>

using namespace std;

//intilizing global variables
//int number_of_employees;

// grade report function
void grade_report(string wsname)
{
    cout << wsname << endl;
    ifstream grades;
    // opening file
    grades.open("Courses.txt",ios::in);
    // Writing the lines above line three (grades) to variables and then line three
    string line_one;
    getline(grades,line_one);
    string line_two;
    getline(grades,line_two);
    string line_three;
    getline(grades,line_three);
    string line_four;
    getline(grades,line_four);
    cout << endl;
    // Now going to write grade report
    cout << "Name: " << line_one << endl;
    cout << "Professor/Teacher: " << line_four << endl;
    cout << "Course: " << line_two << endl << endl;
    cout << "Test No. \t \t Grades\n";
    cout << "-------------------------------\n";
    istringstream iss(line_three);
    vector <string> grades_array;
    do
    {
        string subs;
        iss >> subs;
        grades_array.push_back(subs);
    }while (iss);
    string grade_one = grades_array[0];
    string grade_two = grades_array[1];
    string grade_three = grades_array[2];
    double grade_one_double = stod(grade_one);
    double grade_two_double = stod(grade_two);
    double grade_three_double = stod(grade_three);
    double average = (grade_one_double+grade_three_double+grade_two_double)/3;
    double rounded = round(10*average)/10;
    cout << "Test #1\t               " << grade_one_double << endl;
    cout << "Test #2\t               " << grade_two_double << endl;
    cout << "Test #3\t               " << grade_three_double << endl;
    cout << endl;
    cout << "Average: " << rounded << endl;

    // closing files
    grades.close();
}

// payroll function
void payroll_format(string wsname)
{
    // printing out worksheet name
    cout << wsname << endl;

    // format print
    cout << "Name \t \t Wage \t \t Hours \t\t Gross Pay\n";
    cout << "----------------------------------------------------------";
    ifstream employees;
    employees.open("Payroll.txt");
    string printing;
    cout << endl;
    for (int i = 0; i != number_of_employees; i++)
    {
        employees >> printing;
        cout << printing << " ";
        employees >> printing;
        cout << printing << "\t  ";
        employees >> printing;
        cout << printing << "\t\t";
        employees >> printing;
        cout << printing << "\t\t";
        employees >> printing;
        cout << printing;
        cout << endl;
    }
    // closing file
    employees.close();
}

// even or odd function
void even_or_odd(string wsname)
{
    // spacing out
    cout << endl;

    
    // printing out worksheet name
    cout << wsname << endl;
    
    // ifstream so i can only read from file
    ifstream numbers;
    numbers.open("numbers.txt");

    // making variables to allow for the values to change and be reflected and counted
    double sum = 0;
    int even = 0;
    int odd = 0;
    int entries = 0;
    string dump_from_file_to_memory;
    // extra thing: asking user if they want the results written to a file or printed to console
    cout << "Do you want your stastics written to a file, or printed to the console. Type 'file' for file. Anything else will go to the console\n";
    string user_choice;
    cin >> user_choice;

  
    // runs until the file is fully read
    while (!numbers.fail() && !numbers.eof())
    {
        entries ++;
        numbers >> dump_from_file_to_memory;
        int number_from_string = stoi(dump_from_file_to_memory);
        sum = sum + number_from_string;
        int even_or_odd = number_from_string % 2;
        if (even_or_odd == 0)
        {
            even ++;
        }
        else
        {
            odd++;
        }
    }

    // calculating average
    double average = sum/entries;
    
    // Writing to a file choice; extra thing
    fstream stats;
    stats.open("stats.txt",fstream::out);
    if (user_choice == "file")
    {
        stats << "Entries: " << entries << endl;
        stats << "Even #s: " << even << endl;
        stats << "Odd #s: " << odd << endl;
        stats << "Average: " << average << endl;
    }
    else
    {
        // creating space to make output more readable
        cout << endl;
        cout << "Entries: " << entries << endl;
        cout << "Even #s: " << even << endl;
        cout << "Odd #s: " << odd << endl;
        cout << "Average: " << average << endl;
    }

    // closing files
    stats.close();
    numbers.close();
    
}