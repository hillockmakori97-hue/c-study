#include <iostream>
using namespace std;
#include <string>
#include<cctype>
// // //QUESTION 1
// int main(){
//     int choice;
//     float radius;
//     float area;
//     bool fail=true;
//     string res_fail;
//     const float pie=3.142;
//     cout<<"Select an option : \n";
//     cout<<"1,,Circle,,,2,,,Rectangle,,,3,,Triangle \n";
//     cin>>choice;
//     switch (choice)
//     {
//     case 1:
//         cout<<"Calculate area of circle \n";
//         cout<<"input radius";
//         cin>>radius;
//         area=radius*pie*radius;
//         break;  
//     case 2:
//         cout<<"-----Area Of A Reatangle-----\n";
//         cout<<"Input length: ";
//         float length;
//         cin>>length;
//         cout<<"Input Width: ";
//         float width;
//         cin>>width;
//         area=length*width;
//         break;
//     case 3:
//     int base,height;
//         cout<<"----Area Of A Triangle----\n";
//         cout<<"Input Width\n";
//         cin >>width;
//         cout<<"input base\n";
//         cin>>base;
//         area=0.5*base*height;
//         break;
//     default:
//         res_fail="Option out of range, input valid option \n";
//         fail=true;
//         break;
//     }
// if(fail==false){
//     cout <<"The area is : "<<area<<'\n';
// }else{
//     cout<<res_fail;
// }


// }
// // //Question 2
// int main(){
//     char letter ;
//     cout<<"input letter A-Z: ";
//     cin>>letter;
//     letter =std::tolower(static_cast<unsigned char>(letter));
//     if (!std::isalpha(static_cast<unsigned char>(letter))){
//         cout<<letter<<"Is not a letter of the alphabet";
//         return 0;
//     }
//    switch (letter){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             cout<< letter<<" Is a vowel \n";
//             break;
//         default:
//             cout<<letter<<" is a consonant \n";
  

//    }
//    return 0;

// }
// // //question 3
// /*
//  * Fixes for errors in original code:
//  * 1. Fixed `#include <iostream>` header (it was missing).
//  * 2. Removed the stray `1` on its own line.
//  * 3. Replaced `case score >= 70:` because switch cases must be fixed constants, not conditions.
//  * 4. Fixed `case 60 to 69:` since `to` isn't valid C++ syntax.
//  * 5. Added missing `break` statements to prevent accidental fall-through.
//  * 6. Used `score / 10` to convert ranges like 70-100 into integer values (7, 8, 9, 10).
//  */
// int main() {
//     int score;

//     cout << "Enter score (0-100): ";
//     cin >> score;

//     if (score < 0 || score > 100) {
//         cout << "Invalid score." << endl;
//         return 1;
//     }

//     switch (score / 10) {
//         case 10:
//         case 9:
//         case 8:
//         case 7:
//             cout << "Excellent" << endl;
//             break;
//         case 6:
//             cout << "Good" << endl;
//             break;
//         default:
//             cout << "Fail" << endl;
//             break;
//     }

//     return 0;
// }

// //// question 4
// int main(){
// int day;
// cout << "Enter day number (1-7): ";
// cin >> day;
// switch (day){

// case 1:
//     cout<<"Monday \n";
//     break;
// case 2:
//     cout<<"Tuesday \n";
//     break;
// case 3:
//     cout<<"Wednesday \n";
//     break;
// case 4:
//     cout<<"Thursday \n";
//     break;
// case 5:
//     cout<<"Friday \n";
//     break;
// case 6:
//     cout<<"Saturday \n";
//     break;

// case 7 :
//     cout<<"Sunday \n";
//     break;

// default:
//     cout<<"Invalid day entered \n";
//     break;
// }
// return 0;
// }
// // Question 5
// int main(){
//     char op;
//     float num1, num2;
//     cout << "Enter operation (+, -, *, /): ";
//     cin >> op;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     switch(op){
//         case '+':
//         cout<<"Result: "<<num1+num2;
//         case '-':
//         cout<<"Result: "<<num1 - num2;
//         case '*':
//         cout<<"Result: "<<num1 * num2;
//         case '/':
//         cout<<"Result: "<<num1 /num2;
//         default:
//         cout<<"Unknown Operation \n";
//     }
//     return 0;
// }
// ////Question 6
// int main() {
//     char choice;
//     int quantity;


//     cout << "--- FAST FOOD MENU ---" << endl;
//     cout << "B) Burger - 500 Ksh" << endl;
//     cout << "P) Pizza  - 800 Ksh" << endl;
//     cout << "F) Fries  - 150 Ksh" << endl;
//     cout << "D) Drink  - 100 Ksh" << endl;
//     cout << "Enter choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 'B':
//         case 'b':
//             cout << "Quantity: ";
//             cin >> quantity;
//             cout << "Total = " << quantity * 500 << " Ksh" << endl;
//             break;

//         case 'P':
//         case 'p':
//             cout << "Quantity: ";
//             cin >> quantity;
//             cout << "Total = " << quantity * 800 << " Ksh" << endl;
//             break; 
//             /* 
//              * If break is omitted here, fall-through happens.
//              * It prints Pizza total, then runs case 'F' code right 
//              * away and asks for Fries quantity too.
//              */

//         case 'F':
//         case 'f':
//             cout << "Quantity: ";
//             cin >> quantity;
//             cout << "Total = " << quantity * 150 << " Ksh" << endl;
//             break;

//         case 'D':
//         case 'd':
//             cout << "Quantity: ";
//             cin >> quantity;
//             cout << "Total = " << quantity * 100 << " Ksh" << endl;
//             break;

//         default:
//             cout << "Invalid choice" << endl;
//             break;
//     }

//     return 0;
// }
int main(){
    int age;
    float average_score;
    float precise_gpa;
    char middle_initial;
    bool passed;

    age=20;
    average_score=85.5 64;

}