/************************
Name:         Ibar Romay
GitHub:       https://github.com/rowmatrix
File:         solution.cpp
Description:  RC Circuit step response
Last Update:  March 20, 2016 6:26pm
*************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main()
{
    cout << "Enter Vs, R, and C, respectively, with spaces: ";
    double Vs, R, C;
    cin >> Vs >> R >> C;
 
    cout << "Enter time duration (sec), T: ";
    double T;
    cin >> T;
 
    // print table heading
    cout << setw(15) << "Time " << setw(15) << "Vc" << endl;
 
    // print times and voltages
    double Vc;           // capacitor voltage
    double tau = R*C;    // time constant
    double rise = 0;     // rise time
    double a = 0, b = 0; // temp variables 
    int flag = 0; // flag to accept 1st time step that reaches at least 10%, 90%
 
    for(double t = 0; t <= T*1.04; t += T*0.04) // 0.04 = 1/25
    {
        Vc = Vs * (1 - exp(-1*t/tau));
        cout << fixed << setprecision(2);
        cout << setw(15) << t << setw(15) << Vc << endl;
 
        if(Vc >= 0.1*Vs && Vc < 0.9*Vs && flag == 0)
        { a = t; flag = 1;} // at least 10%, but less than 90%
        else if(Vc >= 0.9*Vs && flag == 1)
        { b = t; flag = 0;} // at least 90% 
    }
    //cout << "a = " << a << " b = " << b << endl;
 
    if(a != 0 && b != 0) // Results
    { 
        rise = b - a; 
        cout << "The rise time is " << rise << " seconds." << endl; 
    }
    else { cout << "No rise-time available" << endl; }
 
    return 0;
}