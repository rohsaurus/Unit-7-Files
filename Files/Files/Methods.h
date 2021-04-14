/*
*Rohan Parikh
*Unit 7 Files
* 1 April 2021 - 
*Extra Thing for Worksheet Create: In random number method, user can choose the max number that can be generated 
*/
#ifndef METHODS_H
#define METHODS_H
#include <cfguard.h>
#ifdef METHODS_H

#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>


// declaring global variables

namespace global_variables
{
    int number_of_employees;
}

// functions
void Courses_file(std::string wsname);
void Payroll_file(std::string wsname);
void Random_file(std::string wsname);
void grade_report (std::string wsname);
void payroll_format(std::string wsname);
void even_or_odd(std::string wsname);

#endif
#endif // METHODS_H
