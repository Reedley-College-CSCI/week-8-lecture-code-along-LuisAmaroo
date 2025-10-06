//Luis Amaro
//Oct 6 2025
#include <iostream>
using namespace std;
void showDrive();
int main() {
    const int SIZE = 10;
    cout << "Detroit Lions at Baltimore Ravens" << endl
    << "Sept 29, 2025 Game Statistics" << endl;

    int yards[SIZE] = { 67,98,60, 94, 35, 25, 45, 50, 30, 40 };
    cout << "First drice yards: " << yards[0] << endl;
    cout << "Epic second drive " << yards[1] << " yards" << endl;
    showDrive();
    showDrive();
    //display memory usage of array
    cout << "Array memory: ~" << sizeof(yards) << " bytes" << endl;

    return 0;
}
void showDrive()
{
    static int driveNum = 1;
    cout << "Showing drive " << driveNum << endl;
    driveNum++;
}