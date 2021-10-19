# This file will have some note about header file
- Self-contained header: a header compiles on their own and ends with .h (there are many other types of header: .inc, ...), ,or we can say it the header file that can be put at the top-most of the file and and no error occurs when compiled.
- A header should have HEADER GUARD and include all other headers if need
- Prefer placing declarations and definitios of INLINE and TEMPLATE in the same header. Definitions should be included to every .cc file to avoid linking failures
- Transitive inclusion: a header contain another header that is used in src. BUT if src uses a a symbol from HEADER2.H and src had included HEADER1.h, which also include HEADER2.h, src should still include<HEADER1.H> => clean code I guess

# This is for some error when compiler cannot file include file path
- When compile on terminal, -I <Path/to/includeFile> to specify include file path
- In VS Code: C/C++ Configurations and add -I to arguments frame

Ref:
https://wiki.c2.com/?SelfContainedHeaders
https://stackoverflow.com/questions/12919081/gcc-g-no-such-file-or-directory