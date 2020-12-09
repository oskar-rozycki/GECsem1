#include <iostream>
using namespace std;

int main()
{
    cout << "Please choose an option: \n1. Sunny \n2. Cloudy \n3. Raining \n4. Exit the program" << endl;
    int chosenOption;
    cin >> chosenOption;

    switch (chosenOption)
    {
        case 1:
            cout << "Don't forget your suncreen!" << endl;
        break;

        case 2:
            cout << "Another dark day... unlucky." << endl;
        break;

        case 3:
            cout << "Bring an umbrella with you!" << endl;
        break;

        default:
            cout << "See you next time!" << endl;
        break;
    }

    return 0;
}
