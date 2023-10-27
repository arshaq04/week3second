/* Write a program which calculates the tip in a restaurant, it should ask the user for
• the price
• the tip percentage
and should output the tip and the total amount to pay.
Use variables with appropriate names and data types to store the input and output values.
Example program run (user input is in blue):
$ ./tip
Enter the price (pounds): 50
Enter the tip percentage: 10
The tip is £5
The total amount to pay is £55 */
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the price(£) of your meal:  ";
    cin >> x;
    cout << "Enter the tip percentage: ";
    cin >> y;
    double tips = (x / 100.0) * y;
    double totalamount = (x + tips);
    cout << "The tip is £" << tips << endl;
    cout << "The total amount to pay is £" << totalamount << endl;
    return 0;
}