// Algorithm Challenge
// 29 - Sum Even Numbers From 1 to N

#include <iostream>
using namespace std;

int main()
{
    int nums, sum = 0;

    // Ask the user to enter a positive number
    cout << "Enter a positive number: ";
    cin >> nums;

    // Validate input
    if (nums < 1)
    {
        cout << "Please enter a number greater than 0." << endl;
        return 0;
    }

    // Loop through even numbers from 0 to N and calculate the sum
    for (int i = 0; i <= nums; i += 2)
    {
        sum += i; // Add the current even number to the total sum
    }

    // Print the total sum of even numbers
    cout << "The sum of all even numbers from 1 to " << nums << " is: " << sum << endl;

    return 0;
}
