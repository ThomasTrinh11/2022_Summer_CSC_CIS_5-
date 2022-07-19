/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 13, 2022, 11:07 PM
 * Purpose: Find the maximum of first two parameters, then the maximum of three parameters
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes
float parameter (float,float);
float parameter2 (float, float, float);
    
//Execution Begins Here
int main(int argc, char** argv) {
        
    //Set the random number seed
    
    //Declare Variables
    float 
    nums,
    nums2,
    nums3,
    lNum;

    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    cin >> nums >> nums2 >> nums3;
        
    //Display the outputs
  
    cout << "Enter first number:" << endl << endl;
    cout << "Enter Second number:" << endl << endl;
    cout << "Enter third number:" << endl << endl;
    cout << "Largest number from two parameter function:" << endl << parameter (nums,nums2) << endl << endl;
    cout << "Largest number from three parameter function:" << endl << parameter2(nums,nums2,nums3) << endl;
    
    //Exit stage right or left!
    return 0;
    }
  
    float parameter (float nums, float nums2) {
       if (nums>nums2) {
       return nums;
        } else return nums2;
    }
    
    float parameter2 (float nums, float nums2, float nums3){
       if (nums>nums2 && nums>nums3) {
        return nums;
        } else if (nums2>nums && nums2>nums3){
        return nums2;
        } else { return nums3;
        } 
    }
   