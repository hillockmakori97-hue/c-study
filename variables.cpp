#include <iostream>
using namespace std;

int main() {
    // Question 1
    int age = 20;
    float average_score = 85.5;
    double precise_gpa = 3.8753;
    char middle_initial = 'M';
    bool passed = true;

    cout << "=== Question 1 ===" << endl;
    cout << "Student Profile:" << endl;
    cout << "Age: " << age << endl;
    cout << "Average Score: " << average_score << endl;
    cout << "Precise GPA: " << precise_gpa << endl;
    cout << "Middle Initial: " << middle_initial << endl;
    cout << "Passed (1=Yes, 0=No): " << passed << endl;
    cout << endl;

    // Question 2
    int x = 17;
    int y = 5;

    int int_quotient = x / y;
    float float_quotient = (float)x / y;

    cout << "=== Question 2 ===" << endl;
    cout << "Integer Division (17 / 5): " << int_quotient << endl;
    cout << "Explicit Cast Division ((float)17 / 5): " << float_quotient << endl;
    cout << endl;

    // Question 3
    int number = 10;
    char letter = 'a';
    int result = number + letter;

    cout << "=== Question 3 ===" << endl;
    cout << "The result of 10 + 'a' is: " << result << endl;
    cout << endl;

    // Question 4
    float original_price = 45.99;
    int truncated_price = static_cast<int>(original_price);

    cout << "=== Question 4 ===" << endl;
    cout << "Original Price: $" << original_price << endl;
    cout << "Truncated Price (using static_cast): $" << truncated_price << endl;
    cout << endl;

    // Question 5
    float fahrenheit = 98.0;
    float celsius = (fahrenheit - 32) * ((float)5 / 9);

    cout << "=== Question 5 ===" << endl;
    cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << endl;
    cout << endl;

    // Question 6
    int total_days = 400;
    int years = total_days / 365;
    int remaining_days = total_days % 365;

    cout << "=== Question 6 ===" << endl;
    cout << total_days << " days is equal to " << years << " year(s) and " << remaining_days << " remaining day(s)." << endl;
    cout << endl;

    // Question 7
    double base = 10.5;
    double height = 7.4;
    double hypotenuse = 12.84;

    double area = 0.5 * base * height;
    double perimeter = base + height + hypotenuse;

    cout << "=== Question 7 ===" << endl;
    cout << "Triangle Area: " << area << endl;
    cout << "Triangle Perimeter: " << perimeter << endl;
    cout << endl;

    // Question 8
    int num8 = 456;
    int hundreds = num8 / 100;
    int tens = (num8 / 10) % 10;
    int units = num8 % 10;
    int sum = hundreds + tens + units;

    cout << "=== Question 8 ===" << endl;
    cout << "The digits of " << num8 << " sum up to: " << sum << endl;
    cout << endl;

    // Question 9
    char original_char = 'C';
    int offset = 3;
    char encrypted_char = (char)(original_char + offset);

    cout << "=== Question 9 ===" << endl;
    cout << "Original Character: " << original_char << endl;
    cout << "Encrypted Character (+3 shift): " << encrypted_char << endl;
    cout << endl;

    // Question 10
    int amount = 87;
    int rem = amount;

    int notes_50 = rem / 50;
    rem = rem % 50;

    int coins_20 = rem / 20;
    rem = rem % 20;

    int coins_10 = rem / 10;
    rem = rem % 10;

    int coins_1 = rem;

    cout << "=== Question 10 ===" << endl;
    cout << "Amount: " << amount << " shillings" << endl;
    cout << "50s: " << notes_50 << endl;
    cout << "20s: " << coins_20 << endl;
    cout << "10s: " << coins_10 << endl;
    cout << "1s: " << coins_1 << endl;

    return 0;
}



