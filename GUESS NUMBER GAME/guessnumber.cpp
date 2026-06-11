 // Task 1 : Make a Guess a Number Game With the help of C++

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand((unsigned int) time(NULL));
  
  int number = (rand() % 100) + 1; 
  
  int guess ;

  int attempt = 0;

 cout << "=== Guess the Number ===" << endl;
 cout << "I have select a number between 1 and 100." << endl;
  
  do
  {
    cout << "Enter Guess (1-100): ";
    cin >> guess;
    attempt++;
    
    if (guess > number)
      cout << "Guess lower ! and try again" << endl;

    else if (guess < number)
      cout << "Guess higher ! and try again" << endl;

    else
      cout << "congratualtion You won!"<<endl;
      cout<< attempt <<" attempts" << endl;
 
  } 
  
  while (guess != number);
   
  return 0;
}