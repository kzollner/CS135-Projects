/*
Name: Kyle_Zollner, 200237247, CS135_1003, ASSIGNMENT_2
Description: Menu for pilots to pick and choose the data they want
Input: 2 (x,y) variables
Output: Multiple results from different equations
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

// Initializing Variables
// For slope
double sx1 = 0;
double sy1 = 0;
double sx2 = 0;
double sy2 = 0;
// For x distance
double xx1 = 0;
double xy1 = 0;
double xx2 = 0;
double xy2 = 0;
// For y distance
double yx1 = 0;
double yy1 = 0;
double yx2 = 0;
double yy2 = 0;
// For manhattan distance
double mx1 = 0;
double my1 = 0;
double mx2 = 0;
double my2 = 0;
// For euclidean distance
double ex1 = 0;
double ey1 = 0;
double ex2 = 0;
double ey2 = 0;

// Asking user for their selection choice
cout << "Select an option:\n"
<< "(S/s)lope\n"
<< "(X/x)-Axis Distance\n"
<< "(Y/y)-Axis Distance\n"
<< "(M/m)anhattan Distance\n"
<< "(E/e)uclidean Distance\n"
<< "(Q/q)uit\n" << endl
<< "Selection: ";
// Intializing and Storing input
char input1 = 0;
cin >> input1;

// Giant switch statement based off user choice
switch (input1) {
    // Case for slope
    case 'S':
    case 's':
        // Asking for values
        cout << "Enter a x1 value: ";
        cin >> sx1;
        if (sx1) {
            cout << "Enter a y1 value: ";
            cin >> sy1;
            if (sy1) {
                cout << "Enter a x2 value: ";
                cin >> sx2;
                if (sx2) {
                    cout << "Enter a y2 value: ";
                    cin >> sy2;
                    // Performing correct arithemtic 
                    if (sy2) {
                        double v1 = sy2 - sy1;
                        double v2 = sx2 - sx1;
                        double slope = v1 / v2;
                        // Displaying answer
                        cout << "\nSlope: " << slope;
                    }
                    // Kills program for invalid inputs
                    else if (cin.fail()) {
                        cout << "Error: Invalid entry";
                        return 0;
                    }
                }
                // Kills program for invalid inputs
                else if (cin.fail()) {
                    cout << "Error: Invalid entry";
                    return 0;
                }
            }
            // Kills program for invalid inputs
            else if (cin.fail()) {
                cout << "Error: Invalid entry";
                return 0;
            }
        } 
        // Kills program for invalid inputs
        else if (cin.fail()) {
           cout << "Error: Invalid entry";
           return 0;
        }
    // "Breaking" case
    break;
    // Case for x distance
    case 'X':
    case 'x':
        // Asking for values
        cout << "Enter a x1 value: ";
        cin >> xx1;
        if (xx1) {
            cout << "Enter a y1 value: ";
            cin >> xy1;
            if (xy1) {
                cout << "Enter a x2 value: ";
                cin >> xx2;
                if (xx2) {
                    cout << "Enter a y2 value: ";
                    cin >> xy2;
                    // Performing correct arithmetic
                    if (xy2) {
                        double xabs = xx2 - xx1;
                        double xdist = abs(xabs);
                        // Displaying answer
                        cout << "\nX-Axis Distance: " << xdist;
                    }
                    // Kills program for invalid inputs
                    else if (cin.fail()) {
                        cout << "Error: Invalid entry";
                        return 0;
                    }
                }
                // Kills program for invalid inputs
                else if (cin.fail()) {
                    cout << "Error: Invalid entry";
                    return 0;
                }
            }
            // Kills program for invalid inputs
            else if (cin.fail()) {
                cout << "Error: Invalid entry";
                return 0;
            }
        } 
        // Kills program for invalid inputs
        else if (cin.fail()) {
           cout << "Error: Invalid entry";
           return 0;
        }
    // "Breaking" case
    break;
    // Case for y distance
    case 'Y':
    case 'y':
        // Asking for values
        cout << "Enter a x1 value: ";
        cin >> yx1;
        if (yx1) {
            cout << "Enter a y1 value: ";
            cin >> yy1;
            if (yy1) {
                cout << "Enter a x2 value: ";
                cin >> yx2;
                if (yx2) {
                    cout << "Enter a y2 value: ";
                    cin >> yy2;
                    // Performing correct arithmetic
                    if (yy2) {
                        double yabs = yy2 - yy1;
                        double ydist = abs(yabs);
                        // Displaying answer
                        cout << "\nY-Axis Distance: " << ydist;
                    }
                    // Kills program for invalid inputs
                    else if (cin.fail()) {
                        cout << "Error: Invalid entry";
                        return 0;
                    }
                }
                // Kills program for invalid inputs
                else if (cin.fail()) {
                    cout << "Error: Invalid entry";
                    return 0;
                }
            }
            // Kills program for invalid inputs
            else if (cin.fail()) {
                cout << "Error: Invalid entry";
                return 0;
            }
        } 
        // Kills program for invalid inputs
        else if (cin.fail()) {
           cout << "Error: Invalid entry";
           return 0;
        }
    // "Breaking" case
    break;
    // Case for manhattan distance
    case 'M':
    case 'm':
        // Asking for values
        cout << "Enter a x1 value: ";
        cin >> mx1;
        if (mx1) {
            cout << "Enter a y1 value: ";
            cin >> my1;
            if (my1) {
                cout << "Enter a x2 value: ";
                cin >> mx2;
                if (mx2) {
                    cout << "Enter a y2 value: ";
                    cin >> my2;
                    // Performing correct arithmetic
                    if (my2) {
                        double mxad = mx2 - mx1;
                        double maxad = abs(mxad);
                        double myad = my2 - my1;
                        double mayad = abs(myad);
                        double manDist = maxad + mayad;
                        // Displaying correct answer
                        cout << "\nManhattan Distance: " << manDist;
                    }
                    // Kills program for invalid inputs
                    else if (cin.fail()) {
                        cout << "Error: Invalid entry";
                        return 0;
                    }
                }
                // Kills program for invalid inputs
                else if (cin.fail()) {
                    cout << "Error: Invalid entry";
                    return 0;
                }
            }
            // Kills program for invalid inputs
            else if (cin.fail()) {
                cout << "Error: Invalid entry";
                return 0;
            }
        } 
        // Kills program for invalid inputs
        else if (cin.fail()) {
           cout << "Error: Invalid entry";
           return 0;
        }
    // "Breaking" case
    break;
    // Case for euclidean distance
    case 'E':
    case 'e':
        // Asking for values
        cout << "Enter a x1 value: ";
        cin >> ex1;
        if (ex1) {
            cout << "Enter a y1 value: ";
            cin >> ey1;
            if (ey1) {
                cout << "Enter a x2 value: ";
                cin >> ex2;
                if (ex2) {
                    cout << "Enter a y2 value: ";
                    cin >> ey2;
                    // Performing correct arithmetic
                    if (ey2) {
                        double xad1 = ex2 - ex1;
                        double exp1 = pow(xad1, 2);
                        double yad1 = ey2 - ey1;
                        double exp2 = pow(yad1, 2);
                        double exp3 = exp1 + exp2;
                        double eucDist = sqrt(exp3);
                        // Displaying correct answer
                        cout << "\nEuclidean Distance: " << eucDist;
                    }
                    // Kills program for invalid inputs
                    else if (cin.fail()) {
                        cout << "Error: Invalid entry";
                        return 0;
                    }
                }
                // Kills program for invalid inputs
                else if (cin.fail()) {
                    cout << "Error: Invalid entry";
                    return 0;
                }
            }
            // Kills program for invalid inputs
            else if (cin.fail()) {
                cout << "Error: Invalid entry";
                return 0;
            }
        } 
        // Kills program for invalid inputs
        else if (cin.fail()) {
           cout << "Error: Invalid entry";
           return 0;
        }
    // "Breaking" case
    break;
    // Case for quitting program
    case 'Q':
    case 'q':
        return 0;
    // "Breaking" case
    break;
    // Deafaulting if unrecognized output
    default:
        cout << "Error: Invalid option";
        return 0;
}
// Kills program
    return 0;
}