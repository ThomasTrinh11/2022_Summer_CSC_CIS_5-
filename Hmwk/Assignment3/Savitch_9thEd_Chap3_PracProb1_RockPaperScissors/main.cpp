/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on July 10, 2022, 10:08 PM
 * Purpose: Classic Rock Paper Scissors
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
    char 
    p1,
    p2;
    
    //Initialize or input i.e. set variable values
    cin>>p1>>p2;
    
    if (p1=='r')
        p1='R';
    if(p1=='s')
        p1='S';
    if(p1=='p')
        p1='P';
        
    if (p2=='r')
        p2='R';
    if(p2=='s')
        p2='S';
    if(p2=='p')
        p2='P';

    //Map inputs -> outputs
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    if (p1==p2)cout<<"Nobody wins.";
    if (p1=='P' && p2=='R') cout<<"Paper covers rock.";
    if (p1=='R' && p2=='P') cout<<"Paper covers rock.";
    if (p1=='R' && p2=='S') cout<<"Rock breaks scissors.";
    if (p1=='S' && p2=='R') cout<<"Rock breaks scissors.";
    if (p1=='S' && p2=='P') cout<<"Scissors cuts paper.";
    if (p1=='P' && p2=='S') cout<<"Scissors cuts paper.";
     
    
    //Display the outputs


    //Exit stage right or left!
    return 0;
}