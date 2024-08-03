/*
    Task => Add to Binary Numbers

    Example(1) => a = 10101
                  b = 11011

      carry ->1  1  1  1  1  0
                 1  0  1  0  1  → 21
            +    1  1  0  1  1  → 27
            ---------------------------
              1  1  0  0  0  0  → 48

    Example(2) => a = 1010
                  b = 1011

      carry ->1  0  1  0  0
                 1  0  1  0  → 10
            +    1  0  1  1  → 11
            ---------------------------
              1  0  1  0  1  → 21

    Example(3) => a = 10111
                  b = 1011011

      carry ->   0  1  1  1  1  1  0
                 0  0  1  0  1  1  1  → 23
            +    1  0  1  1  0  1  1  → 91
            -------------------------------
                 1  1  1  0  0  1  0  → 114

*/
#include <bits/stdc++.h>
using namespace std;

int addBinary(int binary1, int binary2)
{
    int carry = 0, result = 0, placeValue = 1;
    int bit1, bit2, sum = 0;

    while (binary1 > 0 || binary2 > 0 || carry > 0)
    {
        bit1 = binary1 % 10;
        bit2 = binary2 % 10;

        // Add bits along with carry from the previous addition
        sum = bit1 + bit2 + carry;

        // Update carry for the next calculation
        carry = sum / 2;

        // Update result with the current binary digit
        result += (sum % 2) * placeValue;

        // Move to the next place value
        placeValue *= 10;

        // Remove the processed bits from the binary numbers
        binary1 /= 10;
        binary2 /= 10;
    }

    return result;
}

int main()
{
    int binary1, binary2;
    int sum;

    // Input two binary numbers
    cout << "Enter first binary number: ";
    cin >> binary1;

    cout << "Enter second binary number: ";
    cin >> binary2;

    // Check for negative inputs
    if (binary1 < 0 || binary2 < 0)
    {
        cerr << "Please enter non-negative binary numbers." << endl;
        return 1;
    }

    // Perform binary addition
    sum = addBinary(binary1, binary2);

    // Display the result
    cout << "Sum of binary numbers: " << sum << endl;

    return 0;
}
