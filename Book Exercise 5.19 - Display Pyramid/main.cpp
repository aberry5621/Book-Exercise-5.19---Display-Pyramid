//
//  main.cpp
//  Book Exercise 5.19 - Display Pyramid
//
//  Created by ax on 9/24/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    
    int input_number = 0;
    
    cout << "input a number: ";
    cin >> input_number;
    
    cout << "input_number is: " << input_number << endl;
    
    for (int i = 1; i <= input_number; i++)
    {
        // sets each row number
        cout << setw(4) << "row: " << i;
        
        for (int j = input_number; j > 0; j--)
        {
            
            if (j <= i) {
                cout << setw(4) << j;
            } else {
                cout << setw(4) << " ";
            }
            
        }
        
        if (i > 1) {
            for (int j = 2; j <= input_number; j++)
            {
                if (j <= i) {
                    cout << setw(4) << j;
                }
                
            }
        }
        
        cout << endl;
    }
    
    return 0;
}