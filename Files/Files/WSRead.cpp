/*
*Header
*/

#include "Methods.h"
#include <sstream>
#include <stdlib.h>
#include <Math.h>
using namespace std;
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
}
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
    for (int i =0; !employees.eof();i++)
    {
        cout << endl;
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
}