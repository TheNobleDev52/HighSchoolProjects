//OBJ: Bit Wise Operators 
#include <iostream>
using namespace std;
int main() 
{
    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // 1. AND (&) Operator: Compares bits, returns 1 if both bits are 1.
    cout << "1. AND (&) Operation\n";
    cout << "a & b: " << (a & b) << " (Binary: 0001)\n\n"; // Output: 1

    // Use case: Turn off a specific bit (e.g., 2nd bit of 'a')
    int mask = ~(1 << 1); // 1110 (invert of 0010)
    int result = a & mask; // 0101 & 1110 = 0100
    cout << "Turn off 2nd bit of a (5): " << result << " (Binary: 0100)\n\n"; // Output: 4

    // 2. OR (|) Operator: Compares bits, returns 1 if either bit is 1.
    cout << "2. OR (|) Operation\n";
    cout << "a | b: " << (a | b) << " (Binary: 0111)\n\n"; // Output: 7

    // Use case: Turn on a specific bit (e.g., turn on 3rd bit of 'b')
    mask = 1 << 2; // Binary: 0100
    result = b | mask; // 0011 | 0100 = 0111
    cout << "Turn on 3rd bit of b (3): " << result << " (Binary: 0111)\n\n"; // Output: 7

    // 3. XOR (^) Operator: Compares bits, returns 1 if bits are different.
    cout << "3. XOR (^) Operation\n";
    cout << "a ^ b: " << (a ^ b) << " (Binary: 0110)\n\n"; // Output: 6

    // Use case: Toggle a specific bit (e.g., toggle 2nd bit of 'a')
    result = a ^ (1 << 1); // 0101 ^ 0010 = 0111
    cout << "Toggle 2nd bit of a (5): " << result << " (Binary: 0111)\n\n"; // Output: 7

    // 4. NOT (~) Operator: Inverts all bits (binary complement).
    cout << "4. NOT (~) Operation\n";
    cout << "~a: " << (~a) << " (Binary: ...11111010, which is -6 in 2's complement)\n\n"; // Output: -6

    // Use case: Find two's complement (negating a number)
    cout << "Two's complement of a: " << (~a + 1) << "\n\n"; // Output: -5

    // 5. Left Shift (<<) Operator: Shifts bits to the left by n positions.
    cout << "5. Left Shift (<<) Operation\n";
    cout << "a << 1: " << (a << 1) << " (Binary: 1010, which is 10)\n\n"; // Output: 10

    // Use case: Multiply a number by powers of 2
    cout << "Multiplying a (5) by 4 using left shift: " << (a << 2) << " (Binary: 10100)\n\n"; // Output: 20

    // 6. Right Shift (>>) Operator: Shifts bits to the right by n positions.
    cout << "6. Right Shift (>>) Operation\n";
    cout << "a >> 1: " << (a >> 1) << " (Binary: 0010, which is 2)\n\n"; // Output: 2

    // Use case: Divide a number by powers of 2
    cout << "Dividing a (5) by 2 using right shift: " << (a >> 1) << " (Binary: 0010)\n\n"; // Output: 2

    // 7. Compound bitwise operators: Combine assignment with bitwise operations
    cout << "7. Compound Bitwise Operators\n";
    a &= b; // Equivalent to: a = a & b
    cout << "a &= b: " << a << " (Binary: 0001)\n\n"; // Output: 1

    return 0;
}