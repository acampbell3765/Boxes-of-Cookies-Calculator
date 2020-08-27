/*
Author: Angelina Campbell
Description: This program prompts the user to enter the total number of cookies. It then outputs the number of boxes and containers to ship the cookies.
If the last box contains an overflow or not enough, that will also be presented in the output. 
It then calculates and displays the number of boxes needed, number of containers needed, number of leftover boxes needed, and the number of leftover cookies needed.  

*/
#include <iostream>

using namespace std;

int main()
{
    //   This declares that there are constants for the max amount of cookies and containers.
    const int MAX_COOKIES = 24;
    const int MAX_CONTAINERS = 75;

    //  This declares the variables that will be used in the code. 
    int totalCookies, boxCookies, containerBoxes;
    int totalBoxes = 0, totalContainers = 0;
    int extraBoxes = 0, extraCookies = 0;

    //   This prompts the user to enter the total number of cookies, which by the example says to enter "12345".
    cout << "Enter the total number of cookies: ";
    cin >> totalCookies;

    //   This prompts the user to enter the total number of cookies in a box, which is 24. 
    cout << "Enter the number of cookies in a box: ";
    cin >> boxCookies;
    //Validate the input
    if (boxCookies<1 || boxCookies> MAX_COOKIES)
    {
        boxCookies = MAX_COOKIES;
    }
    //   This prompts the user to enter the total amount of boxes that can fit into a container, which is 75.
    cout << "Enter the number of boxes in the container: ";
    cin >> containerBoxes;
    //   This scenario validates the input by checking that the boxes do not exceed the amount of containers. 
    if (containerBoxes<1 || containerBoxes> MAX_CONTAINERS)
    {
        containerBoxes = MAX_CONTAINERS;
    }

    cout << endl;

    //   This formula is to calculate totalBoxes by dividing totalCookies by boxCookies

    totalBoxes = totalCookies / boxCookies;
    //   This formula is to calculate totalBoxes by dividing the totalCookies and boxCookies

    extraCookies = totalCookies % boxCookies;
    //   This formula is to calculate extraCookies by returning the remainder of division between totalCookies and boxCookies

    totalContainers = totalBoxes / containerBoxes;
    //   This formula calculates the totalContainers by dividing totalBoxes by containerBoxes
    
    extraBoxes = totalBoxes % containerBoxes;
    //   This displays the desired output.


    cout << "Number of boxes needed: "
        << totalBoxes << endl;
    cout << "Number of containers needed: "
        << totalContainers << endl;
    cout << "Number of leftover boxes needed: "
        << extraBoxes << endl;
    cout << "Number of leftover cookies needed: "
        << extraCookies << endl;

    
    return 0;

}