#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main(){
    vector<int> subject_marks={};
    int count=0;
    int x;
    int mark;
    int sum=0 ;
    while(count<5){
        cout<<"Enter Subject Scores : ";
        cin>>x;
        subject_marks.push_back(x);
        count++;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    cout << "Subject Scores: ";
    for ( int mark: subject_marks) {
        sum+=mark;
    }
    cout << sum;

    return 0;


}