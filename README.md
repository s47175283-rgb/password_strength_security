# Password Strength & Security Analyzer – C Project (TRL-4)

## Project Level
**Innovation Project – 4-4: Complete**

A complete working C prototype that evaluates password characteristics and provides a simple strength score and improvement suggestions.

## Problem
Users may create passwords that are short or lack a mixture of character types. A simple educational tool can help explain common password-strength criteria.

## Solution
The program checks:
- minimum length
- uppercase letters
- lowercase letters
- numbers
- special characters

It calculates a score out of 7 and classifies the password as Weak, Medium or Strong.

## Technology
- Language: C
- Compiler: GCC / MinGW / Clang
- Concepts: strings, functions, loops, character handling, conditional statements

## Run

### Linux/macOS
```bash
gcc src/password_strength_analyzer.c -o password_analyzer
./password_analyzer
```

### Windows (MinGW)
```bash
gcc src/password_strength_analyzer.c -o password_analyzer.exe
password_analyzer.exe
```

## Example
Use a test password such as:
```text
Test@12345
```

The program prints the score, strength category and suggestions.

## Project Structure
```text
Password-Strength-Security-Analyzer-TRL4/
├── src/
│   └── password_strength_analyzer.c
├── tests/
│   └── test_cases.md
├── docs/
│   ├── project_report.md
│   └── demo_script.md
├── README.md
└── LICENSE
```

## TRL-4 Evidence
- Working executable prototype
- Source code
- Test cases
- Project report
- Demonstration procedure
- GitHub README

## Security Note
This is an educational analyzer. It does not save, hash, transmit or recover passwords. Do not enter real account passwords into demonstration software.

## Future Scope
- GUI version
- password entropy estimation
- configurable security policy
- integration with a local password-security education module
