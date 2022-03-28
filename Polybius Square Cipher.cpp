// FCAI - Prohramming 1 - 2022 - Assugnment 2
//Progranm Name:    Polybius Square Cipher.cpp
//Program Description: This program converts letters into numbers that the user puts.
//Last Modification Date: 3/28/2022
// Author: Youssef Mahmoud Okasha

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //The array of the box
    char input;
    static char arr[6][6] = {{0}, {0,65,66,67,68,69}, {0,70,71,72,73,75}, {0,76,77,78,79,80}, {0,81,82,83,84,85}, {0,86,87,88,89,90}};
    int width = 6, height = 6;

    string str;
    cout << "This program converts letters into numbers that the user puts," << endl 
    <<"and you must know that the letter J is treated as the letter I also." << endl 
    <<"If you enter any other element outside the box, it will be ignored." << endl;
    cout << "Enter your string: ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    
    //The loob for print array.
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    //The loob for input the key.
    for (int i = 1; i < 6; i++)
    {
        cout << "Please enter one number of your key: ";
        cin >> input;
        arr[0][i] = {input};
        arr[i][0] = {input};
    }

    //The box with key.
    cout << "your box." << endl;
        for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

        //The loob to check the input and array.
        for (int q =0 ; q< str.length(); q++)
    {
        switch(str[q])
        {
            case 'A':
            cout << arr[1][0] << arr[0][1];
            break;
            case 'B':
            cout << arr[1][0] << arr[0][2];
            break;
            case 'C':
            cout << arr[1][0] << arr[0][3];
            break;
            case 'D':
            cout << arr[1][0] << arr[0][4];
            break;
            case 'E':
            cout << arr[1][0] << arr[0][5];
            break;
            case 'F':
            cout << arr[2][0] << arr[0][1];
            break;
            case 'G':
            cout << arr[2][0] << arr[0][2];
            break;
            case 'H':
            cout << arr[2][0] << arr[0][3];
            break;
            case 'I':
            cout << arr[2][0] << arr[0][4];
            break;
            case 'J':
            cout << arr[2][0] << arr[0][4];
            break;
            case 'K':
            cout << arr[2][0] << arr[0][5];
            break;
            case 'L':
            cout << arr[3][0] << arr[0][1];
            break;
            case 'M':
            cout << arr[3][0] << arr[0][2];
            break;
            case 'N':
            cout << arr[3][0] << arr[0][3];
            break;
            case 'O':
            cout << arr[3][0] << arr[0][4];
            break;
            case 'P':
            cout << arr[3][0] << arr[0][5];
            break;
            case 'Q':
            cout << arr[4][0] << arr[0][1];
            break;
            case 'R':
            cout << arr[4][0] << arr[0][2];
            break;
            case 'S':
            cout << arr[4][0] << arr[0][3];
            break;
            case 'T':
            cout << arr[4][0] << arr[0][4];
            break;
            case 'U':
            cout << arr[4][0] << arr[0][5];
            break;
            case 'V':
            cout << arr[5][0] << arr[0][1];
            break;
            case 'W':
            cout << arr[5][0] << arr[0][2];
            break;
            case 'X':
            cout << arr[5][0] << arr[0][3];
            break;
            case 'Y':
            cout << arr[5][0] << arr[0][4];
            break;
            case 'Z':
            cout << arr[5][0] << arr[0][5];
            break;
            case ' ':
            cout << ' ';
            break;
            default:
            continue;
        }
    }

}