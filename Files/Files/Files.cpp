/*
 *Rohan Parikh
 *Unit 7 Files
 * 1 April 2021 - 21 April 2021
 *Extra Thing for Worksheet Create: Adding the random numbers together and printing the output
 *Extra Thing for Worksheet Read: User can save amount of evens, odds, entries and average to a new file
 *Extra Thing for Worksheet Append: USer can choose whether they want the young dog, old dog in a file or printing to the console.
 */
#include "Methods.h"
using namespace std;
int main(int argc, char* argv[])
{
    // Worksheet Name Variables
    // made them constant since these do not to be changed
    const string courses_txt = "Worksheet Create | Courses.txt question";
    const string payroll_txt = "Worksheet Create | Payroll.txt question";
    const string numbers_txt = "Worksheet Create | Numbers.txt question";
    const string grade_report_txt = "Worksheet Read | Courses.txt question";
    const string payroll_formatting_txt = "Worksheet Read | Payroll.txt question";
    const string even_or_odd_txt = "Worksheet Read | Numbers.txt question";
    const string dog_txt = "Worksheet Append | Making dog file";
    const string dog_ages_txt = "Worksheet Append | Printing dogs based of young age and old age";
    const string more_dogs_txt = "Worksheet Append | Need to add more dogs\n";
    const string printing_dogs_txt = "Worksheet Append | Printing dog names\n";
    //Worksheet Create Methods
   // Courses_file(courses_txt);
    //Payroll_file(payroll_txt);
    Random_file(numbers_txt);
    
    //Worksheet Read Methods
    //grade_report(grade_report_txt);
    //payroll_format(payroll_formatting_txt);
    even_or_odd(even_or_odd_txt);

    // Worksheet Append methods
    //create_file(dog_txt);
    //dog_age(dog_ages_txt);
    //more_dogs(more_dogs_txt);
    //print_dogs(printing_dogs_txt);
    return 0;
}
