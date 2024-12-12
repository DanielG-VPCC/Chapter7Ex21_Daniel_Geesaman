/*
Title:Chapter 7 Exercise 21 - 2D Operations
File name:Chapter7Ex21_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:12/12/2024
Requirements:

2D Array Operations
Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:

• getTotal—This  function  should  accept  a  two-dimensional  array  as  its  argument  and return the total of all the values in the array.

• getAverage—This function should accept a two-dimensional array as its argument and return the average of all the values in the array.

• getRowTotal—This  function  should  accept  a  two-dimensional  array  as  its  first  argument  and  an  integer  as  its  second  argument.  
The  second  argument  should  be  the subscript of a row in the array. The function should return the total of the values in the specified row.

• getColumnTotal—This function should accept a two-dimensional array as its first argument and an integer as its second argument. 
The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified column.

• getHighestInRow—This function should accept a two-dimensional array as its first argument and an integer as its second argument. 
The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of the array.

• getLowestInRow—This function should accept a two-dimensional array as its first argument  and  an  integer  as  its  second  argument.  
The  second  argument  should  be  the subscript of a row in the array. The function should return the lowest value in the

Display the options in a menu to call the various functions.
*/

#include <iostream>
using namespace std;

const int rows = 3, columns = 3;

void getTotal(double arr[][columns]);
void getAverage(double arr[][columns]);
void getRowTotal(double arr[][columns]);
void getColumnTotal(double arr[][columns]);
void getHighestInRow(double arr[][columns]);
void getLowestInRow(double arr[][columns]);

int main()
{
    double arr[rows][columns] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    
    int menuSelect;
    cout << "which function would you like to see performed? (enter a number)" << endl << endl;
    cout << "1. Total Values" << endl << "2. Average of Values" << endl << "3. Total Values of a specific row" << endl <<
        "4. Total Values of a specific column" << endl << "5. Find highest Value in a row" << endl << "6. Find lowest Value in a row" << endl;
    cin >> menuSelect;

    switch (menuSelect)
    {
    case 1:
        getTotal(arr);
        break;
    case 2:
        getAverage(arr);
        break;
    case 3:
        getRowTotal(arr);
        break;
    case 4:
        getColumnTotal(arr);
        break;
    case 5:
        getHighestInRow(arr);
        break;
    case 6:
        getLowestInRow(arr);
        break;
    default:
        cout << "Please make a valid selection";
    }
}

void getTotal(double arr[][columns])
{
    int total = 0;
    for (int index = 0; index<rows; index++)
    {
        for (int index2 = 0; index2 < columns; index2++)
        {
            total += arr[index][index2];
        }
    }
    cout << "The total of all numbers in this 3x3 array is: " << total;
}

void getAverage(double arr[][columns])
{
    double total = 0;
    double countSpaces = 0;
    for (int index = 0; index < rows; index++)
    {
        for (int index2 = 0; index2 < columns; index2++)
        {
            countSpaces++;
            total += arr[index][index2];
        }
    }
    cout << "The total of all numbers in this 3x3 array is: " << total/countSpaces;
}

void getRowTotal(double arr[][columns])
{
    int userRow;

    cout << "which row would you like to total? (1-3)" << endl;
    cin >> userRow;
    while (userRow < 1 || userRow > 3)
    {
        cout << "Please make a valid selection" << endl;
        cin >> userRow;
    }
    
    int total = 0;
    for (int index = 0; index < columns; index++)
    {
        total += arr[userRow-1][index];
    }
    cout << "The total of the numbers in row " << userRow << " is: " << total;
}

void getColumnTotal(double arr[][columns])
{
    int userColumn;

    cout << "which column would you like to total? (1-3)" << endl;
    cin >> userColumn;
    while (userColumn < 1 || userColumn > 3)
    {
        cout << "Please make a valid selection" << endl;
        cin >> userColumn;
    }

    int total = 0;
    for (int index = 0; index < rows; index++)
    {
        total += arr[index][userColumn-1];
    }
    cout << "The total of the numbers in column " << userColumn << " is: " << total;
}

void getHighestInRow(double arr[][columns])
{
    int userRow;

    cout << "which row would you like to find the highest number from? (1-3)" << endl;
    cin >> userRow;
    while (userRow < 1 || userRow > 3)
    {
        cout << "Please make a valid selection" << endl;
        cin >> userRow;
    }

    int highest = 0;
    for (int index = 0; index < columns; index++)
    {
        if (arr[userRow - 1][index] >= highest)
        {
            highest = arr[userRow - 1][index];
        }
    }
    cout << "The highest number in row " << userRow << " is: " << highest;
}

void getLowestInRow(double arr[][columns])
{
    int userRow;

    cout << "which row would you like to find the lowest number from? (1-3)" << endl;
    cin >> userRow;
    while (userRow < 1 || userRow > 3)
    {
        cout << "Please make a valid selection" << endl;
        cin >> userRow;
    }

    int highest = 100;
    for (int index = 0; index < columns; index++)
    {
        if (arr[userRow - 1][index] <= highest)
        {
            highest = arr[userRow - 1][index];
        }
    }
    cout << "The lowest number in row " << userRow << " is: " << highest;
}