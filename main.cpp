/*
- Gets a date from the user
- Checks to see whether the date is valid
- Passes the date into a formula
- Returns the passcode to the user
*/

#include <iostream>
using namespace std;

int main()
{
    string userInput{};
    bool inputVerified{false};

    cout << "Passcode Generator" << endl;
    cout << "Please enter a date in the ddmmyyyy format:" << endl;

    cin >> userInput;
    // cout << userInput << endl;

    while (!inputVerified)
    {
        int userInputDay = stoi(userInput.substr(0, 2));
        int userInputMonth = stoi(userInput.substr(2, 2));
        int userInputYear = stoi(userInput.substr(4, 4));

        /*
        cout << "Day: " << userInputDay << endl;
        cout << "Month: " << userInputMonth << endl;
        cout << "Year: " << userInputYear << endl;
        */

        if (userInput.length() != 8)
        {
            cout << "Please enter a date in the ddmmyyyy format:" << endl;
            cin >> userInput;
            continue;
        }

        if (userInputDay <= 0 || userInputDay > 31)
        {
            cout << "Please enter a valid date in the ddmmyyyy format:" << endl;
            cin >> userInput;
            continue;
        }

        if (userInputMonth <= 0 || userInputMonth > 12)
        {
            cout << "Please enter a valid date in the ddmmyyyy format:" << endl;
            cin >> userInput;
            continue;
        }

        if (userInput.substr(4, 4).length() < 4 || userInputYear < 1900)
        {
            cout << "Please enter a valid date in the ddmmyyyy format:" << endl;
            cin >> userInput;
            continue;
        }

        inputVerified = true;
        break;
    }
    
    cout << "Verified: " << inputVerified << endl;

    return 0;
}