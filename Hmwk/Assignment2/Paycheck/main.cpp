/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 4:08 PM
 * Purpose: Calculate the gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float payRate,//Payrate in $'s/hour
    hrsWrkd,//Hours worked
    payChck;//Paycheck in $'s
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map inputs -> outputs
    payChck=payRate*hrsWrkd;
    payChck+=hrsWrkd>40?payRate*(hrsWrkd-40):0;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
cout<<"Paycheck = $"<<setw(7)<<payChck;

    //Exit stage right or left!
    return 0;
}