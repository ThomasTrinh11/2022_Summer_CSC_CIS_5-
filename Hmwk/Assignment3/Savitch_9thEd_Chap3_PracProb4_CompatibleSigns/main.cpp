/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:09 PM
 * Purpose: Finding which signs are compatible with each other
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string
    sign1,
    sign2,
    e1,
    e2;
    
    //Initialize or input i.e. set variable values
    cin >> sign1 >> sign2;
    
    //Map inputs -> outputs
   if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn")
   e1="Earth";
   else if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
   e1="Fire";
   else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces")
   e1="Water";
   else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")
   e1="Air";
   
   if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")
   e2="Earth";
   else if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")
   e2="Fire";
   else if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")
   e2="Water";
   else if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")
   e2="Air";
   
    //Display the outputs
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
        if (e1 == e2)
    cout << sign1 << " and " << sign2 << " are compatible " << e1 << " signs.";
    else cout<< sign1 << " and " << sign2 << " are not compatible signs.";
    
    //Exit stage right or left!
    return 0;
}
