#include <iostream>
using namespace std;

int main() {
    // 1. 
    cout << "1. Array of size 6:" << endl;
    double values[6] = {12.25, 32.50, 16.90, 23.0, 45.68, 50.60};
    for(int i = 0; i < 6; i++) {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // 2.
    cout << "2. Divide by 7:" << endl;
    double arr2[7] = {45, 34, 24, 57, 78, 69, 48};
    for(int i = 0; i < 7; i++) {
        cout << arr2[i] / 7.0 << " ";
    }
    cout << endl << endl;

    // 3. 
    cout << "3. Reverse order:" << endl;
    int myArray[] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};
    for(int i = 9; i >= 0; i--) {
        cout << myArray[i] << " ";
    }
    cout << endl << endl;

    // 4. 
    cout << "4. Enter 10 numbers (ascending, descending, sum):" << endl;
    int arr4[10];
    int sum4 = 0;
    cout << "Enter 10 numbers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr4[i];
        sum4 += arr4[i];
    }
    cout << "Ascending: ";
    for(int i = 0; i < 10; i++) {
        cout << arr4[i] << " ";
    }
    cout << "\nDescending: ";
    for(int i = 9; i >= 0; i--) {
        cout << arr4[i] << " ";
    }
    cout << "\nSum: " << sum4 << endl << endl;

    // 5. 
    
    cout << "5. Max and Min from Question 2:" << endl;
    double max_val = arr2[0];
    double min_val = arr2[0];
    for(int i = 1; i < 7; i++) {
        if(arr2[i] > max_val) max_val = arr2[i];
        if(arr2[i] < min_val) min_val = arr2[i];
    }
    cout << "Max: " << max_val << "\nMin: " << min_val << endl << endl;

    // 6. 
    cout << "6. Sum and Average of 5 numbers:" << endl;
    double numbers6[5];
    double sum6 = 0;
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> numbers6[i];
        sum6 += numbers6[i];
    }
    cout << "Sum: " << sum6 << "\nAverage: " << (sum6 / 5.0) << endl << endl;

    // 7. 
    cout << "7. Yearly Budget 2D Array:" << endl;
    double yearly_budget[10][12] = {0.0};
    cout << "2D array [10][12] declared successfully." << endl;

    return 0;
}