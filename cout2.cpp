#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int x;
int y;
string digix;
string digiy;

/********************************************************************************
 *Function: fun1
 *Description: prints out numbers from 0 - y
 *Parameters: none
 *Pre-Conditions: Assumes that the user has entered an actual positive integer
 *Post-Conditions: Once printed the function ends leaving y to be the same value
 ********************************************************************************/
void fun1(){
  for( int i = 0; i <= y; i++ ){
    cout << i << ",";
    }//end of for loop
  cout << "" << endl;
}  //five lines

/******************************************************************************************
 *Function: fun2
 *Description: Prints numbers starting from y and goes down to 0
 *Parameters: none
 *Pre-Conditions: The user has entered a positive number for y
 *Post-Conditions: Once the numbers are printed the fucntion ends leaving y the same value
 ******************************************************************************************/
void fun2(){
  for ( int i = y; i>=0; i--){
    cout << i << ",";
  }//end of for loop
  cout << "" << endl;
}

/*****
 *Function:
 *Description: First checks what is greater x or y then either counts down from x to y 
 * or count up from y to x
 *Parameters: none
 *Pre-Conditions: fun1() and fun2() have already run and the numbers are all positive.
 *Post-Conditions: 
 *******/
void fun3(){
  if(x>y){
  while (x>=y){
  cout << x << " ";
  x--;
  }// end of while
  } else if (x<y){
  while(x<=y){
  cout << x << " ";
  x++;
  }// end of second while 
  }// end of else if
  else {cout << x;}
  cout << endl;
} //14 lines 10 not spaced out

/*****
 *Function:
 *Description:
 *Parameters: 
 *Pre-Conditions:
 *Post-Conditions:
 *******/
bool is_pos_int(string d){
 for(int i = 0; x < d.length(); i++){
  if(!((d.at(i) >= '0' ) && (d.at(i) <= '9')))
  {//is not a number
  cout << "please enter a number" << endl;
  return false;
  }else {
  y = atoi(d.c_str());
  return true;
  }
 } 
}

/*****
 *Function:
 *Description:
 *Parameters: 
 *Pre-Conditions:
 *Post-Conditions:
 *******/
bool is_pos_int2(string d){
 for(int i = 0; x < d.length(); i++){
  if(!((d.at(i) >= '0' ) && (d.at(i) <= '9')))
  {//is not a number
  cout << "please enter a number" << endl;
  return false;
  }else {
  x = atoi(d.c_str());
  return true;
  }
 } 
}

/***************************************************************************************************************
 *Function: input
 *Description: prompts user for two inputs that are positive integers
 * then runs them through error checking.
 *Parameters: none
 *Pre-Conditions: Funtion called from main
 *Post-Conditions: two inputs are taken from user and run through error checking to be converted into int type
 * variables.
 ***************************************************************************************************************/
void input(){
  int pos = false;
  do{
  cout << "Please enter a positive number:" << endl;
  cin >> digiy;
  pos = is_pos_int(digiy);
  }while(pos == false);
  pos = false;
  do{
  cout << "Please enter a second positive number: " << endl;
  cin >> digix;
  pos = is_pos_int2(digix);
  }while(pos == false);
}//five lines

  int main(){
   string answer;
   do {
   input();
   fun1();
   fun2();
   fun3();
   cout << "Do you want to run again yes or no: " << endl;
   cin >> answer;
   }while(answer == "yes" || answer == "Yes");
  return 0;}
