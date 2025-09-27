# Exception-Handling-cpp  

**Aim:** To study **exception handling** in C++ using try, catch, and throw keywords.  

**Tools:** GNU g++ compiler for local compilation or any online C++ compiler.  

# Theory  
**Exception Handling** in C++ is a mechanism to handle runtime errors in a controlled way. Instead of abruptly terminating a program when an error occurs (such as division by zero or invalid input), exception handling allows the programmer to "catch" the error and respond gracefully.  

The main keywords used are:  
- **try** – Defines a block of code that might throw an exception.  
- **throw** – Used to signal the occurrence of an exception.  
- **catch** – Defines a block of code that handles the exception thrown.  

### Why Exception Handling?  
- Prevents program crashes and provides meaningful error messages.  
- Separates normal program logic from error-handling logic.  
- Makes programs more robust, secure, and user-friendly.  

### How Exception Handling is Helpful?  
- Ensures that errors are detected and handled without stopping program execution abruptly.  
- Improves reliability and fault-tolerance of applications.  
- Allows the programmer to deal with unexpected situations like invalid input, division by zero, or resource unavailability.  

# Syntax
```cpp
try {
    // Code that may cause an exception
    if(error_condition) {
        throw value;   // throw an exception
    }
}
catch(type parameter) {
    // Code to handle the exception
}

```

# **Program 1: Division by Zero**  

### Logic:  
When dividing two numbers, if the denominator is zero, the program throws an exception. This is caught by the `catch` block, which then displays an error message instead of allowing the program to crash.  

### Algorithm:  
1. Start  
2. Input two numbers.  
3. Try dividing numerator by denominator.  
4. If denominator equals zero, throw an exception.  
5. Catch the exception and display an error message.  
6. Otherwise, display the division result.  
7. End  

# **Program 2: Voting Eligibility**  

### Logic:  
The program checks whether a person is eligible to vote based on their age. If the age is less than 18, an exception is thrown and handled by the `catch` block with a message that voting is not allowed. Otherwise, the user is allowed to cast their vote.  

### Algorithm:  
1. Start  
2. Input age of the person.  
3. Try checking eligibility:  
   - If age < 18, throw an exception.  
   - Else, allow voting.  
4. Catch the exception and display "cannot vote".  
5. If eligible, ask for choice (e.g., BJP or Congress).  
6. Count the vote and display thank-you message.  
7. End  



# **Conclusion**  
Exception handling in C++ is a structured way to detect and manage runtime errors. It prevents abrupt program termination and makes applications more reliable and user-friendly. By separating normal flow from error-handling code, it ensures that errors  or invalid input are managed gracefully. This leads to programs that are secure, maintainable, and fault-tolerant.  
