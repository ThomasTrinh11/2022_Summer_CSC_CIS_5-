/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:06 PM
 * Purpose: Calculate a customers monthly bill
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
    char 
    pckge;
    
    int
    hrs;
    
    float 
    bill;
    
    //Initialize or input i.e. set variable values
    cin>>pckge>>hrs;
    
    //Map inputs -> outputs
     if (pckge=='A'){
        if(hrs>10) bill=9.95+(hrs-10)*2;
        else bill=9.95;
    }
     if (pckge=='B'){
        if(hrs>20) bill=14.95+(hrs-20);
        else bill=14.95;
    }
     if (pckge=='C'){
        bill=19.95;
    }
    
    //Display the outputs
    cout<<setprecision(2)<<fixed;
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cout<<"Bill = $"<<setw(6)<<bill;
    
    //Exit stage right or left!
    return 0;
}

