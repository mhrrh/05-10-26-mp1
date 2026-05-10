// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

  string playerName;
  char userPlay;
  char computerPlay;
  int computerNumber;

  srand(time(0));

  cout << "Welcome to the Rock Paper Scissors game!" << endl;
  cout << "Enter player name: " << endl;
  getline(cin, playerName);

  cout << "What is your play " << playerName << endl;
  cout << "Enter r, p, or s: " << endl;
  cin >> userPlay;

  if (userPlay == 'r'){
    userPlay = 'R';
  }
  else if (userPlay == 'p'){
    userPlay = 'P';
  }
  else if (userPlay == 's'){
    userPlay = 'S';
  }
  if (userPlay != 'R' && userPlay != 'P' && userPlay != 'S'){
    cout << "Invalid play, run the program again!" << endl;
  }
  else {
    computerNumber = rand() % 3;

    if (computerNumber == 0){
      computerPlay = 'R';
    }
    else if (computerNumber == 1){
      computerPlay = 'P';
    }
    else {
      computerPlay = 'S';
    }
    cout << "Computer plays " << computerPlay << endl;

    if (userPlay == computerPlay){
      cout << "It's a tie!" << endl;
    }
    else if ((userPlay == 'R' && computerPlay == 'S') || (userPlay == 'P' && computerPlay == 'R') || (userPlay == 'S' && computerPlay == 'P')){
      cout << playerName << " wins!" << endl;
    }
    else {
      cout << "Computer wins!" << endl;
    }
    cout << "Thank you for playing!" << endl;
    
  }
  

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
