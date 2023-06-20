2.7. Integral types
The real types were the easy ones. The rules for the integral types are more complicated, but still tolerable, and these rules really should be learnt. Fortunately, the only types used in C for routine data storage are the real and integer types, or structures and arrays built up from them. C doesn't have special types for character manipulation or the handling of logical (boolean) quantities, but uses the integral types instead. Once you know the rules for the reals and the integers you know them all.

We will start by looking at the various types and then the conversion rules.

2.7.1. Plain integers
There are two types (often called ‘flavours’) of integer variables. Other types can be built from these, as we'll see, but the plain undecorated ints are the base. The most obvious of the pair is the ‘signed’ int, the less obvious is its close relative, the unsigned int. These variables are supposed to be stored in whatever is the most convenient unit for the machine running your program. The int is the natural choice for undemanding requirements when you just need a simple integral variable, say as a counter in a short loop. There isn't any guarantee about the number of bits that an int can hold, except that it will always be 16 or more. The standard header file <limits.h> details the actual number of bits available in a given implementation.

Curiously, Old C had no guarantee whatsoever about the length of an int, but consensus and common practice has always assumed at least 16 bits.

Actually, <limits.h> doesn't quite specify a number of bits, but gives maximum and minimum values for an int instead. The values it gives are 32767 and -32767 which implies 16 bits or more, whether ones or twos complement arithmetic is used. Of course there is nothing to stop a given implementation from providing a greater range in either direction.

The range specified in the Standard for an unsigned int is 0 to at least 65535, meaning that it cannot be negative. More about these shortly.

If you aren't used to thinking about the number of bits in a given variable, and are beginning to get worried about the portability implications of this apparently machine-dependent concern for the number of bits, then you're doing the right thing. C takes portability seriously and actually bothers to tell you what values and ranges are guaranteed to be safe. The bitwise operators encourage you to think about the number of bits in a variable too, because they give direct access to the bits, which you manipulate one by one or in groups. Almost paradoxically, the overall result is that C programmers have a healthy awareness of portability issues which leads to more portable programs. This is not to say that you can't write C programs that are horribly non-portable!

2.7.2. Character variables
A bit less obvious than int is the other of the plain integral types, the char. It's basically just another sort of int, but has a different application. Because so many C programs do a lot of character handling, it's a good idea to provide a special type to help, especially if the range provided by an int uses up much more storage than is needed by characters. The limits file tells us that three things are guaranteed about char variables: they have at least 8 bits, they can store a value of at least +127, and the minimum value of a char is zero or lower. This means that the only guaranteed range is 0–127. Whether or not char variables behave as signed or unsigned types is implementation defined.

In short, a character variable will probably take less storage than an int and will most likely be used for character manipulation. It's still an integer type though, and can be used for arithmetic, as this example shows.
