#include<iostream>
using namespace std;
int calculateCube(double value ){
    cout<<"Enter Value\n";
    cin>>value;
    double cube=value*value*value;
    return cube;
    
}
// double cube=calculateCube(9.8)

//question 2 
int getSimpleInterest(double principle, double rate , double time){
    float interest=principle*rate*time/100 ;

    return interest;
}
// question 3
int isLeapYear(int year){
    bool res ;
    if (year%2==0){
        res = true;
    }else{
        res=false ;
    }
    return res ;

}



int main(){

    //// question 2

    // double principle,rate,time;
    // cout<<"enter Principle\n";
    // cin>>principle;
    // cout<<"Enter rate\n";
    // cin>>rate;
    // cout<<"Enter Time(Years) ";
    // cin>>time;
    // float interest=getSimpleInterest(principle,rate,time);
    // cout<<"Your interest is Ksh " <<interest<<"\n";

    //// question 3
    
    // cout<<"Enter Year: ";
    // int year;
    // cin >>year;
    // int res=isLeapYear(year);
    // if (res==true){
    //     cout<<"leap year\n";

    // }else{
    //     cout<<"Non leap Year \n";
    // }


    //// question 4





}

float calculateCube(float side){
    float res= side*side*side;
    return res;
}
int main(){
    float value;
    cout<<"Enter value to calculate its Cube \n";
    cin >>value;
    float cube = calculateCube(value);
    cout<< "The Cube if the number is " <<cube<<"\n";

}
