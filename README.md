# Resource-Management-System
# Overview

This project demonstrates a C++ BankAccount class with robust exception handling, dynamic memory management, and proper object lifecycle management.
It is designed to illustrate how constructors, destructors, and exceptions interact in real-world scenarios such as invalid account creation and withdrawal errors.

# Features
Constructor Validation: Throws an exception if the initial balance is negative.

Withdrawal Handling: Throws an exception if the withdrawal amount exceeds the current balance.

Dynamic Memory Allocation: Objects are created with new and safely deleted with delete.

Destructor Logging: Console messages clearly demonstrate the order of constructor and destructor execution.

Exception Safety: Demonstrates proper handling of exceptions in constructors and methods without memory leaks.
