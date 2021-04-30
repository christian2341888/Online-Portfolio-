//Student Name: CHRISTIAN PRICE
//Teacher: Dr. Tyson McMillan
//Date: 4/12/2021
//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

//Date Created: 4-12-2021
//Teacher and schoool: Dr. T- TCC
//Purpose of Assignment: create a program working with mutli-dimensional arrays to keep track of data
//Skills Learned/Gained from  Assignemnt: Arrays have the ability to have multiple dimensions

int main()
{
        const int CITY = 2;

    const int WEEK = 7;

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, 
          assume that value 0 represents day 1, 1 represents day 2....

        2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , 
        assume that value 0 represents day 1, 1 represents day 2....

        3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j],
        where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

*/

        int cityOne[7] = {23, 25, 21, 29, 27, 22, 20};
        int cityTwo[7] = {19, 21, 24, 18, 23, 22, 25};
        
        int k = 1;
        
        for(int i=0; i<WEEK; i++)
        {
                temperature[0][i] = cityOne[i];
        }
        
        for(int i=0; i<WEEK; i++)
        {
                temperature[1][i] = cityTwo[i];
        }
        
        cout<<"**************After upadation*****************\n";
        
        for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
        
    return 0;
}
