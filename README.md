# C-Programing
***The notes of book &lt;The C programming language>***  

***

# Chapter1
1. `\n` is C notation for the *newline character*.  
2. In C ,all variables must be declared before they are used.  
3. Recommended that writing only one statement per line, and using 
blanks around operators to clarify grouping.  
4. The braces `{ }`position is less important.  
5. `#define` line defines a symbolic name or symbolic constant to be
a particular string of characters.  
6. `putchar()` and `getchar()` are both operators of int data which is 
ascii code.  
7. `EOF` means *end of file* ,whose value si `-1` .  
8. In Clion IDE, I have to change the config file to enter EOF by Ctrl-D.  
9. ***parameter*** is a variable named in the parenthesized list in a function
definition, and ***argument*** is the value used in a call of the function.  
10. ***definition*** refers to the place where the variable is created or assigned storage; 
***declaration*** refers to places where the nature of the variables is stated but no storage is allocated .
11. In C programming, `\0` is the mark of a string. For instance, when a string constant like `"hello\n"` 
. It will be stored as : 

|  h     |  e     | l      | l      |o       |    \n  |  \0    |
|  ----  |  ----  |  ----  |  ----  |  ----  |  ----  |  ----  |  
12. Each local variable in a function comes into existence only when the function is called, and disapears 
when the function is exited.  

# Chapter2  
1. For function names and external variables, the number may be less than 31, because external names may be used by
assemblers and loaders over which language has no control.  
2. There are number of qualifiers that can be applied to these basic types.  
 - **short** and **long** apply to integers. And the int can be omitted in such declarations,
  and typically is. Each compiler is free to choose appropriate sizes for its own hardware, 
  subject only to the restriction that **short** is no longer than **int**, which is no longer than **long**.  
  - ****  



