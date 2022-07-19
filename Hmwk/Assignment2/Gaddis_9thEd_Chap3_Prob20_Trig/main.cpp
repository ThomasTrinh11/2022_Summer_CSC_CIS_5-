/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 3:54 PM
 * Purpose: Display sin cos and tang
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variable
   float dAngle,
   rAngle,
   res1,
   res2,
   res3;
    
    //Initialize or input i.e. set variable values
    cin>>dAngle;
    rAngle=dAngle*M_PI/180;
    
    //Map inputs -> outputs
res1=sin(rAngle);
res2=cos(rAngle);
res3=tan(rAngle);

    //Display the outputs
cout<<"Calculate trig functions"<<endl;
cout<<"Input the angle in degrees."<<endl;
cout<<fixed<<setprecision(0)<<noshowpoint<<"sin("<<dAngle<<") = "<<fixed<<setprecision(4)<<showpoint<<res1<<endl;
cout<<fixed<<setprecision(0)<<noshowpoint<<"cos("<<dAngle<<") = "<<fixed<<setprecision(4)<<showpoint<<res2<<endl;
cout<<fixed<<setprecision(0)<<noshowpoint<<"tan("<<dAngle<<") = "<<fixed<<setprecision(4)<<showpoint<<res3;

    //Exit stage right or left!
    return 0;
}