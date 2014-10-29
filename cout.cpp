#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int x;
int y;
/*****
 *Function: input
 *Description: accpets input an gives them to ints
 *Parameters: none
 *Pre-Conditions:
 *Post-Conditions:
 *******/
void input(){
  cout << "Please enter a positive number:" << endl;
  cin >> y;
  cout << "Please enter a second positive number: " << endl;
  cin >> x;}//five lines


/*****
 *Function: fun1
 *Description: accpets input an gives them to ints
 *Parameters: none
 *Pre-Conditions:
 *Post-Conditions:
 *******/
void fun1(){
  for( int i = 0; i <= y; i++ ){
    cout << i << ",";
    }//end of for loop
  cout << "" << endl;
}  //five lines


/*****
 *Function: fun2
 *Description: accpets input an gives them to ints
 *Parameters: none
 *Pre-Conditions:
 *Post-Conditions:
 *******/
void fun2(){
  for ( int i = y; i>=0; i--){
    cout << i << ",";
  }//end of for loop
  cout << "" << endl;
}

/*****
 *Function: fun3
 *Description: accpets input an gives them to ints
 *Parameters: none
 *Pre-Conditions:
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
