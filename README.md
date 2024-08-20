# Digital Wallet Management System

## Overview

The Digital Wallet Management System is a software platform designed to manage financial transactions digitally. It allows users to transfer and receive funds, view account balances, and ensures secure, fast, and convenient financial management.

## Requirements

1. *List of Users with Initial Balances*:
   - Users are provided with their initial balances.

2. *List of Transactions*:
   - Transactions include fund transfers between users.

3. *Results*:
   - For each transaction, print "Success" if the transaction was completed successfully, otherwise print "Failure".
   - After all transactions, sort and display users based on their remaining balance in descending order.

## Input Format

- *First Line*: An integer N, the number of users.
- **Next N Lines**: Each line contains two integers: userID and balance, where userID is the user's identifier, and balance is the user's current balance.
- *Next Line*: An integer T, the number of transactions.
- **Next T Lines**: Each line contains three integers: from_userID, to_userID, and amount, where from_userID and to_userID are the identifiers of the users involved in the transaction, and amount is the amount transferred.

## Constraints

- 1 ≤ N ≤ 102
- 1 ≤ userID ≤ 102
- 0 ≤ balance ≤ 104
- 1 ≤ T ≤ 103
- 0 ≤ amount ≤ 104

## Output Format

- For each transaction:
  - Print "Success" if the transaction was completed successfully.
  - Print "Failure" if the transaction failed.
- Print all users sorted by their remaining balance in descending order.

## Sample Input

4

1 9000

2 3000

3 7500

4 2000

5
1 2 1000

3 4 3000

2 3 500

4 1 7500

1 4 1500

## Sample Output

Success

Success

Success

Failure

Success

2 3500

3 5000

1 6500

4 6500
