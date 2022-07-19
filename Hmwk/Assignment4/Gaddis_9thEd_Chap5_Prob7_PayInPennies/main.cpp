/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:48 PM
 * Purpose: Calculates how much a person would earn if their salary was a penny on the first day 
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
    unsigned int 
    days, 
    payDay, 
    paySum;
    
    //Initialize or input i.e. set variable values
    cin>>days;
    payDay=1;
    paySum=payDay;
    
    //Map inputs -> outputs
    
    for(int day=2;day<=days;day++){
        payDay*=2;
        paySum+=payDay;
    }
    //Display the outputs
    int dollars=paySum/100;
    int pennies=paySum%100;
    cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;

    //Exit stage right or left!
    return 0;
}
