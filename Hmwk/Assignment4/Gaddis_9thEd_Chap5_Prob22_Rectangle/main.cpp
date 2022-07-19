/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:53 PM
 * Purpose: Display a rectangle on the screen with length and letter
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
    int num;
    
    char let;
    
    //Initialize or input i.e. set variable values
    cin >> num >> let;
    
    //Map inputs -> outputs
    for (int length=0; length < num; length++){
    for (int length=0; length < num; length++){
        cout << let;  
    }
    if (length!=num-1)
    cout <<endl;
    
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}