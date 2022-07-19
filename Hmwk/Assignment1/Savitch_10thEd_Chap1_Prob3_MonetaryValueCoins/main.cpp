/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 22, 2022, 2:00 PM
 * Purpose: Find the monetary value of coins in cents
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int Nquart, 
        Ndime, 
        Nnick; 
    int Tvalue; 
    
    //Initialize Variables
    
    //Map inputs to outputs > The Process
    
    // Display Results
    cout << "Press return after entering a number. \n";
    cout << "Enter the number of quarters: \n";
    cin >> Nquart;
    cout << "Enter the number of dimes: \n";
    cin >> Ndime;
    cout << "Enter the number of nickels: \n";
    cin >> Nnick;
    Tvalue = 25 * Nquart + 10 * Ndime + 5 * Nnick;
    
    cout << "The coins are worth ";
    cout << Tvalue;
    cout << " cents.";
    //Exit stage right
    return 0;          
}


