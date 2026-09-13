#include <iostream>
using namespace std;
#include <string>
// int main (){
//     int student_id;
//     string full_name;
//     cout << "Enter Full Name: "<<endl;
//     getline(cin,full_name);
//     // cout<<"Your name is "<<full_name<<endl;
//     cin.clear();
//     cout<<"Enter Student ID: "<<endl;
//     cin>>student_id;
//     cout<<"Success your name is "<<full_name <<" and admission your number is "<< student_id<<endl;

// }
//question 2
// int main(){
//     float bill;
//     int persons;
//     cout<<"Enter Bill: "<<endl;
//     cin>>bill;
//     cout<<"Enter number of persons: "<<endl;
//     cin>>persons;
//     double share;
//     int truncated_share=bill/persons;
//     share = static_cast<double>(bill)/persons;
//     cout<<"Each one pays :"<<share<<" Shillings"<<endl;
//     cout<<"Your truncated share is "<<truncated_share <<endl;
//     return 0;


// }
//Question 3
// int main(){
//     char letter;
//     cout<< "Enter letter to get ASCII equivalent"<<endl;
//     cin >>letter;
//     int ascii_equal=static_cast<int>(letter);
//     cout<< "The ASCII equivalent is "<<ascii_equal<<endl;
//     int number;
//     cout<<"Enter Number between 65 and 90"<<endl;
//     cin >>number;
//     if (number >=65 && number <90){
//         char uppercase_letter=static_cast<char>(number);
//         cout<<"The Uppercase Equivalent Is "<<uppercase_letter<<endl;
//     } else{
//         cout<<"Invalid Input Enter number in range"<<endl;
//     }
//     return 0;
    
// }
//question 4
// int main(){
//     int faren_temp;
//     int celcious_temp;
//     cout<<"Enter temerature in farenheit: "<<endl;
//     cin>>faren_temp;
//     celcious_temp=(faren_temp-32)*static_cast<float>(5)/9;
//     //adding static_cast<float>(5)/9; changes 5 into an float value and also does the same to 9 ,, this then avoids C from returning 0 because on integer division
//     cout<<"The temperature in celcious is : "<<celcious_temp<<endl;
//     return 0;
    
// }
//question i5
// int main(){
//     double weight;
//     cout<<"Enter weight : "<<endl;
//     cin >> weight;
//     int weight_integer=weight;
//     cout<<weight<<endl;
//     cout<<weight_integer<<endl;
//     return 0;
//     /*During implicit casting from double to int,
//      C++ truncates the decimal portion by discarding all digits after the decimal point without rounding, 
//      leaving only the whole integer stored in memory.*/
// }
//question 6
// int main() {
//     string courseName;
//     cout << "Enter your full course name: ";
//     getline(cin, courseName);
//     cout << "You are enrolled in: " << courseName << endl;
//     return 0;
// }
//question 7
// int main(){
//     int total_items_produced;
//     int active_machines;
//     int items_per_machine;
//     cout<<"Enter active machines :"<<endl;
//     cin>> active_machines;
//     cout<<"Enter Items Produced: "<<endl;
//     cin>>total_items_produced;
//     if (active_machines==0){
//         cout<< " WARNING !!! Cannot divide by zero"<<endl;

//     }else{
//         items_per_machine=static_cast<float>(total_items_produced)/active_machines;
//         cout<< items_per_machine<<" Items per machine"<<endl;
//     }
// }
// question 8
// int main(){
//     char letter;
//     int shift_mumber;
//     cout<<"Enter A Letter : "<<endl;
//     cin>>letter;
//     cout<<"Enter A Shift Number : "<<endl;
//     cin>>shift_mumber;
//     int shifted_acsii=letter+shift_mumber;
//     char encrypted_letter=static_cast<char>(shifted_acsii);
//     cout<< "Encrypted letter : "<<encrypted_letter<<endl;
//     return 0;
// }
// question 9
// int main(){
//     string product_name;
//     float price;
//     int discount_rate;
//     cout<<"Enter Product Name : ";
//     getline(cin,product_name);
//     cout<<"Input Price : "<<endl;
//     cin>>price;
//     cout<<"Enter Discount Rate : "<<endl;
//     cin>>discount_rate;
//     float discounted_price=price/static_cast<float>(discount_rate);
//     cout<<"Your discounted price for "<<product_name<< " is sh " <<discounted_price<<endl;
// }
// question 10
int main(){
    string student_name;
    double amount_paid;
    int loyalty_points;
    float f_loyalty_points;
    int rate=100;
    cout<<"Enter student name : "<<endl;
    getline(cin,student_name);
    cout<<"Enter Amount Paid : "<<endl;
    cin>>amount_paid;
    f_loyalty_points=static_cast<float>(amount_paid)/rate;
    loyalty_points=static_cast<int>(f_loyalty_points);
    cout<<"Congratulations "<<student_name<<"You Have paid Sh "<<amount_paid<<" and earned "<<loyalty_points<<" loyalty points"<<endl;
}