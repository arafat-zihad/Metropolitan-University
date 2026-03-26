#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Coefficients and constants
    double a1, b1, c1, d1;
    double a2, b2, c2, d2;
    double a3, b3, c3, d3;

    // Input
    cout << "Enter equation 1 (a1 b1 c1 d1): ";
    cin >> a1 >> b1 >> c1 >> d1;

    cout << "Enter equation 2 (a2 b2 c2 d2): ";
    cin >> a2 >> b2 >> c2 >> d2;

    cout << "Enter equation 3 (a3 b3 c3 d3): ";
    cin >> a3 >> b3 >> c3 >> d3;

    // Settings
    double x = 0, y = 0, z = 0; // initial guess
    double old_x, old_y, old_z; //store previous iteration values for convergence check
    double tolerance = 0.0001;  //top iterating when change in all variables drops below
    int maxIter = 100;

    // Header
    cout << "\n Iter |     x      |     y      |     z\n";
    cout << " -----|------------|------------|----------\n";

    // Iterations (Repeat until convergence or maxIter is reached)
    for (int k = 1; k <= maxIter; k++)
    {
        old_x = x;
        old_y = y;
        old_z = z; 

        // Update each variable using the rearranged equations.
        x = (d1 - b1 * y - c1 * z) / a1;
        y = (d2 - a2 * x - c2 * z) / b2;
        z = (d3 - a3 * x - b3 * y) / c3;

        cout << fixed << setprecision(4);
        cout << " " << setw(4) << k
             << " | " << setw(10) << x
             << " | " << setw(10) << y
             << " | " << setw(10) << z << "\n";

        // Convergence check
        // If the change in ALL three variables is smaller than tolerance, we've converged
        if (fabs(x - old_x) < tolerance &&
            fabs(y - old_y) < tolerance &&
            fabs(z - old_z) < tolerance)
        {

            cout << "\n Converged after " << k << " iteration(s).\n";
            break; // exit the loop — solution is found
        }
    }

    // Result
    cout << "\n Solution:\n";
    cout << "   x = " << x << "\n";
    cout << "   y = " << y << "\n";
    cout << "   z = " << z << "\n";

    return 0;
}

// /*
//  * Gauss-Seidel Iteration Method
//  * -------------------------------------------------------
//  * Solves a system of 3 linear equations with 3 unknowns:
//  *   a1*x + b1*y + c1*z = d1
//  *   a2*x + b2*y + c2*z = d2
//  *   a3*x + b3*y + c3*z = d3
//  *
//  * The method starts from an initial guess (x=0, y=0, z=0)
//  * and repeatedly updates each variable using the latest
//  * available values until the solution converges.
//  * -------------------------------------------------------
//  */

// #include <iostream> // for cout and cin
// #include <cmath>    // for fabs() — absolute value for doubles
// #include <iomanip>  // for setw() and setprecision() — output formatting
// using namespace std;

// int main()
// {

//     // --- Coefficients and constants ---
//     // Each equation: a*x + b*y + c*z = d
//     double a1, b1, c1, d1; // coefficients of equation 1
//     double a2, b2, c2, d2; // coefficients of equation 2
//     double a3, b3, c3, d3; // coefficients of equation 3

//     // --- Input ---
//     // Read all coefficients and constants from the user
//     cout << "Enter equation 1 (a1 b1 c1 d1): ";
//     cin >> a1 >> b1 >> c1 >> d1;

//     cout << "Enter equation 2 (a2 b2 c2 d2): ";
//     cin >> a2 >> b2 >> c2 >> d2;

//     cout << "Enter equation 3 (a3 b3 c3 d3): ";
//     cin >> a3 >> b3 >> c3 >> d3;

//     // --- Settings ---
//     double x = 0, y = 0, z = 0; // initial guess — all unknowns start at 0
//     double old_x, old_y, old_z; // store previous iteration values for convergence check
//     double tolerance = 0.0001;  // stop iterating when change in all variables drops below this
//     int maxIter = 100;          // safety limit — prevents infinite loop if it never converges

//     // --- Header ---
//     // Print column headings for the iteration table
//     cout << "\n Iter |     x      |     y      |     z\n";
//     cout << " -----|------------|------------|----------\n";

//     // --- Iterations ---
//     // Repeat until convergence or maxIter is reached
//     for (int k = 1; k <= maxIter; k++)
//     {

//         // Save current values before updating (needed for convergence check)
//         old_x = x;
//         old_y = y;
//         old_z = z;

//         // Update each variable using the rearranged equations.
//         // Key idea: each new value is used IMMEDIATELY in the next line
//         // (this is what makes Gauss-Seidel faster than Gauss-Jacobi)
//         x = (d1 - b1 * y - c1 * z) / a1; // solve equation 1 for x
//         y = (d2 - a2 * x - c2 * z) / b2; // solve equation 2 for y (uses updated x)
//         z = (d3 - a3 * x - b3 * y) / c3; // solve equation 3 for z (uses updated x and y)

//         // Print current iteration values in aligned columns
//         cout << fixed << setprecision(4);
//         cout << " " << setw(4) << k             // iteration number
//              << " | " << setw(10) << x          // current x
//              << " | " << setw(10) << y          // current y
//              << " | " << setw(10) << z << "\n"; // current z

//         // --- Convergence check ---
//         // If the change in ALL three variables is smaller than tolerance, we've converged
//         if (fabs(x - old_x) < tolerance && // change in x is tiny
//             fabs(y - old_y) < tolerance && // change in y is tiny
//             fabs(z - old_z) < tolerance)
//         { // change in z is tiny

//             cout << "\n Converged after " << k << " iteration(s).\n";
//             break; // exit the loop — solution is found
//         }
//     }

//     // --- Result ---
//     // Print the final converged values of x, y, z
//     cout << "\n Solution:\n";
//     cout << "   x = " << x << "\n";
//     cout << "   y = " << y << "\n";
//     cout << "   z = " << z << "\n";

//     return 0;
// }