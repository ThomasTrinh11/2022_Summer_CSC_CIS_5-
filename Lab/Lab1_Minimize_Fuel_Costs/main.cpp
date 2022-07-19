/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 26, 2022, 12:03 PM
 * Purpose: Create a project that performs the same calculations
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
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned char sizeTnk,
    gMile,
    mtoGas1,   
    mtoGas2;       
                               
    float gasGfull,
          reqGalns,
          pGaln1,
          cFill,
          regGas1,
          tCst1,
          cDrv1,
          tDist1,
          tDist2,
          regGas2,                                   
          pGaln2,
          cFill2,
          cDrv2,
          tCst2;
    
    //Initialize Variables
    gasGfull = 0.75;
    sizeTnk = 22;
    gMile = 17;
    reqGalns=sizeTnk*(1-gasGfull);    
    regGas1=4.25;
    mtoGas1=10;            
    regGas2=4.09;
    mtoGas2=20;
    
    
    
    
    //Map inputs to outputs > The Process
 
    //Gas Station 1
    tDist1=2*mtoGas1;
    cFill=regGas1*reqGalns;    
    cDrv1=tDist1/gMile*regGas1;
    tCst1=cFill+cDrv1;
    pGaln1=tCst1/reqGalns;
    
    //Gas Station 2
    tDist2=2*mtoGas2;
    cFill2=regGas2*reqGalns;    
    cDrv2=tDist2/gMile*regGas2;
    tCst2=cFill2+cDrv2;
    pGaln2=tCst2/reqGalns;
    
    // Display Results
    cout << setprecision(2) << fixed;
    cout << "The price per gallon when adding in mileage to station 1 is $";
    cout << pGaln1 << endl;
    cout << "The price per gallon when adding in mileage to station 2 is $";
    cout << pGaln2 << endl;
                                
    //Exit stage right
    return 0;          
}


