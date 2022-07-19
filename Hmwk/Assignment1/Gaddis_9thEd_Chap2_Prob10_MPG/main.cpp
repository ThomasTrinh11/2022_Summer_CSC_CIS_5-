/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 23, 2022, 12:46 PM
 * Purpose: Miles Per Gallon Problem
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
    unsigned short mlsDrvn;//Miles Driving
    unsigned char mpg,//Miles Per Gallon
            nGalns;//Number of Gallons to fill tank
    
    
    //Initialize Variables
    mlsDrvn=375;//
    nGalns=15;//
    
    
    //Map inputs to outputs > The Process
    mpg=mlsDrvn/nGalns;
    
    
    // Display Results
    cout<<static_cast<int>(mpg)<<" miles per gallon = "
            <<mlsDrvn<<" miles driving / " 
            <<static_cast<int>(nGalns)<<" gallons used"<<endl;
    
    //Exit stage right
    return 0;          
}


