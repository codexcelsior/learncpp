#include <iostream>

int main() {
    // solo variable (a is an identifier that points to the address 
    //and is assigned a value to make the address store that value)
    int a; //This statement calls an address a
    int b;

    //Multiple variables
    int a,b;

    //**VARIABLE ASSIGNMENT AND INITIALIZATION 

    //VARIABLE ASSIGNMENT

    int width; //define an integer variable named with 
    width = 5; //copy assignment of value 5 into into variable width 
    // now variable width contains 5
    width = 7; //update the value of width from 5 to 7


    //INITIALIZATION

    //WTF is this??? -> Assignment requires 2 statements so this initialization (or init) just skips and merges 2 things together at once

    int a; //no initialization(default init)
    int b = 5; //initialization after assignment / equal sign
    int c( 6 ); //direct initialization

    int d { 7 }; //direct list init
    int e = { 8 }; //copy list init
    int f {}; //value init



    return 0;


}

