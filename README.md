# Simple C Programming Examples

This repository contains simple C programming examples demonstrating basic programming concepts and mathematical operations.

## Programs Included

### 1. Prime Number Checker (`ccode.c`)

A program that checks if numbers are prime or not.

**Features:**
- Implements an efficient prime checking algorithm
- Tests a predefined array of numbers
- Uses optimized loop (checking up to square root of n)

**Example Output:**
```
1 is not prime
2 is prime
3 is prime
4 is not prime
5 is prime
10 is not prime
```

### 2. Basic Calculator (`ccode2.c`)

A simple calculator program that performs basic arithmetic operations.

**Features:**
- Supports addition (+), subtraction (-), multiplication (*), and division (/)
- Includes error handling for division by zero
- Handles invalid operators gracefully
- Demonstrates switch-case statements

**Example Output:**
```
10 + 5 = 15
10 - 5 = 5
10 * 5 = 50
10 / 5 = 2
Error: Invalid operator '%'
10 % 5 = 0
```

## How to Compile and Run

### Prerequisites
- GCC compiler (or any C compiler)
- Terminal/Command prompt

### Compilation Commands

To compile the prime number checker:
```bash
gcc -o ccode ccode.c
```

To compile the calculator:
```bash
gcc -o ccode2 ccode2.c
```

### Running the Programs

After compilation, run the programs:
```bash
./ccode    # Run prime number checker
./ccode2   # Run calculator
```

On Windows:
```bash
ccode.exe    # Run prime number checker
ccode2.exe   # Run calculator
```

## Code Structure

Both programs follow good C programming practices:
- Clear function definitions
- Proper error handling
- Meaningful variable names
- Efficient algorithms
- Clean main function structure

## Learning Objectives

These programs demonstrate:
- Basic C syntax and structure
- Function definition and usage
- Control structures (loops, conditionals)
- Switch-case statements
- Array manipulation
- Mathematical operations
- Error handling techniques

## Contributing

Feel free to fork this repository and submit pull requests for improvements or additional examples.

## License

This project is open source and available under the MIT License.