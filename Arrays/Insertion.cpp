// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int insertionFcn()
{
    int array[] = { 1,2,3,4,5,6 };
        int position = 4; 
        int n = sizeof(array) / sizeof(int); 
        int value = 0;
        int j = n;
    
    while(j>=position)
    {
        //array[j + 1] = array[j];
        j--;
    }
    array[position ] = value;
    n = n + 1;
    cout << "Resultant array is\n" << endl;
    
    for (int i = 0; i< n; i++)
    {
        cout << array[i] << endl;
    }
    
	return 0;
	
  }
