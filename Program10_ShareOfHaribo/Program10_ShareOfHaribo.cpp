#include <iostream>
using namespace std;

int main()
{
    int packetsOfHaribo = 40;
    int students = 14;

    int packetsPerStudent = packetsOfHaribo / students;
    int packetsLeft = packetsOfHaribo % students;

    cout << "Each student gets " << packetsPerStudent << " packets of Haribo." << endl;
    cout << "There are " << packetsLeft << " packets remaining that I will eat myself." << endl;

    return 0;
}
