/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 5, 2022, 4:06 PM
 * Purpose: Calculate the sum of 10 integers  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nums,
    nSum,
    pSum,
    tSum;
    
    //Initialize or input i.e. set variable values
    pSum=0;
    nSum=0;
    
    for (int i=0; i<10; i++)
    {
        cin>>nums;
        
        if (nums>0) {
            pSum=pSum+nums;
        }
        else {
            nSum=nSum+nums;
        }
    }
    tSum=pSum+nSum;
    //Map inputs -> outputs
   
    int l1=to_string(nSum).length();
    int l2=to_string(pSum).length();
    int l3=to_string(tSum).length();
   
    int max=5;
    if(max<l1)
        max=l1;
    if (max<l2)
        max=l2;
    if(max<l3)
        max=l3;
    max-=1;
   
    //Display the outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cout<<"Negative sum ="<<setw(max)<<nSum<<endl;
    cout<<"Positive sum ="<<setw(max)<<pSum<<endl;
    cout<<"Total sum    ="<<setw(max)<<tSum;

    //Exit stage right or left!
    return 0;
}