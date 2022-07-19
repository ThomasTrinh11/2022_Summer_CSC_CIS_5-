/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 22, 2022, 1:00 PM
 * Purpose: Inputs two integers and outputs both their sum and product
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
    
    int Fnum, 
        Snum, 
        Sum, 
        Product; 
    
    //Initialize Variables
   
    //Map inputs to outputs > The Process
    cout << "Please return after entering a number. \n";
    cout << "Enter the first integer. \n";
    cin >> Fnum;
    cout << "Enter the second integer. \n";
    cin >> Snum;
    Sum = Fnum + Snum;
    Product = Fnum * Snum;
    
    // Display Results
    cout << "The sum of the two integers is ";
    cout << Sum;
    cout << " and the product of the two integers is ";
    cout << Product;
    
    //Exit stage right
    return 0;          
}


