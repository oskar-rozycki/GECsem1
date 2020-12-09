#include <iostream>
using namespace std;

int main()
{
    typedef int cost;

    enum CarMake
    {
        FORD = 1,
        FIAT,
        TESLA,
        VW,
        BMW,
        ASTONMARTIN,
        HONDA,
        NISSAN,
        TOYOTA,
        AUDI,
        JAGUAR,
        DODGE
    };

    cost priceOfMyCar = 13000;
    CarMake myCar = HONDA;

    cout << "The cost of my car is: " << priceOfMyCar << endl;
    cout << "My car ID is: " << myCar << endl;

    return 0;
}
