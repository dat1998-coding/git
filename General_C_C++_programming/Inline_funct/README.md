# Information about the inline keyword
- Inline function is an important feature in c++
- It's an optimize technique used by compiler
- It conducts inline expansion so that we we increase the performance of out code in term of speed -> simply insert the body of the function whenever the inline function is used

inline void foo(){
    //when called compiler will paste this body
    }

# Pros and Cons
Pros: 
- Increase speed as we directly paste the code to exact possition where inline function called => Reduce (the result) return time compare to calling normal function

Cons:
- Increase the size of program as when calling inline function many times, many identical codes will be pasted.
- Too many inline functions will reduce instruction cached rate hit, slower speed of instruction from cache to primary memory

# Note
- Don't use inline for functions which are too long: the time when execute < the time to call funtion => don't use inline
- Functions containing:
    + loop
    + recursive
    + static variable
    + switch, goto
    may be ignored even defined inline
- Inline keyword will not perform if there's virtual function as virtual function conducts at runtime, not compile time.

# Fun fact
- All functions in a class is inline functions:
     if (define functions inside class)
        no need inline keyword;
     else 
        use keyword if need;
- In C we use Macro for its inline expansion character, but it's error-prone. C++ provide similar mechanics but improve in error detection, inline Keyword.


https://www.cplusplus.com/articles/G3wTURfi/
https://www.geeksforgeeks.org/inline-functions-cpp/