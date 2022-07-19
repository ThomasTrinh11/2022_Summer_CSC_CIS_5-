/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 22, 2022, 3:00 PM
 * Purpose: Determine the distance of a falling object given a time in seconds and with a constant acceleration of 32 feet per second
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
    //Initialize the Random Number Seed
    
    //Declare Variables
    int time, dist;
    //Initialize Variables
    
    //Map inputs to outputs > The Process
    
    // Display Results
    cout << "Please return after entering a number. \n";
    cout << "Enter the time in seconds: \n";
    cin >> time;
    dist = 32 * time * time / 2;
    cout << "The object would drop ";
    cout << dist;
    cout << " feet in ";
    cout << time;
    cout << " seconds.";
    
    //Exit stage right
    return 0;          
}


