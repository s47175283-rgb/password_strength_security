# Test Cases

| Case | Input | Expected result |
|---|---|---|
| 1 | abc | Weak |
| 2 | password | Weak/low score |
| 3 | Test1234 | Medium |
| 4 | Test@12345 | Strong |
| 5 | ABCDEFGH | Weak/medium depending on score; missing lowercase, number and special |
