/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 4:03 PM
 * Purpose: How much soda can you drink before it is lethal 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
 float const PERCENT=0.001f;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   
    unsigned short artSwt,
    mMouse,
    
    numSoda,
    dSoda;
    
    float gSwt,
    weight,
    lDose,
    wDieter;
    
    //Initialize or input i.e. set variable values
    cin>>weight;
    artSwt=5;
    mMouse=35;
    wDieter= (float)45359.2*(weight/100);
    gSwt=PERCENT*350;
    lDose=artSwt*wDieter/mMouse;
    numSoda=lDose/gSwt;
    
    //Map inputs -> outputs
    
    //Display the outputs
cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
cout<<"Input the desired dieters weight in lbs."<<endl;
cout<<"The maximum number of soda pop cans"<<endl;
cout<<"which can be consumed is "<<numSoda<<" cans";

    //Exit stage right or left!
    return 0;
}