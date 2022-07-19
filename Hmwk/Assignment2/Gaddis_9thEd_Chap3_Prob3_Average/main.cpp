/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 3:50 PM
 * Purpose: Calculate the average test score
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
    float a,b,c,d,e,avg;
    
    //Initialize or input i.e. set variable values
    cin>>a>>b>>c>>d>>e;
    //Map inputs -> outputs
    avg=(a+b+c+d+e)/5;
    
    //Display the outputs
cout<<fixed<<setprecision(1);
cout<<"Input 5 numbers to average."<<endl;
cout<< "The average = "<<avg;

    //Exit stage right or left!
    return 0;
}