/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:46 PM
 * Purpose: Calculates the sum of all the integers from 1 up to the number entered
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int 
    nSum,
    num;
    
    //Initialize or input i.e. set variable values
    cin >> num;
    nSum = 0;
    
    //Map inputs -> outputs
    for (int i=0; i<=num; i++){
        nSum=nSum+i;
    }
    
    //Display the outputs
    cout << "Sum = " << nSum;
    
    //Exit stage right or left!
    return 0;
}