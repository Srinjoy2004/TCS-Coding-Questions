#include <iostream>
#include <string>

// Function to find the number of days in a month
int find_days_in_month(int month) {
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, and November
    } else if (month == 2) {
        return 28; // February has 28 days (ignoring leap years)
    } else {
        return 31; // All other months
    }
}

int main() {
    using namespace std;
    
    string date_str;
    cout << "Enter date in dd-mm-yyyy format: ";
    cin >> date_str;

    // Extract the month from the input string
    int month = stoi(date_str.substr(3, 2));

    // Get and print the number of days
    int days = find_days_in_month(month);
    cout << "Number of days in the entered month: " << days << endl;

    return 0;
}