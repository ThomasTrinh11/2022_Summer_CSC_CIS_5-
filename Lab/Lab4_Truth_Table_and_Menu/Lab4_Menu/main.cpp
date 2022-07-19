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
#include <iostream>   //Input/Output Library
#include <iomanip>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<endl<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    
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
    if (ascii1<=ascii2 && ascii2<=ascii3){
    cout<<name1<<endl<<name2<<endl<<name3<<endl;
    }else if(ascii1<=ascii3 && ascii3<=ascii2){
       cout<<name1<<endl<<name3<<endl<<name2<<endl;
    }else if(ascii2<=ascii1 && ascii1<=ascii3){
        cout<<name2<<endl<<name1<<endl<<name3<<endl;
    }else if(ascii2<=ascii3 && ascii3<=ascii1){
        cout<<name2<<endl<<name3<<endl<<name1<<endl;
    }else if(ascii3<=ascii1 && ascii1<=ascii2){
        cout<<name3<<endl<<name1<<endl<<name2<<endl;
    }else{
        cout<<name3<<endl<<name2<<endl<<name1<<endl;
    }
    break;}
            case 1:{
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    
    unsigned short 
    bksPrch,
    ptsErnd;
    
    //Initialize or input i.e. set variable values
    cin>>bksPrch;
    bksPrch>=4?ptsErnd=60:
    bksPrch==3?ptsErnd=30:
    bksPrch==2?ptsErnd=15:
    bksPrch==1?ptsErnd=5:
    ptsErnd=0;
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Books purchased ="<<setw(3)<<bksPrch<<endl;
    cout<<"Points earned   ="<<setw(3)<<ptsErnd<<endl;
    break;}
            case 2:{
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    float 
    bBal,
    chkFee,
    mnthFee,
    nBal,
    lBal;
    
    short
    nChks;
    
    //Initialize or input i.e. set variable values
    mnthFee=10;
    cin>>bBal>>nChks;
    
    //Map inputs -> outputs
    if (bBal<0) cout<<"URGENT MESSAGE THE ACCOUNT IS OVERDRAWN!!"<<endl;
    nChks>=60?chkFee=nChks*0.04:
    nChks>=40?chkFee=nChks*0.06:
    nChks>=20?chkFee=nChks*0.08:
    chkFee=nChks*.10;
    
    bBal<400?lBal=15:
    lBal=0;
    
    nBal=bBal-lBal-mnthFee-chkFee;
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Balance     $"<<setw(9)<<bBal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<mnthFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lBal<<endl;
    cout<<"New Balance $"<<setw(9)<<nBal<<endl;break;}
            case 3:{
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
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
    if(time1<=time2 && time2<=time3){
        cout<<run1<<"\t"<<setw(3)<<time1<<endl<<run2<<"\t"<<setw(3)<<time2<<endl<<run3<<"\t"<<setw(3)<<time3<<endl;
    }else if(time1<=time3 && time3<=time2){
        cout<<run1<<"\t"<<setw(3)<<time1<<endl<<run3<<"\t"<<setw(3)<<time3<<endl<<run2<<"\t"<<setw(3)<<time2<<endl;
    }else if(time2<=time1 && time1<=time3){
        cout<<run2<<"\t"<<setw(3)<<time2<<endl<<run1<<"\t"<<setw(3)<<time1<<endl<<run3<<"\t"<<setw(3)<<time3<<endl;
    }else if(time1<=time3 && time3<=time1){
        cout<<run2<<"\t"<<setw(3)<<time2<<endl<<run3<<"\t"<<setw(3)<<time3<<endl<<run1<<"\t"<<setw(3)<<time1<<endl;
    }else if(time3<=time1 && time1<=time2){
        cout<<run3<<"\t"<<setw(3)<<time3<<endl<<run1<<"\t"<<setw(3)<<time1<<endl<<run2<<"\t"<<setw(3)<<time2<<endl;
    }else{
        cout<<run3<<"\t"<<setw(3)<<time3<<endl<<run2<<"\t"<<setw(3)<<time2<<endl<<run1<<"\t"<<setw(3)<<time1<<endl;
    }break;}
            case 4:{
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    char 
    pckge;
    
    int
    hrs;
    
    float 
    bill;
    
    //Initialize or input i.e. set variable values
    cin>>pckge>>hrs;
    
    //Map inputs -> outputs
     if (pckge=='A'){
        if(hrs>10) bill=9.95+(hrs-10)*2;
        else bill=9.95;
    }
     if (pckge=='B'){
        if(hrs>20) bill=14.95+(hrs-20);
        else bill=14.95;
    }
     if (pckge=='C'){
        bill=19.95;
    }
    
    //Display the outputs
    cout<<setprecision(2)<<fixed;
    
    cout<<"Bill = $"<<setw(6)<<bill<<endl;
    break;}
            case 5:{
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
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
    if (p1==p2)cout<<"Nobody wins."<<endl;;
    if (p1=='P' && p2=='R') cout<<"Paper covers rock."<<endl;;
    if (p1=='R' && p2=='P') cout<<"Paper covers rock."<<endl;;
    if (p1=='R' && p2=='S') cout<<"Rock breaks scissors."<<endl;;
    if (p1=='S' && p2=='R') cout<<"Rock breaks scissors."<<endl;;
    if (p1=='S' && p2=='P') cout<<"Scissors cuts paper."<<endl;;
    if (p1=='P' && p2=='S') cout<<"Scissors cuts paper."<<endl;;
     break;}
            case 6:{
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
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
    cout<<year<<" is Out of Range!"<<endl;
    }break;}
            case 7:{ 
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
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
    
        if (e1 == e2)
    cout << sign1 << " and " << sign2 << " are compatible " << e1 << " signs."<< endl;
        else cout<< sign1 << " and " << sign2 << " are not compatible signs."<< endl;
    break;}
            case 8:cout<<"Place Problem 8 here"<<endl;break;
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}