# Concepts collections
## Value Initialization 
a value-initialized element. This library-generated value is used to initialize each element in the container. The value of the element initializer depends on the type of the elements stored in the vector.  If the vector holds elements of a buuilt-in type, such as int, then the element initializer has a vlue of 0. If the elements are of a class type, such as string, then the element initializer iis itelf default initialized:


## C++ Attribute
[Function-Attributes](https://gcc.gnu.org/onlinedocs/gcc-3.2/gcc/Function-Attributes.html)
[Variable-Attributes](https://gcc.gnu.org/onlinedocs/gcc-3.2/gcc/Variable-Attributes.html)
The attribute can be applied to one or more parameters, to specify that the passed-in argument carries a dependency into the function body. The attribute can be applied to the function itself, to specify that the return value carries a dependency out of the function.

属性可以应用到一个或多个形参，用来表示传递一个实参时，带有一个依赖关系进入程序体。这个属性可以应用于程序本身，然后特别当一个返回值带一个依赖关系出程序体

1. __attribute__((constructor)) syntax : This particular GCC syntax, when used with a function, executes the same function at the startup of the program, i.e before main() function.

2. __attribute__((destructor)) syntax : This particular GCC syntax, when used with a function, executes the same function just before the program terminates through _exit, i.e after main() function.

Explanation :
The way constructors and destructors work is that the shared object file contains special sections (.ctors and .dtors on ELF) which contain references to the functions marked with the constructor and destructor attributes, respectively. When the library is loaded/unloaded, the dynamic loader program checks whether such sections exist, and if so, calls the functions referenced therein.

Few points regarding these are worth noting :
1. __attribute__((constructor)) runs when a shared library is loaded, typically during program startup.
2. __attribute__((destructor)) runs when the shared library is unloaded, typically at program exit.
3. The two parentheses are presumably to distinguish them from function calls.
4. __attribute__ is a GCC specific syntax;not a function or a macro.


3. __ Attribute __( Section(x) )
__attribute__((section("name"))) variable attribute
The section attribute specifies that a variable must be placed in a particular data section. Normally, the ARM compiler places the objects it generates in sections like . data and . bss .

section ("section-name")
Normally, the compiler places the objects it generates in sections like data and bss. Sometimes, however, you need additional sections, or you need certain particular variables to appear in special sections, for example to map to special hardware. The section attribute specifies that a variable (or function) lives in a particular section. For example, this small program uses several specific section names:

```c
struct duart a __attribute__ ((section ("DUART_A"))) = { 0 };
struct duart b __attribute__ ((section ("DUART_B"))) = { 0 };
char stack[10000] __attribute__ ((section ("STACK"))) = { 0 };
int init_data __attribute__ ((section ("INITDATA"))) = 0;

main()
{
/* Initialize stack pointer */
init_sp (stack + sizeof (stack));

/* Initialize initialized data */
memcpy (&init_data, &data, &edata - &data);

/* Turn on the serial ports */
init_duart (&a);
init_duart (&b);
}
```


ConstrucTOR ->ctor 
DestrucTOR->dtor