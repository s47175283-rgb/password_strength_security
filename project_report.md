# Project Report

## 1. Title
Password Strength & Security Analyzer using C

## 2. Objective
To create a working C prototype that evaluates basic password characteristics and gives a simple strength classification.

## 3. Problem Statement
Weak passwords can be easier to guess. Beginners may not understand why length and character variety matter.

## 4. Proposed Solution
The program accepts a test password, checks its characteristics, assigns points and displays a strength category with suggestions.

## 5. Modules
1. Password input
2. Character analysis
3. Score calculation
4. Strength classification
5. Feedback generation

## 6. C Concepts Used
- strings
- functions
- loops
- character-library functions
- conditional statements
- formatted output

## 7. Scoring Logic
- 8 or more characters: +2
- 12 or more characters: +1
- uppercase: +1
- lowercase: +1
- number: +1
- special character: +1

Maximum score: 7.

Classification:
- 0–2: Weak
- 3–5: Medium
- 6–7: Strong

## 8. Test Cases
### Test 1
Input: `abc`
Expected: Weak; suggestions for length, uppercase, number and special character.

### Test 2
Input: `Test1234`
Expected: Medium because it has sufficient length and character variety but no special character.

### Test 3
Input: `Test@12345`
Expected: Strong because it satisfies the major checks.

## 9. Result
The prototype successfully analyzes a test password and produces a score, strength level and improvement suggestions.

## 10. TRL-4 Completion Evidence
- Complete working prototype
- GitHub-ready source repository
- README documentation
- Test-case document
- Project report
- Demonstration script
- Repeatable compilation and execution

## 11. Limitations
This is a rule-based educational checker, not a complete password-security audit. It does not test against leaked-password databases or estimate real-world attack resistance.

## 12. Future Scope
The project can be extended with entropy estimation, configurable policies and a graphical interface.

## 13. Conclusion
The project demonstrates practical use of C programming for a cybersecurity-related educational application and provides a complete prototype suitable for an innovation-project portfolio.
