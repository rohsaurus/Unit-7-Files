/*
*Rohan Parikh
*Unit 7 Files
* 1 April 2021 - 
*Extra Thing for Worksheet Create: Adding the random numbers together and printing the output
*Extra Thing for Worksheet Read: User can save amount of evens, odds, entries and average to a new file
*Extra Thing for Worksheet Append: USer can choose whether they want the young dog, old dog in a file or printing to the console.
*/

#include "Methods.h";
using namespace std;

// Worksheet Append

// creating the file
void create_file(string wsname)
{
    // printing out wsname
    cout << wsname << endl;

    // creating file to append in later methods
    fstream dogs;
    dogs.open("dog.txt", fstream::out);

    
    // writing values to file

    dogs << "Wally 10" << endl;
    dogs << "Jessie 9" << endl;
    dogs << "Skeeter 15" << endl;
    dogs << "Lucky 7" << endl;
    dogs << "Corky 5" << endl;
    dogs << "Sadie 6" << endl;
    dogs << "Alexis 1" << endl;

    // closing file so it can be opened by the later methods
    dogs.close();
}

// sorting dogs by age method
void dog_age(string wsname)
{
    // printing worksheet name
    cout << wsname << endl;

    // Opening file
    ifstream DogeCoin;
    DogeCoin.open("dog.txt");

    // making variables to take data from file and compare it to check if dog is old or young
    string file_output = " ";
    string file_output_second = " ";
    int age_from_file = 0;
    vector<string> old_dogs;
    vector<string> young_dogs;
    // i need this vector so i can access the previous value
    vector<string> file_values;
    int j = 0;
    // checking if older than 7 or less
    while (DogeCoin >> file_output)
    {
        file_values.push_back(file_output);
        try
        {
            age_from_file = stoi(file_output);
            // setting file_output_Second to previous value so its a string and not a number
            file_output_second = file_values[j - 1];
            // checking if under 7 or over 7

            if (age_from_file >= 7)
            {
                old_dogs.push_back(file_output_second);
            }
            else
            {
                young_dogs.push_back(file_output_second);
            }
        }
        catch (exception)
        {
            // not an integer
            // resetting variables
            age_from_file = 0;
            file_output = " ";
        }
        j ++;
    }

    // printing out dog names based off of age
    int length_of_old_dogs_vector = old_dogs.size();
    int length_of_young_dogs_vector = young_dogs.size();


    // Extra Thing: User can either print this info to a file, or to the console

    cout << "Would you rather print the old dog, young dog to a file or the console. Type 'file' to print it to a file. Anything will print it to the console\n";
    string user_choice;
    cin >> user_choice;

    fstream DogeAges;
    DogeAges.open("DogAge.txt", fstream::out);
    if (user_choice == "file")
    {
        // printing to a file
        for (int i = 0; i != length_of_old_dogs_vector; i++)
        {
            DogeAges << old_dogs[i] << ": Old Dogs\n"; 
        }
        for (int i = 0; i != length_of_young_dogs_vector; i++)
        {
            DogeAges << young_dogs[i] << ": Young Dogs\n";
        }
    }


    else
    {
        // loops to print each name and write old dog or young dog

        for (int i = 0; i != length_of_old_dogs_vector; i++)
        {
            cout << old_dogs[i] << ": Old Dogs\n"; 
        }
        for (int i = 0; i != length_of_young_dogs_vector; i++)
        {
            cout << young_dogs[i] << ": Young Dogs\n";
        }  
    }

    // closing files

    DogeAges.close();
    DogeCoin.close();
}


// adding more dogs method
void more_dogs(string wsname)
{
    // printing worksheet name
    cout << wsname << endl;

    // opening up file for append
    fstream moreDogs;
    moreDogs.open("dog.txt", fstream::app);

    // appending data
    moreDogs << "Beatrice 3" << endl;
    moreDogs << "Tasha 4" << endl;
    moreDogs << "Patty 1" << endl;

    // closing file
    moreDogs.close();
    
}

void print_dogs(string wsname)
{
    // printing worksheet name
    cout << wsname << endl;

    // opening up file for reading
    ifstream doge;
    doge.open("dog.txt");


    // making variables to take data from file to print it out without printing number
    string file_output = " ";
    string file_output_second = " ";
    int age_from_file = 0;
    // i need this vector so i can access the previous value
    vector<string> file_values;
    int j = 0;
    // checking if older than 7 or less
    while (doge >> file_output)
    {
        file_values.push_back(file_output);
        try
        {
            age_from_file = stoi(file_output);
            // setting file_output_Second to previous value so its a string and not a number
            file_output_second = file_values[j - 1];

            // printing file_output_second so strings print
            cout << file_output_second << endl;
        
        }
        catch (exception)
        {
            // not an integer
            // resetting variables
            age_from_file = 0;
            file_output = " ";
        }
        j ++;
    }
    
}

