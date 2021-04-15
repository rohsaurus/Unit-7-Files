/*
 *Rohan Parikh
 *Unit 7 Files
 * 1 April 2021 - 
 *Extra Thing for Worksheet Create: Adding the random numbers together and printing the output
 *Extra Thing for Worksheet Read: User can save amount of evens, odds, entries and average to a new file
 */
#include "Methods.h"



using namespace std;
int main(int argc, char* argv[])
{
    // Worksheet Name Variables
    string courses_txt = "Worksheet Create | Courses.txt question";
    string payroll_txt = "Worksheet Create | Payroll.txt question";
    string numbers_txt = "Worksheet Create | Numbers.txt question";
    string grade_report_txt = "Worksheet Read | Courses.txt question";
    string payroll_formatting_txt = "Worksheet Read | Payroll.txt question";
    string even_or_odd_txt = "Worksheet Read | Numbers.txt question";
    //Worksheet Create Methods
   // Courses_file(courses_txt);
    Payroll_file(payroll_txt);
    Random_file(numbers_txt);
    grade_report(grade_report_txt);
    payroll_format(payroll_formatting_txt);
    even_or_odd(even_or_odd_txt);
    
    return 0;
}
