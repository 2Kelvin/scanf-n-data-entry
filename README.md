# scanf-n-data-entry

`scanf()` lets the user add input data (string) to the program. It **takes in pointers** in order to update them if need be. Enter numeric data by passing scanf an **integer pointer** i.e. get the address of the numeric variable (&numericVariable)

```c
%i //=> enters an integer
```

```c
%11s //=> enters a string of 11 characters
```

```c
%f /*=> enters a floating number*/
```

Always limit & specify the number of characters a string takes to avoid `buffer overflows`