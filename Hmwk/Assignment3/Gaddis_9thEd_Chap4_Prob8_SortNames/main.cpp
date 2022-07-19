/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:02 PM
 * Purpose: Sort three names in alphabetical order
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    string
    name1,
    name2,
    name3;
    
    int 
    ascii1,
    ascii2,
    ascii3;
    
    //Initialize or input i.e. set variable values
    cin>>name1>>name2>>name3;
    ascii1=name1[0];
    ascii2=name2[0];
    ascii3=name3[0];
    
    //Map inputs -> outputs
   cout<<"Sorting Names"<<endl;
   cout<<"Input 3 names"<<endl;
   if (ascii1<=ascii2 && ascii2<=ascii3){
   cout<<name1<<endl<<name2<<endl<<name3;
   }else if(ascii1<=ascii3 && ascii3<=ascii2){
       cout<<name1<<endl<<name3<<endl<<name2;
   }else if(ascii2<=ascii1 && ascii1<=ascii3){
        cout<<name2<<endl<<name1<<endl<<name3;
    }else if(ascii2<=ascii3 && ascii3<=ascii1){
        cout<<name2<<endl<<name3<<endl<<name1;
    }else if(ascii3<=ascii1 && ascii1<=ascii2){
        cout<<name3<<endl<<name1<<endl<<name2;
    }else{
        cout<<name3<<endl<<name2<<endl<<name1;
    }
   
    


    //Display the outputs

    //Exit stage right or left!
    return 0;
}