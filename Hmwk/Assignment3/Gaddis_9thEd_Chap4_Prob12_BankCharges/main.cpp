/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:03 PM
 * Purpose: Find how much the bank charges you for their service
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
    bBal,
    chkFee,
    mnthFee,
    nBal,
    lBal;
    
    short
    nChks;
    
    //Initialize or input i.e. set variable values
    mnthFee=10;
    cin>>bBal>>nChks;
    
    //Map inputs -> outputs
    if (bBal<0) cout<<"The account is overdrawn!!";
    nChks>=60?chkFee=nChks*0.04:
    nChks>=40?chkFee=nChks*0.06:
    nChks>=20?chkFee=nChks*0.08:
    chkFee=nChks*.10;
    
    bBal<400?lBal=15:
    lBal=0;
    
    nBal=bBal-lBal-mnthFee-chkFee;
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cout<<"Balance     $"<<setw(9)<<bBal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<mnthFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lBal<<endl;
    cout<<"New Balance $"<<setw(9)<<nBal;

    //Exit stage right or left!
    return 0;
}