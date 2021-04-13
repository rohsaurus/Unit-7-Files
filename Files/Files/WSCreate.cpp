/*
*Header
*/
#include "Methods.h"
#include <vector>
using namespace std;

void Courses_file(string wsname)
{
    // worksheet name
    cout << wsname << endl;
    // asking for user info first

    cout << "What's your first and last name?\n";
    string name;
    getline(cin,name);
    cout << "What's your favorite course this year?\n";
    string course;
    getline(cin,course);
    cout << "Enter your last three grades\n";
    double one, two, three;
    cin >> one;
    cin >> two;
    cin >> three;
    cin.ignore();
    cout << "Enter your the last name of your teacher\n";
    string teacher_last_name;
    getline (cin,teacher_last_name);

    // Creating file
    ofstream fout;
    fout.open("Courses.txt");
    fout <<name << endl;
    fout << course << endl;
    fout << one << " " << two << " " << three << endl;
    fout << teacher_last_name << endl;
    fout.close();
}

void Payroll_file(string wsname)
{
    // worksheet name
    cout << wsname << endl;

    // Asking for user info first

    // for loop to make sure amount of employees is integer

    int count = 0;
    int triggered = 0;
    int employees = 0;
    while (true){
        
    cout << "Enter the number of employees you would like to enter\n";
    string employees_in_string_format;
    getline (cin, employees_in_string_format);
        for (int i = 0; i < employees_in_string_format.length(); ++i)
        {
            triggered = 0;
            if (isdigit(employees_in_string_format[i]) == false)
            {
                count = 1;
                triggered = 1;
            }
            else
            {
                count = 0;
            }
        }
        if (triggered == 1)
        {
            cout << "One of your inputs for the amount of employees you have is not a positive integer. Please enter \n positive integers\n";
        }

        else if (triggered == 0)
        {
            cout << "Your inputs are validated!\n";
            employees = stoi(employees_in_string_format);
            break;
        }
}

    // now, having employeer put employee info for each one
    vector <string> employee_information;
    for (int j = 1; j<= employees; j++)
    {
        cout << "Enter the name of employee #" << j << endl;
        string name_throwaway;
        getline (cin, name_throwaway);
        employee_information.emplace_back(name_throwaway);
        cout << "Enter the hourly wage of " << name_throwaway << endl;
        string wage;
        getline (cin,wage);
        employee_information.emplace_back(wage);
        cout << "Enter the amount of hours " << name_throwaway << " worked this past week\n";
        string hours;
        getline(cin,hours);
        employee_information.emplace_back(hours);       
    }
    // Now making file to print to
    ofstream payroll;
    payroll.open("Payroll.txt");

    // Note to self: Using vector and storing everything there, Each employee has 3 values
    // So I was thinking that I could have the program calculate the length and somehow based off that section off
    // and print 3 per person and

    int length = employee_information.size();
    
    
    
}

