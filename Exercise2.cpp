#include <iostream>
using namespace std;
int main()
{
    int score; // student's final score in class, assumed within [0 - 100] range
    char grade; // student's corresponding letter grade
     // get the student's score
    cout << "Enter score: ";
    cin >> score;
    
    if (!(score <= 100 && score >= 0)) 
    {
        cout << "Please enter a valid score between 0 and 100";
        exit(0);
    }

     // determine the student's letter grade
    if ( score >= 90 ) // = signs in lines 11, 15, 19, and 23
        grade = 'A';
    else
    {
        if ( score >= 80 )
            grade = 'B';
        else
        {
            if ( score >= 70 )
                grade = 'C';
            else 
            {
                if ( score >= 60 ) 
                    grade = 'D';
                else
                    grade = 'F';
            }
        }
    } //moved end of else to here (no longer includes switch (grade) )
    // display results
    switch ( grade )
    {
            case 'A':
                cout << "grade is A\n";
                break;
            case 'B':
                cout << "grade is B\n";
                break; //added break; here
            case 'C':
                cout << "grade is C\n";
                break;
            case 'D':
                cout << "grade is D\n";
                break;
            case 'F':
                cout << "grade is F\n";
                break;     
    }
}
