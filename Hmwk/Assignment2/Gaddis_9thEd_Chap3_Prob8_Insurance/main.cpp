/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 3:53 PM
 * Purpose: How much insurance one should buy
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int rCost, 
    minIns;
    
    //Initialize or input i.e. set variable values
    cin>>rCost;
    
    //Map inputs -> outputs
    minIns=rCost*0.8;
    
    //Display the outputs
cout<<"Insurance Calculator"<<endl;
cout<<"How much is your house worth?"<<endl;
cout<<"You need $"<<minIns<<" of insurance.";

    //Exit stage right or left!
    return 0;
}