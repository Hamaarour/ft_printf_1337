# ft_printf_1337
The printf function

The printf function (the name comes from “print formatted”) prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen.

```c
printf("The value is %d\n", counter);
```
<Br><br><br>
# VARIADIC FUNCTION

-> A variable function is an undefined edge function.

->TYPEDEF VA_LIST:

	* typedef struct {
	*    unsigned int gp_offset;
	*    unsigned int fp_offset;
	*    void *overflow_arg_area;
	*    void *reg_save_area;  
	* } va_list[1];


	The (va_start) macro initializes the structure as follows:
	reg_save_area The element points to the start of the register save area
	

	overﬂow_arg_area This pointer is used to fetch arguments passed on the stack. It is initialized with the address of the first argument passed on the stack, if any, 	and then always updated to point to the start of the next argument on the stack.

	gp_offset The element holds the offset in bytes from reg_save_area to the place where the next available general purpose argument register is saved. In case all 	argument registers have been exhausted, it is set to the value 48 (6 * 8).

	fp_offset The element holds the offset in bytes from reg_save_area to the place where the next available floating point argument register is saved. In case all 	argument registers have been exhausted, it is set to the value 304 (6 * 8 + 16 * 16).



->Sometimes, va_list is simply char*. Basically, ap represents an array of pointers to chars. When calling va_arg(ap, TYPE) it reads memory from address at which ap points, but it reads it as TYPE type. So, if you call it with int it will read 4 bytes and convert it to int type

->there is no way to compute the length of a (va_list)


-> #include <stdarg.h>
	Cette librairie permet de coder des fonctions à nombre variable de paramètres (d'arguments). L'exemple le plus connu de fonction à nombre variable de paramètres est 	certainement la fonction printf


-> macros :
	Macro in C programming is known as the piece of code defined with the help of the #define directive. Macros in C are very useful 	at multiple places to replace 	the piece of code with a single value of the macro.
                            —————————————————————
   1. #define - Preprocessor Directive
   2. PI - Macro Name
   3. 3.14 - Macro Value

->Preprocessor Directive: 
    Preprocessor directives are lines included in a program that begin with the character #, which make them different from a typical source code text.

Types of macros in Nutshell :

Sr.No.	|Macro Name	|Description
1	|Object Like	|Value or code segment gets replaced with macro name
2	|Function Like	|The macro which takes an argument and acts as a function
3	|Chain Like	|The macro inside another macro

-> the macros available for working with va_list are :
	->va_strat  : start using the list.
    	The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first

	->va_arg.   : get the next argument.
    	The va_arg() macro expands to an expression that has the type and value of the next argument in the call.

	->va_end    : stop using the va_list.
   	 Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function.
    	After the call va_end(ap) the variable ap is undefined.

	->va_copy   : copy the va_list.
   	 The va_copy() macro copies the (previously initialized) variable argument list src to dest.

ABOUT PRINTF

->The printf function (the name comes from “print formatted”) prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen

->The symbol “%” denotes the beginning of a format :
	-d for int
	-s for string
	-c for caracter
	-p for dress en hex
	-I like d
	-u int decimal unsigned
	-x hex whit lowercase
	-X hex with uppercase
	-% sign percentage
 
->Deff btw %i and %d is that in scanf; 012 (d = 12) (i = 10)
## 📌 Useful Links

* [C++ Reference - printf](http://www.cplusplus.com/reference/cstdio/printf/)
* [Article: Secrets of “printf” (PDF)](https://www.cypress.com/file/54441/download)
* [MacOS documentation - printf](https://opensource.apple.com/source/xnu/xnu-201/osfmk/kern/printf.c.auto.html)
* [IEEE-754 Floating Point Converter](https://www.h-schmidt.net/FloatConverter/IEEE754.html)
* [How does one print floats for ft_printf? - Stack Overflow - 42 Network](https://stackoverflow.com/c/42network/questions/133/134#134)
* [Printing Floating-Point Numbers](http://www.ryanjuckett.com/programming/printing-floating-point-numbers/)
* [Printing Floating-Point Numbers Quickly and Accurately with Integers](https://www.cs.tufts.edu/~nr/cs257/archive/florian-loitsch/printf.pdf)
* [What precisely does the %g printf specifier mean? - Stack Overflow](https://stackoverflow.com/questions/54162152/what-precisely-does-the-g-printf-specifier-mean)
* [C Reference - Regester](https://www.geeksforgeeks.org/understanding-register-keyword/)
* [C Microsoft explain - variadic](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170)
* [Variadic function in C](https://medium.com/swlh/variadic-function-in-c-programming-d3632315a48e)
* [How does printf work](https://stackoverflow.com/questions/23104628/technically-how-do-variadic-functions-work-how-does-printf-work)




