/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 3:52 PM
 * Purpose: How many calories were consumed
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
   float ckCons,srvng,cal;
    
    //Initialize or input i.e. set variable values
    srvng=300;
    cin>>ckCons;
    
    //Map inputs -> outputs
    cal=ckCons/4*srvng;
    
    //Display the outputs
cout<<"Calorie Counter"<<endl;
cout<<"How many cookies did you eat?"<<endl;
cout<<"You consumed "<<cal<<" calories.";

    //Exit stage right or left!
    return 0;
}