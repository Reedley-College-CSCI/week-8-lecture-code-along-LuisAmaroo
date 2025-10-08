//Luis Amaro
//Oct 6 2025
#include <iostream>
using namespace std;
struct Drive {
    int yards;
    int plays;
};

void showDrive();
void showYards(int arrs[], int size);
bool areEqual(int arr1[], int arr2[], int size);

int main() {
    const int SIZE = 10;
    /*
    Drive drives[SIZE] = { {67,11}, {98,18}, { 60,10 } { 94,12 },{35,5},{25,4},{45,6},{50,7},{30,5},{40,6} };
    */
    cout << "Detroit Lions at Baltimore Ravens" << endl
    << "Sept 29, 2025 Game Statistics" << endl;

   int yards[SIZE] = { 67,98,60, 94, 35, 25, 45, 50, 30, 40 };
   int yards2[SIZE] = { 67, 98, 60, 94, 35, 25, 45 , 50, 30, 40 };
    cout << "First drice yards: " << yards[0] << endl;
    cout << "Epic second drive " << yards[1] << " yards" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Drive " << i + 1 << ": " << yards[i] << " yards" << endl;
    }
    showDrive();
    showDrive();
    //display memory usage of array
    cout << "Array memory: ~" << sizeof(yards[SIZE]) << " bytes" << endl;

    cout << "All yards: ";
    for (int val : yards) {
        cout << val << " ";
    }
    cout << endl;

    double total = 0;
    for (int val : yards) {
        total += val;
    }
    cout << "Total yards: " << total << endl;
    cout << "Average yards: " << total / SIZE << endl;

    //find longest drive in yards
    int maxYards = yards[1];
    for (int i = 1; i < SIZE; i++)
    {
        if (yards[i] > maxYards)
        {
            maxYards = yards[i];
        }
    }
    cout << "Longest drive: " << maxYards << " yards" << endl;
    
    int plays[SIZE] = { 11, 18, 19, 12, 5 , 4, 6, 7, 5, 6 };
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Drive " << i + 1 << ": " << plays[i] << " plays, "
            << yards[i] << " yds" << endl;
    }
    cout << "Yards via function: " << endl;
    showYards(yards, SIZE);
    cout << "Do drive yards for each array match?" << endl
        << (areEqual(yards, yards2, SIZE) ? "Yes" : "No");

    return 0;
}
void showDrive()
{
    static int driveNum = 1;
    cout << "Showing drive " << driveNum << endl;
    driveNum++;
}
void showYards(int arrs[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arrs[i] << " " << endl;
    }
}
bool areEqual(int arr1[], int arr2[], int size)
{
    for( int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i]) return false;
    }
}