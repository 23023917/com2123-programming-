#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost,salaryOfEmployees,yearlyRent,electricityCost;

    cout << "Enter the total cost of merchandise:" << endl;
    cin>>merchandiseCost;

    cout<< "Enter salary of employees:" << endl;
    cin>>salaryOfEmployees;

    cout<< "Enter the yearly rent:" << endl;
    cin>>yearlyRent;

    cout<< "Enter the cost of electricity:" << endl;
    cin>>electricityCost;

    double Expenses;
    Expenses = merchandiseCost+salaryOfEmployees+yearlyRent+electricityCost;

    double desiredProfit = merchandiseCost*0.1;

    double newNetProfit = desiredProfit/0.85;

    double merchandiseMarkedUp;
    merchandiseMarkedUp = (newNetProfit+Expenses)/merchandiseCost;

    cout<< "The total meerchandise cost is:" << merchandiseMarkedUp << endl;


    return 0;
}
