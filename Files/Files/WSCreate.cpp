/*
*Header
*/
#include "Methods.h"
#include <cstdlib>

using namespace global_variables;
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
    getline(cin,teacher_last_name);

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
            number_of_employees = stoi(employees_in_string_format);
            break;
        }
}
    // initilizing file
    ofstream payroll;
    payroll.open("Payroll.txt");
    
    // now, having employeer put employee info for each one
    
    for (int j = 1; j<= number_of_employees; j++)
    {
        // initilizing vector inside so it gets reset every time
        vector <string> employee_information;
        cout << "Enter the name of employee #" << j << endl;
        string name_throwaway;
        getline (cin, name_throwaway);
        // adding user info into vector
        employee_information.emplace_back(name_throwaway);
        cout << "Enter the hourly wage of " << name_throwaway << endl;
        string wage;
        getline (cin,wage);
        employee_information.emplace_back(wage);
        cout << "Enter the amount of hours " << name_throwaway << " worked this past week\n";
        string hours;
        getline(cin,hours);
        employee_information.emplace_back(hours);

        // calculatotions to figure out gross pay and then make it string for vector
        double wage_double = stod(wage.substr(1));
        double hours_double = stod(hours);
        string gross_pay = "$";
        double gross_pay_double = wage_double * hours_double;
        string temp = std::to_string(gross_pay_double);
        gross_pay.append(temp);
        employee_information.emplace_back(gross_pay);
        // writing to file once per employee to allow for unlimited scalability
        std::ostream_iterator<std::string> output_iterator(payroll, "\t");
        std::copy(employee_information.begin(), employee_information.end(), output_iterator);
        payroll << endl << endl;
    }

    // closing file to make sure no data corruption
   payroll.close();
    
    
}

void Random_file(string wsname)
{
    // print out worksheet name
    cout << wsname << endl;

    cout << "How many random numbers do you want?\n";
    int number = 0;
    cin >> number;
    ofstream random;
    while (number > 100 || number <= 0)
    {
        cout << "Please enter a number between 0 and 100, including 100 and 1.\n";
        cin >> number;
    }
    cout << "Please choose the max number that can be randomly generated\n";
    int max = 0;
    // Extra Thing
    cin >> max;
    int j = 0;
    random.open("numbers.txt");
    srand(time(0));
    while (j != number)
    {
        
        random << rand() %max;
        random << endl;
        j++;
    }
    random.close();
}






