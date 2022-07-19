/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:54 PM
 * Purpose: Display a pattern given an input of 10
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
    int size;
    
    //Initialize or input i.e. set variable values
    cin >> size;
    
    //Map inputs -> outputs
    for (int rows=1;rows<=size;rows++){
        for (int cols=1;cols<=rows;cols++){
            cout<<'+';
        }
    cout<<endl<<endl;
    }
    
    for (int rows=1;rows<=size;rows++){
        for (int cols=1;cols<=size+1-rows;cols++){
            cout<<'+';
        }
    if (rows<size)cout<<endl<<endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}