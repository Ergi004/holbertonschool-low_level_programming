            ~            ~A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body.

A function prototype gives information to the compiler that the function may later be used in the program.

Syntax of function prototype
returnType functionName(type1 argument1, type2 argument2, ...);
In the above example, int addNumbers(int a, int b); is the function prototype which provides the following information to the compiler:

name of the function is addNumbers()
return type of the function is int
two arguments of type int are passed to the function
The function prototype is not needed if the user-defined function is defined before the main() function.

Calling a function
Control of the program is transferred to the user-defined function by calling it.

Syntax of function call
functionName(argument1, argument2, ...);
In the above example, the function call is made using addNumbers(n1, n2); statement inside the main() function.

Function definition
Function definition contains the block of code to perform a specific task. In our example, adding two numbers and returning it.

Syntax of function definition
returnType functionName(type1 argument1, type2 argument2, ...)
{
    //body of the function
}
When a function is called, the control of the program is transferred to the function definition. And, the compiler starts executing the codes inside the body of a function.

Passing arguments to a function

In programming, argument refers to the variable passed to the function. In the above example, two variables n1 and n2 are passed during the function call.

The parameters a and b accepts the passed arguments in the function definition. These arguments are called formal parameters of the function.

Passing arguments to a function
