/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 11:05 PM
 * Purpose: Find the price in one and two years due to the inflation rate
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    
    float 
    yPrice,
    cPrice,
    iRate,
    pYear1,
    pYear2;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
    cin >> cPrice >> yPrice >> let;
    iRate = (cPrice - yPrice) / yPrice;
    pYear1 = iRate * cPrice + cPrice;
    pYear2 = pYear1  * iRate + pYear1;
    iRate = iRate * 100; 
           
    cout << fixed << setprecision(2) << showpoint;
    cout << "Enter current price:" << endl;
    cout << "Enter year-ago price:" << endl;
    cout << "Inflation rate: " << setw(4) << iRate << "%" << endl << endl;
    cout << "Price in one year: $" << pYear1 << endl;
    cout << "Price in two year: $" << pYear2 << endl << endl;
    
    cout << "Again:" << endl;
    
    if (let !='n') cout << endl;
    } while(let!='n');
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}