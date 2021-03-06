/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes
void prblem1();
void prblem2();
void prblem3();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Repeat until user exits
    do{
        //Display Menu
        cout<<"Menu Example for Homework"<<endl;
        cout<<"Type 1 for Savitch Diet Coke Problem"<<endl;
        cout<<"Type 2 for Gaddis Trig Problem"<<endl;
        cout<<"Type 3 for Savitch Sums Problem"<<endl;
        cin>>choice;

        switch(choice){
            case '1':prblem1();break;
            case '2':prblem2();break;
            case '3':prblem3();break;
            default:
                cout<<"Not an Option"<<endl;
        }//End of Switch Case
    }while(choice>='1'&&choice<='3');
    //Clean Up
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 1
//Inputs:        
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs:    
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblem1(){
    //Declare Variable Data Types and Constants
    float wDsrd, //Desired Weight in lbs
          mMouse,//Mass of the mouse in grams
          mKmse, //Mass of chemicals that result in termination
          mSoda, //Mass of Liquid in Soda Can
          cnSint8;//Concentration of Chemical in Soda Can
    int nCans;//The limit of the number of cans of coke to drink

    //Initialize Variables
    wDsrd=200;//200 lbs
    mMouse=35;//35 grams
    mKmse=5;//5 grams
    mSoda=350;//350 grams
    cnSint8=1e-3f;//.001 Concentration

    //Process or map Inputs to Outputs
    nCans=wDsrd*CNVGRMS*mKmse/(mMouse*mSoda*cnSint8);

    //Display Outputs
    cout<<"The dieter's desired weight = "<<wDsrd
        <<" lbs."<<endl;
    cout<<"They must not consume more than "
        <<nCans<<" cans "<<endl;
    cout<<"of soda pop over their lifetime"<<endl;
    //Exit stage right!
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 2
//Inputs:        
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs:    
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
void prblem2(){
    //Declare Variable Data Types and Constants
    float angle;

    //Initialize Variables
    cout<<"Input an angle in degrees"<<endl;
    cin>>angle;

    //Process or map Inputs to Outputs
    angle*=CNVRAD;

    //Display Outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angle<<")="<<sin(angle)<<endl;
    cout<<"cos("<<angle<<")="<<cos(angle)<<endl;
    cout<<"tan("<<angle<<")="<<tan(angle)<<endl;
    cout<<"tan("<<angle<<")="<<sin(angle)/cos(angle)<<endl;
    //Exit stage right!
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 3
//Inputs:        
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs:    
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
void prblem3(){
    //Declare Variable Data Types and Constants
    float x;//Variable to input 10 times
    float sumTot,sumNeg,sumPos;//Sums

    //Initialize Variables
    sumTot=sumNeg=sumPos=0;

    //Process or map Inputs to Outputs
    cout<<"Sum 10 Numbers Positive or Negative"<<endl;
    cout<<"Zero is neither positive or Negative"<<endl;
    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    //Sum total simply sum of both positive and negative
    sumTot=sumPos+sumNeg;

    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The sum Total   = "<<sumTot<<endl;
    cout<<"The sum Positive= "<<sumPos<<endl;
    cout<<"The sum Negative= "<<sumNeg<<endl;
    //Exit stage right!    
}