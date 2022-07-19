/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 10:50 PM
 * Purpose: Display the largest and smallest number entered
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
    sNum, 
    lNum, 
    nums;
    
    //Initialize or input i.e. set variable values
   lNum=0;
   sNum=100;
   
    //Map inputs -> outputs
    for (int i=0; i<=10; i++){
     
    cin >> nums;
      
     if (nums==-99){
          break;
     }
     if (nums>lNum){
          lNum=nums;
      }
      
     if (nums<sNum){
          sNum=nums;
      }
      
 }
      
    //Display the outputs
    cout << "Smallest number in the series is " << sNum << endl;
    cout << "Largest  number in the series is " << lNum;

    //Exit stage right or left!
    return 0;
}