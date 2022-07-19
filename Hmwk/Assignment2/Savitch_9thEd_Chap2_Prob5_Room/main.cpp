/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 4:05 PM
 * Purpose: The room capacity and whether you have reached the limit 
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
    unsigned short roomCap,
    nPpl,
    redSize,
    incSize;
    
    //Initialize or input i.e. set variable values
    cin>>roomCap>>nPpl;
    
    //Map inputs -> outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    if (nPpl<=roomCap)
    {
        incSize=roomCap-nPpl;
    cout<<"Meeting can be held."<<endl;
cout<<"Increase number of people by "<<incSize<<" will be allowed without violation.";
    }
    else
    {
        redSize=nPpl-roomCap;
       cout<<"Meeting cannot be held."<<endl;
cout<<"Reduce number of people by "<<redSize<<" to avoid fire violation.";
    }
    //Display the outputs


    //Exit stage right or left!
    return 0;
}