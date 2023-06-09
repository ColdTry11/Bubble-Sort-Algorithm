#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Employee.h"

using namespace std;

int main(int argc, char** argv)
{
    //Check for command line error
    if (argc == 1) {
        cout << "You forgot the command line parameter" << endl;
        exit(0);
    }

    //Check for file
    ifstream ifs;
    ifs.open(argv[1], ios::in);
    if (!ifs) {
        cout << "could not find file " << argv[1] << endl;
        exit(0);
    }

    //Get how many lines
    string line;
    getline(ifs, line);
    int n = stoi(line);

    //initializing an array
    Employee** employee = new Employee * [n];

    //loop through file
    for (int i = 0; i < n; i++) {
        int age;
        int id;
        int year;
        string name;
        string job;
        string ids;
        string a;
        string y;
        getline(ifs, name, '|');
        getline(ifs, ids, '|');
        getline(ifs, a, '|');
        getline(ifs, job, '|');
        getline(ifs, y);
        id = stoi(ids);
        age = stoi(a);
        year = stoi(y);
        Employee* emp = new Employee(name, id, age, job, year);

        //Add to array
        employee[i] = emp;


    }

    //BUBBLE SORT
    int comparison = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            comparison++;
            if (employee[j]->getID() < employee[j - 1]->getID()) {
                auto temp = employee[j];
                employee[j] = employee[j - 1];
                employee[j - 1] = temp;
                for (int k = 0; k < n; k++) {
                    cout << employee[k]->getID() << " ";
                }
                cout << endl;
            }
        }
    }

    cout << "It took " << comparison << " comparisons to sort this list." << endl;

}
