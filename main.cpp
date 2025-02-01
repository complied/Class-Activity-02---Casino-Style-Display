//
//  main.cpp
//  Casino Style Card display
//
//  Created by Subigya Parajuli on 1/30/25.
//

#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time
#include <iomanip>

using namespace std;

string randomcards();

int main(int argc, const char *argv[]) {
    
    cout << setfill('*') << setw(40) << "" << endl;
    cout << setfill('*') << setw (1) <<"" << setfill(' ') << setw (38) <<"" << setfill('*') << setw (1) <<"" << endl;
    srand(time(0)); // seed for random -
    cout << setfill ('*') << setw(1) << "" << setfill(' ') << setw (2) << "" << "Casino cards:" << setfill ('-') << setw (7) <<"" << randomcards() << setfill(' ') << setw (2) << "" << setfill('*') << setw (1) << "" << endl; // Call the function and print result
    cout << setfill('*') << setw (1) <<"" << setfill(' ') << setw (38) <<"" << setfill('*') << setw (1) <<"" << endl;
    cout << setfill('*') << setw(40) << "" << endl;// filling the bottom part
    return 0;
}

string randomcards() {
    int suits = rand() % 4;
    int ranks = rand() % 13;

    // Used array to make it easier, tried switch but the process was toooo long!
    string suits_select[] = {"Hearts", "Clubs", "Diamonds", "Spades"};
    string ranks_select[] = {"King", "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                             "Eight", "Nine", "Ten", "Jack", "Queen"};

    return ranks_select[ranks] + " of " + suits_select[suits];
}


    
/*
 
 ****************************************
 *                                      *
 *  Casino cards:-------Nine of Hearts  *
 *                                      *
 ****************************************
 Program ended with exit code: 0
 
 
 ****************************************
 *                                      *
 *  Casino cards:-------Four of Hearts  *
 *                                      *
 ****************************************
 
 */



    
    
   
