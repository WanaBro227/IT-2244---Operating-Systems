# GCD and LCM Calculator

This is a simple Bash script that calculates:

- The **Least Common Multiple (LCM)** of two numbers (`a` and `b`)
- The **Greatest Common Divisor (GCD)** of two numbers (`b` and `c`)

## How It Works

1. The script prompts the user to enter three numbers: `a`, `b`, and `c`.
2. It defines a `gcd()` function that uses the Euclidean algorithm to compute the GCD of two numbers.
3. It calculates:
   - `LCM(a, b)` using the formula:  
     `LCM(a, b) = (a × b) / GCD(a, b)`
   - `GCD(b, c)` using the `gcd()` function.

## Usage

Make the script executable and run it in your terminal:

```bash
chmod +x Q1_36.sh
./Q1_36.sh
```

You will be prompted to enter three numbers. The script will then display:

- The LCM of the first two numbers.
- The GCD of the second and third numbers.

## Example

```
Enter number a: 12
Enter number b: 18
Enter number c: 24
LCM of 12 and 18 is: 36
GCD of 18 and 24 is: 6
```

## Requirements

- Bash shell

## Notes

- The script assumes all inputs are valid positive integers.
- Division by zero is not handled and may cause an error if invalid input is provided.
