/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:00 PM
 * Purpose: Awarding customers points based on number of books bought
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
    unsigned short 
    bksPrch,
    ptsErnd;
    
    //Initialize or input i.e. set variable values
    cin>>bksPrch;
    bksPrch>=4?ptsErnd=60:
    bksPrch==3?ptsErnd=30:
    bksPrch==2?ptsErnd=15:
    bksPrch==1?ptsErnd=5:
    ptsErnd=0;
    //Map inputs -> outputs
    
    //Display the outputs
cout<<"Book Worm Points"<<endl;
cout<<"Input the number of books purchased this month."<<endl;
cout<<"Books purchased ="<<setw(3)<<bksPrch<<endl;
cout<<"Points earned   ="<<setw(3)<<ptsErnd;

    //Exit stage right or left!
    return 0;
}
