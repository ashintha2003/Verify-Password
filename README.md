#  Strong Password Validator (Codeforces Problem) 
- C language

This repository contains my solution to a **password validation problem** originally given on [Codeforces](https://codeforces.com/). The task is to implement an algorithm that checks whether a given password is "strong" based on a specific set of rules.

##  Problem Description

Monocarp is designing a website that requires users to pick **strong passwords**. A password is considered strong if it meets the following criteria:

1. It consists only of **lowercase Latin letters** (`a`–`z`) and **digits** (`0`–`9`).
2. **All letters (if any)** must appear **before any digits**.
3. The **letters must be sorted** in **non-decreasing (alphabetical)** order.
4. The **digits must also be sorted** in **non-decreasing** order.

🔸 Passwords containing only letters or only digits are allowed.  
🔸 Any violation of the above rules makes the password **invalid**.

## Input Format

- First line: an integer `t` — number of test cases.
- For each test case:
  - An integer `n` — length of the password.
  - A string of `n` characters, each either a lowercase letter or digit.

##  Output Format

For each test case, print `"YES"` if the password is strong, or `"NO"` otherwise.

![Screenshot 2025-05-19 001033](https://github.com/user-attachments/assets/3b8aaf4a-dd10-4f61-bd0b-43009872138e)

![Screenshot 2025-05-19 001104](https://github.com/user-attachments/assets/3d2c3f6b-f090-412a-9974-390c71f8e8e7)




