/*
 *Header
 */
#include "Methods.h"

using namespace std;
int main(int argc, char* argv[])
{
    // Worksheet Name Variables
    string courses_txt = "Worksheet Create | Courses.txt question";
    string payroll_txt = "Worksheet Create | Payroll.txt question";
    //Worksheet Create Methods
    Courses_file(courses_txt);
    Payroll_file(payroll_txt);
    return 0;
}