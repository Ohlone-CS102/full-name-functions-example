#include <iostream>
#include <string>
using namespace std;

bool getNames(string &first, string &last);
bool getNames(string &first, string &middle, string &last);
bool fullName(string first, string last, string &full);

int main() {
    string first_name;
    string middle_name;
    string last_name;
    string full_name;

    if (!getNames(first_name, middle_name, last_name)) {
        cout << "No Good!" << endl;
        exit(0);
    }

    if (!fullName(first_name, last_name, full_name)) {
        cout << "Failed to combine names";
        exit(0);
    }

    cout << full_name;

    return 0;
}
/**
 * Gets the name from the user
 * @param first First name passed by reference
 * @param last Last name passed by reference
 * @return true if the input succeeds, otherwise false
 */
bool getNames(string &first, string &last) {
    cout << "Enter the first name:";
    cin >> first;
    cout << "Enter the last name:";
    cin >> last;
    if ( first == "Bob") {
        return false;
    } else {
        return true;
    }
}

bool getNames(string &first, string &middle, string &last) {
    cout << "Enter the first name:";
    cin >> first;
    cout << "Enter the middle name:";
    cin >> middle;
    cout << "Enter the last name:";
    cin >> last;
    if ( first == "Bob") {
        return false;
    } else {
        return true;
    }
}

bool fullName(string first, string last, string &full) {
    full = first + " " + last;
    if (full.length() < 1) {
        return false;
    }
    return true;
}
