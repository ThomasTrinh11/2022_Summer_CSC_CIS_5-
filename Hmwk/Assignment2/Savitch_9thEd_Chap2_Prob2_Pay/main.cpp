/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 3:49 PM
 * Purpose: Calculate Retroactive Pay 
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
   
    float 
    paSal,  // Previous Annual Salary
    naSal,  // New Annual Salary
    retPay, // Retroactive Pay
    mnSal;  // New Monthly Salary
    
    //Initialize or input i.e. set variable values

    cin>>paSal;
    
    float payInc=0.076; // Pay Increase
    int tmInYr=12;      // Total Months In A Year
    int hlfYr=2;        // Half A Year
    
    
    //Map inputs -> output
    naSal=paSal+(paSal*payInc);
    mnSal=naSal/tmInYr;
    retPay=(naSal-paSal)/hlfYr;
   
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Input previous annual salary."<<endl;
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<naSal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<mnSal;
   
    //Exit stage right or left!
    return 0;
}

