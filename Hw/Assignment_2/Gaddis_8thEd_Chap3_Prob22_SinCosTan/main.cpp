/* 
   File:   main
   Author: Tyler Stevens
   Created on August 29, 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
#include <cmath>      //Sin Cos Tan
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=4*atan(1.0); //PI
const float CNVDEGR=PI/180; //conversion from degrees to radius 


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float deg, radians;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
  
    
    //Display Output
    cout<<"[Degrees,  Radians, Sin,     Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
     //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
      //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //display
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
   
     
     
            

    //Exit Program
    return 0;
}