#include <iostream>
using namespace std;

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