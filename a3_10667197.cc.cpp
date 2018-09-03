#include <iostream>

using namespace std;

int main()
{
    double a;

    cout << "please enter your exams score " << endl;
    cin >> a;
    if ((a>79) && (a<100))
    {

        cout << "your letter grade is: "<<"A";
    }
    else if((a>75) && (a<80))
    {
        cout << "your letter grade is: "<<"B+";
    }
        else if((a>69) && (a<75))
    {
        cout << "your letter grade is: "<<"B";
    }
        else if((a>65) && (a<70))
    {
        cout << "your letter grade is: "<<"C+";
    }
        else if((a>59) && (a<65))
    {
        cout << "your letter grade is: "<<"C";
    }
        else if((a>55) && (a<60))
    {
        cout << "your letter grade is: "<<"D+";
    }
        else if((a>49) && (a<55))
    {
        cout << "your letter grade is: "<<"D";
    }
        else if((a>40) && (a<50))
    {
        cout << "your letter grade is: "<<"E";
    }
        else if((a>0) && (a<40))
    {
        cout << "your letter grade is: "<<"F";
    }
    return 0;
}
