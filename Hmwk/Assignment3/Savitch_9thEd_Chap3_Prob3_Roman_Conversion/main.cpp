/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:09 PM
 * Purpose: Roman Numeral Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int
    year,
    n1,
    n10,
    n100,
    n1000,
    arabic;
    
    //Initialize or input i.e. set variable values
    cin>>arabic;
    
    //Map inputs -> outputs
    
    year=arabic;
    n1000=arabic/1000;
    arabic-=n1000*1000;
    n100=arabic/100;
    arabic-=n100*100;
    n10=arabic/10;
    arabic-=n10*10;
    n1=arabic;
    
    //Display the outputs
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    if(year>3000){
    cout<<year<<" is Out of Range!";    
    }
    else if (year>1000){
        cout<<year<<" is equal to ";
        switch(n1000){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    switch(n100){
        case 9:cout<<"CM"; 
        break;
        case 8:cout<<"DCCC"; 
        break;
        case 7:cout<<"DCC";
        break;
        case 6:cout<<"DC";
        break;
        case 5:cout<<"D";
        break;
        case 4:cout<<"CD";
        break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    switch(n10){
        case 9:cout<<"XC"; 
        break;
        case 8:cout<<"LXXX"; 
        break;
        case 7:cout<<"LXX";
        break;
        case 6:cout<<"LX";
        break;
        case 5:cout<<"L";
        break;
        case 4:cout<<"XL";
        break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
     switch(n1){
        case 9:cout<<"IX"; 
        break;
        case 8:cout<<"VIII"; 
        break;
        case 7:cout<<"VII";
        break;
        case 6:cout<<"VI";
        break;
        case 5:cout<<"V";
        break;
        case 4:cout<<"IV";
        break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    }
    else{
    cout<<year<<" is Out of Range!";
    }

    //Exit stage right or left!
    return 0;
}