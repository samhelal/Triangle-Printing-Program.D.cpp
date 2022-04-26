/*(Triangle-Printing Program) Write an application that displays the following patterns 
separately, one below the other. Use for loops to generate the patterns. All asterisks
( * ) should be printed by a single statement of the form cout << '*'; which causes the 
asterisks to print side by side. A statement of the form cout << '\n'; can be used to move
to the next line. A statement of the form cout << ' '; can be used to display a space for 
the last two patterns. There should be no other output statements in the program
(c++ How to program)*/

#include<iostream>
using namespace std ;

int main(){

    for( int x(1) ; x<=10 ; x++ ){
        cout <<  '\n';

        for( int y(10) ; y>=x ; y-- ){
            cout <<  ' '; 
         }

         for( int z(1) ; z<=x ; z++ ){
            cout <<  '*'; 
         }
         
         
    }
    cout <<  '\n';
}