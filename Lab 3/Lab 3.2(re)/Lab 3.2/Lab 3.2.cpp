#include <iostream>
#include <iomanip>

using namespace std;

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);

int main()
{

    int marks1[5] = { 0 };//array to store mark1
    int marks2[5] = { 0 };//array to store mark
    float ca1[5] = { 0 };//array to store CA 1
    float ca2[5] = { 0 };//array to store CA 2

    //getting inputs
    for (int i = 0; i < 5; i++) {

        cout << "Enter Marks for Student " << i + 1 << ": " << endl;
        cin >> marks1[i] >> marks2[i];

        findMarks(marks1[i], marks2[i], ca1[i], ca2[i]);
    }
    //table header
    cout << "Students  " << "Marks1    " << "Marks2    " << "CA_1    " << "CA_A"<<endl;


    //display table data
    for (int i = 0; i < 5; i++) {
    
        cout << setw(6) << i + 1 << setw(8) << marks1[i] << setw(8) << marks2[i] << fixed
            << setprecision(2) << setw(8) << ca1[i] << setw(8) << ca2[i] << endl;

    }

    return 0;

}
void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) {

    t_CA1 = t_marks1 * 0.20;//assigment 1 CA marks
    t_CA2 = t_marks2 * 0.30;//assigment 2 CA marks

}

