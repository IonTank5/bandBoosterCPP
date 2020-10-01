#include <iostream>
#include "bandBooster.h"

using std::cout, std::cin, std::endl, std::string;
int main() {
    int weeks, boxSold;
    cout << "Enter name for student 1" << endl;
    bandBooster booster1;
    cin >> booster1.name;
    cout << "Enter name for student 2" << endl;
    bandBooster booster2;
    cin >> booster2.name;
    cout << "Enter name for student 3" << endl;
    bandBooster booster3;
    cin >> booster3.name;
    cout << "How many weeks will the fundraiser last?" << endl;
    cin >> weeks;
    for (int i = 0; i < weeks; ++i) {
        cout << "Week: " << i+1 << endl;
        cout<<"Enter number of boxes sold by " << booster1.name << " this week" << endl;
        cin >> boxSold;
        booster1.updateSales(boxSold);
        cout<<"Enter number of boxes sold by " << booster2.name << " this week" << endl;
        cin >> boxSold;
        booster2.updateSales(boxSold);
        cout<<"Enter number of boxes sold by " << booster3.name << " this week" << endl;
        cin >> boxSold;
        booster3.updateSales(boxSold);
    }
    cout << "Total Sales for " << booster1.name << " are: " << booster1.sales << endl;
    cout << "Total Sales for " << booster2.name << " are: " << booster2.sales << endl;
    cout << "Total Sales for " << booster3.name << " are: " << booster3.sales << endl;
    return 0;

}