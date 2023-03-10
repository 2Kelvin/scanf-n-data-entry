# scanf-n-data-entry

`scanf()` lets the user add input data (string) to the program. It **takes in pointers** in order to update them if need be. Enter numeric data by passing scanf an **integer pointer** i.e. get the address of the numeric variable (&numericVariable)

```c
"%i" //=> enters an integer
```

```c
"%11s" //=> enters a string of 11 characters
```

```c
"%f" //=> enters a floating number
```

Always limit & specify the number of characters a string takes to avoid `buffer overflows`

`fgets()` just like scanf() can be used to enter text data. However, it requires the maximum length of the characters to be specified. This is explicitly passed as an argument. \0 is preincluded in fget() so you don't need to subtract one character like in scanf() to accomodate it.

```c
fgets(food, sizeof(food), stdin);
```

`stdin` signifies that the **data will be coming from the keyboard**

fgets() only allows you to enter strings only unlike scanf() which can enter strings and also other data types

scanf() doesn't read spaces but fgets() does