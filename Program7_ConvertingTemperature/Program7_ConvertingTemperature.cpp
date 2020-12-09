#include <iostream>
using namespace std;

int main()
{
    float fahrenheit = 95.0f;
    float celsius = (fahrenheit - 32.0f) * 0.5556f;

    cout << fahrenheit << "\370F is equal to " << celsius << "\370C." << endl;

    return 0;
}
