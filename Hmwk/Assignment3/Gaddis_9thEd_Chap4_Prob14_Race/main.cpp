/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 10, 2022, 10:04 PM
 * Purpose: Organize the runners depending on who had the fastest time
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
    string 
    run1,
    run2,
    run3;
    
    short 
    time1,
    time2,
    time3;
    
    //Initialize or input i.e. set variable values
    cin>>run1>>time1>>run2>>time2>>run3>>time3;
    
    
    //Map inputs -> outputs
    
    //Display the outputs
cout<<"Race Ranking Program"<<endl;
cout<<"Input 3 Runners"<<endl;
cout<<"Their names, then their times"<<endl;

if(time1<=time2 && time2<=time3){
        cout<<run1<<"\t"<<setw(3)<<time1<<endl<<run2<<"\t"<<setw(3)<<time2<<endl<<run3<<"\t"<<setw(3)<<time3;
    }else if(time1<=time3 && time3<=time2){
        cout<<run1<<"\t"<<setw(3)<<time1<<endl<<run3<<"\t"<<setw(3)<<time3<<endl<<run2<<"\t"<<setw(3)<<time2;
    }else if(time2<=time1 && time1<=time3){
        cout<<run2<<"\t"<<setw(3)<<time2<<endl<<run1<<"\t"<<setw(3)<<time1<<endl<<run3<<"\t"<<setw(3)<<time3;
    }else if(time1<=time3 && time3<=time1){
        cout<<run2<<"\t"<<setw(3)<<time2<<endl<<run3<<"\t"<<setw(3)<<time3<<endl<<run1<<"\t"<<setw(3)<<time1;
    }else if(time3<=time1 && time1<=time2){
        cout<<run3<<"\t"<<setw(3)<<time3<<endl<<run1<<"\t"<<setw(3)<<time1<<endl<<run2<<"\t"<<setw(3)<<time2;
    }else{
        cout<<run3<<"\t"<<setw(3)<<time3<<endl<<run2<<"\t"<<setw(3)<<time2<<endl<<run1<<"\t"<<setw(3)<<time1;
    }
    //Exit stage right or left!
    return 0;
}
