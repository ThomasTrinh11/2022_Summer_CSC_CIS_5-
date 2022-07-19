/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Thomas Trinh
 * Created on June 21, 2022, 12:43 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float GALLONS = 0.264179;

//Function Prototypes
float parameter (float,float);
float parameter2 (float, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{ 
    int 
    nSum,
    num;
    
    //Initialize or input i.e. set variable values
    cin >> num;
    nSum = 0;
    
    //Map inputs -> outputs
    for (int i=0; i<=num; i++){
        nSum=nSum+i;
    }
    
    //Display the outputs
    cout << "Sum = " << nSum;
    break;}
            case 1:{
    unsigned int 
    days, 
    payDay, 
    paySum;
    
    //Initialize or input i.e. set variable values
    cin>>days;
    payDay=1;
    paySum=payDay;
    
    //Map inputs -> outputs
    
    for(int day=2;day<=days;day++){
        payDay*=2;
        paySum+=payDay;
    }
    //Display the outputs
    int dollars=paySum/100;
    int pennies=paySum%100;
    cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;
    break;}
            case 2:{
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
    break;}
            case 3:{
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
    break;}
            case 4:{ 
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
    break;}
            case 5:{
    float 
    liters, 
    mTrav,
    galns,
    mpGaln;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
    cin >> liters >> mTrav >> let;
    galns = liters * GALLONS;
    mpGaln = mTrav / galns;
         
    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter number of liters of gasoline:" << endl << endl;
    cout << "Enter number of miles traveled:" << endl <<endl;
    cout << "miles per gallon:" << endl << mpGaln << endl;
    cout << "Again:" << endl;
    if (let !='n') cout << endl;
    } while(let!='n');
    break;}
            case 6:{
    float 
    lit1,
    lit2,
    mTrav1,
    mTrav2,
    galns1,
    galns2,
    mpGaln1,
    mpGaln2;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    
     do {
    cin >> lit1 >> mTrav1 >> lit2 >> mTrav2 >> let;
    galns1 = lit1 * GALLONS;
    galns2 = lit2 * GALLONS;
    mpGaln1 = mTrav1 / galns1;
    mpGaln2 = mTrav2 / galns2;
         
    cout << setprecision(2) << fixed << showpoint;
    cout << "Car 1" << endl;
    cout << "Enter number of liters of gasoline:" << endl;
    cout << "Enter number of miles traveled:" <<endl;
    cout << "miles per gallon: " << mpGaln1 << endl << endl;
    
    cout << "Car 2" << endl;
    cout << "Enter number of liters of gasoline:" << endl;
    cout << "Enter number of miles traveled:" <<endl;
    cout << "miles per gallon: " << mpGaln2 << endl << endl;
    
    if (mpGaln1>mpGaln2) {
        cout << "Car 1 is more fuel efficient" << endl << endl;
    } else cout << "Car 2 is more fuel efficient" << endl << endl;
    
    
    cout << "Again:" << endl;
    
    
    if (let !='n') cout << endl;
    } while(let!='n');
    break;}
            case 7:{
    float 
    yPrice,
    cPrice,
    iRate;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
    cin >> cPrice >> yPrice >> let;
    iRate=(cPrice-yPrice)/yPrice;
    iRate=iRate*100; 
         
    cout << fixed << setprecision(2) << showpoint;
    cout << "Enter current price:" << endl;
    cout << "Enter year-ago price:" << endl;
    cout << "Inflation rate: " << setw(4) << iRate << "%" << endl << endl;
    cout << "Again:" << endl;
    if (let !='n') cout << endl;
    } while(let!='n');
    break;}
            case 8:{
    float 
    yPrice,
    cPrice,
    iRate,
    pYear1,
    pYear2;
    
    char let;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
    cin >> cPrice >> yPrice >> let;
    iRate = (cPrice - yPrice) / yPrice;
    pYear1 = iRate * cPrice + cPrice;
    pYear2 = pYear1  * iRate + pYear1;
    iRate = iRate * 100; 
           
    cout << fixed << setprecision(2) << showpoint;
    cout << "Enter current price:" << endl;
    cout << "Enter year-ago price:" << endl;
    cout << "Inflation rate: " << setw(4) << iRate << "%" << endl << endl;
    cout << "Price in one year: $" << pYear1 << endl;
    cout << "Price in two year: $" << pYear2 << endl << endl;
    
    cout << "Again:" << endl;
    
    if (let !='n') cout << endl;
    } while(let!='n');
    break;}
            case 9:{
    cout << "Enter first number:" << endl << endl;
    cout << "Enter Second number:" << endl << endl;
    cout << "Enter third number:" << endl << endl;
    float 
    nums,
    nums2,
    nums3,
    lNum;

    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> nums >> nums2 >> nums3;
        
    //Display the outputs
    cout << "Largest number from two parameter function:" << endl << parameter (nums,nums2) << endl << endl;
    cout << "Largest number from three parameter function:" << endl << parameter2(nums,nums2,nums3) << endl;
    break;}
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

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
   