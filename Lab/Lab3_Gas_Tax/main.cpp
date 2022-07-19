/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 21, 2022, 12:07 PM
 * Purpose: C++ Calculate the percentage Gas Tax on a gallon of gas, and the profit made from a gallon of gas given
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float  
    prvCost,//previous cost per gallon
    eTax,   //excise tax/gallon
    sTax,   //sales tax
    cTrade, //tax on a tax/gallon
    fedEx,  //federal excise tax/gallon
    oProfit,//oil company profit
    gProfit,//gas company profit
    pTax,   //percent tax
    gTax,   //total taxes to the government 
    pProfit;//percent profit
    
    //Initialize Variables
    eTax=0.39;
    sTax=0.08;
    cTrade=0.1;
    fedEx=0.184;
    oProfit=0.065;
    
    //Map inputs to outputs > The Process
    cout<<"Enter the amount it cost you per gallon the last time you put gas in your car."<<endl;
    cout<<"$";
    cin>>prvCost;
    gTax=eTax+cTrade+fedEx+sTax*prvCost;
    gProfit=(prvCost-gTax)*oProfit;
    pProfit=gProfit/prvCost*100;
    pTax=gTax/prvCost*100;
    
    
    
    
    // Display Results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Gas companies make a profit of $"<<gProfit<<" or a %"<<pProfit<<" profit."<<endl;
    cout<<"The government makes $"<<gTax<<" or %"<<pTax<<" in taxes.";
    
    //Exit stage right
    return 0;          
}


