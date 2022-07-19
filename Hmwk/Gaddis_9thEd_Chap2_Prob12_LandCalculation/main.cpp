/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 23, 2022, 4:18 PM
 * Purpose: Problem - Land Calculation
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
    float oneAcre, tAcres;
    int nAcres;
    
    //Initialize Variables
    oneAcre = 4356.0e1;
    nAcres = 391876;
    
    //Map inputs to outputs > The Process
    tAcres = nAcres / oneAcre;
    
    // Display Results
    cout << "Number of acres in a tract of land = "<<tAcres;
    
    //Exit stage right
    return 0;          
}


