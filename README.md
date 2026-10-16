# Console Calculator

Simple console calculator in C++. My first multi-file C++ project.

## Features
- Operations: `+`, `-`, `*`, `/`
- Asks again on an invalid operation
- Protection against division by zero
- Repeat calculations without restarting

## Build
Requires CMake and a C++17 compiler.

```
cmake -S . -B build
cmake --build build
```

## Example
```
Enter first value: 3
Enter an action: 0
Enter correct action: + or - or * or /.
Enter an action: 0
Enter correct action: + or - or * or /.
Enter an action: 3
Enter correct action: + or - or * or /.
Enter an action: /
Enter second value: 0
You cant divide on 0
Enter second value: 0
You cant divide on 0
Enter second value: 3
Your result = 1
Do you want to repeat? y/n n
```

## Project structure
| File | Description |
|---|---|
| `calc.h` | function declarations |
| `calc.cpp` | arithmetic functions |
| `main.cpp` | input, menu, output |
