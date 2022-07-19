/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:55 PM
 * Purpose: Reads in litters of gas and number of miles, then displays the number of miles per gallon
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
    liters, 
    mTrav,
    galns,
    mpGaln;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
    cin >> liters >> mTrav >> let;
    galns = liters * GALLONS;
    mpGaln = mTrav / galns;
         
    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter number of liters of gasoline:" << endl << endl;
    cout << "Enter number of miles traveled:" << endl <<endl;
    cout << "miles per gallon:" << endl << mpGaln << endl;
    cout << "Again:" << endl;
    if (let !='n') cout << endl;
    } while(let!='n');
    
    //Exit stage right or left!
    return 0;
}