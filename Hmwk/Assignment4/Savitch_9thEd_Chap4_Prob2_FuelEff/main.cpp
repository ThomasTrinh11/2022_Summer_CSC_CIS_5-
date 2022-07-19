/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:55 PM
 * Purpose: Finds out which car has the best fuel efficiency
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float GALLONS = 0.264179;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float 
    lit1,
    lit2,
    mTrav1,
    mTrav2,
    galns1,
    galns2,
    mpGaln1,
    mpGaln2;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    
     do {
    cin >> lit1 >> mTrav1 >> lit2 >> mTrav2 >> let;
    galns1 = lit1 * GALLONS;
    galns2 = lit2 * GALLONS;
    mpGaln1 = mTrav1 / galns1;
    mpGaln2 = mTrav2 / galns2;
         
    cout << setprecision(2) << fixed << showpoint;
    cout << "Car 1" << endl;
    cout << "Enter number of liters of gasoline:" << endl;
    cout << "Enter number of miles traveled:" <<endl;
    cout << "miles per gallon: " << mpGaln1 << endl << endl;
    
    cout << "Car 2" << endl;
    cout << "Enter number of liters of gasoline:" << endl;
    cout << "Enter number of miles traveled:" <<endl;
    cout << "miles per gallon: " << mpGaln2 << endl << endl;
    
    if (mpGaln1>mpGaln2) {
        cout << "Car 1 is more fuel efficient" << endl << endl;
    } else cout << "Car 2 is more fuel efficient" << endl << endl;
    
    
    cout << "Again:" << endl;
    
    
    if (let !='n') cout << endl;
    } while(let!='n');
    //Map inputs -> outputs
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}