# Usage
g++ <file_1> <file_2> <file_3> -o <result_file>
./<result_file>

# Forward Decleration
- This feature support the compiler to detect which symbol is the correct one to compile.
    Ex: We compile many SRCs, in those SRCs have many function with the same name but having differences(return type, parameters, class ...) With forward decleration, you can specify which function to use by declare its prototype.
- Boots speed of build as compiler don't have to do extra steps to detect which symbol to use; more practically, instead of including header that contains the functions you need, which will paste all the code in that including, you just need to declare a function prototype precisely and compile (all files needed).


# Ref:
https://stackoverflow.com/questions/4757565/what-are-forward-declarations-in-c -> what happen without forward decleration
