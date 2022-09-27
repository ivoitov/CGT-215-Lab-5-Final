// CGT215_Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    //All variables I will need
    string inputString;
    char placeholder;
    string placeholder2;
    vector<string>  outputString;
    int num;
    //Initialization of our cypher bector
    vector<char>  cypherString({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    //getting the user input
    cout << "Input the text that you want ciphered: ";
    getline(cin, inputString);
    cout << inputString << endl;
    int temp;
    //transfering everything into cyphered version
    for (int i = 0; i < inputString.length(); i++) {
        temp = int(inputString[i]);
        if (temp >= 65 && temp <= 90) {
            temp = temp - 65;
            placeholder = cypherString[temp];
            placeholder2 = placeholder;
            outputString.push_back(placeholder2);
        }
        else if (temp >= 97 && temp <= 122) {
            temp = temp - 32;
            temp = temp - 65;
            placeholder = cypherString[temp];
            temp = int(placeholder);
            temp = temp + 32;
            placeholder2 = char(temp);
            outputString.push_back(placeholder2);
        }
        else {
            temp = temp;
            placeholder2 = inputString[i];
            outputString.push_back(placeholder2);
        }
    }
    //printing the final result
    for (int i = 0; i < inputString.length(); i++) {
        cout << outputString[i];
    }
}
