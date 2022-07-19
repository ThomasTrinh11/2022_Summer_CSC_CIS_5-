/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 3:54 PM
 * Purpose: Convert Fahrenheit to Celsius
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
    float cel,iFahr,fahr;
    
    //Initialize or input i.e. set variable values
    cin>>iFahr;
    cout<<fixed<<setprecision(1)<<showpoint;
    //Map inputs -> outputs
    fahr=iFahr-32;
    cel=5*(iFahr-32)/9;

    
    
    //Display the outputs
cout<<"Temperature Converter"<<endl;
cout<<"Input Degrees Fahrenheit"<<endl;
cout<<iFahr<<" Degrees Fahrenheit = "<<cel<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}