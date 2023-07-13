# Option Pricing Models
![image](https://github.com/cedricmoorejr/options-pricing-calculator/assets/136417849/3800baec-d5bb-4f30-822a-9ebd5fa5b805)

This repository provides an implementation of option pricing models in C++. The code includes functions for calculating option prices using the Black-Scholes formula for European options and the binomial option pricing model for American options.

## Table of Contents

- [Option Pricing Models](#option-pricing-models)
- [Overview](#overview)
- [Description](#description)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Installation](#installation)
  - [Configuration](#configuration)
  - [Dependencies](#dependencies)
  - [Running C++ Files](#running-c-files)
    - [Using the Compilation Batch File](#using-the-compilation-batch-file)
- [Contact](#contact)
- [Contributing](#contributing)
- [License](#license)

## Option Pricing Models

The code in this repository provides the following option pricing models:

- Black-Scholes Formula: The Black-Scholes formula is a mathematical model used to price European options. It assumes that the underlying asset price follows a geometric Brownian motion and considers factors such as the strike price, time to maturity, risk-free interest rate, and volatility. The implementation includes functions for calculating the prices of European call and put options using this formula.

- Binomial Option Pricing Model: The binomial option pricing model is a discrete-time model used to approximate the prices of American options. It divides the time to expiration into a number of equally spaced intervals and constructs a binomial tree of possible future asset prices. The model takes into account factors such as the underlying asset price, strike price, risk-free interest rate, volatility, time to maturity, and the number of steps in the tree. The implementation includes functions for calculating the prices of American call and put options using this model.

## Overview

Option pricing is a fundamental concept in finance that involves determining the value of financial derivatives known as options. Options provide investors with the right, but not the obligation, to buy or sell an underlying asset at a predetermined price within a specific time period.

This repository offers a C++ implementation of option pricing models, which are widely used in the financial industry. These models allow investors to evaluate the prices of options based on various factors such as the underlying asset price, strike price, time to maturity, risk-free interest rate, and volatility.

## Description

The code in this repository provides an implementation of option pricing models in C++. It includes functions for calculating option prices using the Black-Scholes formula for European options and the binomial option pricing model for American options.

## Features

The option pricing models in this codebase offer the following features:

- Accurate calculation of European call and put option prices using the Black-Scholes formula.
- Precise calculation of American call and put option prices using the binomial option pricing model.
- Flexibility to input various parameters, such as the spot price, strike price, risk-free rate, volatility, time to maturity, and number of steps (for American options).
- User-friendly prompts for inputting option parameters and selecting the desired option type.
- Ability to run multiple option price calculations in succession, with the option to continue or exit the program after each calculation.

## Getting Started

### Installation

To use the option pricing models implemented in this code, follow these steps:

1. Clone the repository or download the source code files.

2. Compile the code using a C++ compiler compatible with your system.

### Configuration

To run C++ files and execute the option pricing models implemented in this code, you need the following:

#### C++ Compiler

A C++ compiler is required to compile the source code files (.cpp) into executable files. There are several C++ compilers available, such as:

- **GCC/G++**: The GNU Compiler Collection (GCC) includes the G++ compiler, which is a popular choice for compiling C++ code on Unix-like systems (e.g., Linux, macOS). It is a command-line compiler that can be installed through package managers or downloaded directly from the GCC website.

- **Microsoft Visual C++**: This compiler is provided as part of the Visual Studio suite and is commonly used on Windows systems. Visual C++ provides an integrated development environment (IDE) with a graphical user interface for code editing, building, and debugging.

- **Clang**: Clang is a compiler front end for the C, C++, and Objective-C programming languages. It is designed to be a high-performance compiler and supports various platforms, including Unix-like systems, macOS, and Windows.

Choose a C++ compiler that is compatible with your operating system and programming environment. Install the compiler and ensure that it is properly configured on your system.

#### Integrated Development Environment (IDE)

While not strictly necessary, using an Integrated Development Environment (IDE) can greatly simplify the process of writing, compiling, and running C++ code. IDEs provide a comprehensive environment with features such as code completion, syntax highlighting, debugging tools, and project management capabilities.

Some popular C++ IDEs include:

- **Visual Studio**: Visual Studio is a widely used IDE developed by Microsoft. It offers a rich set of features for C++ development, including code editing, debugging, and project management.

- **CLion**: CLion is an IDE specifically designed for C++ development. It provides advanced code analysis, refactoring tools, and integration with build systems.

- **Code::Blocks**: Code::Blocks is a free and open-source IDE that supports multiple compilers. It offers a simple and user-friendly interface with features like code completion and project management.

Choose an IDE that suits your preferences and requirements. Install the IDE and configure it to work with your chosen C++ compiler.

#### Text Editor

If you prefer a lightweight and minimalistic approach, you can use a text editor to write C++ code. Popular text editors for C++ development include:

- **Visual Studio Code**: Visual Studio Code is a lightweight and extensible text editor that provides features like syntax highlighting, code snippets, and debugging support through extensions.

- **Sublime Text**: Sublime Text is a highly customizable text editor with a rich ecosystem of plugins. It supports syntax highlighting, auto-completion, and multiple selections for efficient editing.

- **Atom**: Atom is an open-source text editor developed by GitHub. It offers a wide range of packages and themes for customization, making it suitable for C++ development.

When using a text editor, you need to manually compile and run the C++ code through the command line or by using build automation tools like Make or CMake.

### Dependencies

The code has the following dependencies:

- `iostream`: The standard input/output stream library for console input/output operations.
- `cmath`: The mathematical functions library for performing mathematical calculations.

### Running C++ Files

To run C++ files, follow these general steps:

1. Write or obtain the C++ source code files (.cpp) containing the implementation of the option pricing models.

2. Open a command prompt or terminal and navigate to the directory where your C++ source code files are located.

3. Compile the C++ source code files using the appropriate compiler command. For example, with G++ on Linux or macOS, you can use the following command:

   ```bash
   g++ -o output_filename source_file.cpp
   ```

   This command compiles the source file and generates an executable file with the specified output filename.

4. Once the compilation is successful, you can run

the compiled program by executing the generated executable file. In the case of our option pricing models, you may need to provide input values interactively as prompted by the program.

   ```bash
   ./output_filename
   ```

   This command executes the compiled program and initiates the option pricing calculations.

Ensure that you have the necessary permissions to compile and execute files in the specified directory. Also, make sure that any dependencies required by your code (such as libraries) are properly installed and accessible.

### Using the Compilation Batch File

Additionally, in this repository, you can find a batch file named `compile.bat`. This batch file simplifies the process of compiling C++ programs by automating some of the commands.

To use the compilation batch file, follow these steps:

1. Open a text editor and paste the following code:

   ```batch
   @echo off
   setlocal enabledelayedexpansion

   echo List of .cpp files in Current Directory
   echo.
   echo ========================================

   set count=0
   for /r %%f in (*.cpp) do (
       set /a count+=1
       echo !count!. %%~nxf
   )
   echo ========================================
   echo.

   set /p choice="Enter the number associated with the file you want to compile: "

   set count=0
   for /r %%f in (*.cpp) do (
       set /a count+=1
       if !count! equ %choice% set "source_file=%%~nxf"
   )

   set /p program_name="Enter the name for the compiled program (without .exe extension): "

   echo Compiling C++ program...
   g++ -o %program_name%.exe %source_file%
   echo Compilation completed.
   ```

2. Save the file with the extension `.bat`, for example, `compile.bat`.

3. Place the `compile.bat` file in the same directory as your C++ source code files.

4. Open a command prompt or terminal and navigate to the directory containing the `compile.bat` file.

5. Run the batch file by entering `compile.bat` in the command prompt or terminal.

6. The batch file will list the available `.cpp` files in the directory and prompt you to enter the number associated with the file you want to compile.

7. After selecting the file, the batch file will prompt you to enter a name for the compiled program.

8. The batch file will then compile the selected `.cpp` file using the entered program name and generate an executable file with the specified name.

   ```bash
   Compiling C++ program...
   Compilation completed.
   ```

Using the compilation batch file simplifies the process of compiling your C++ programs, especially when dealing with multiple source files in the same directory.

## Contact

For any questions, suggestions, or issues, please feel free to contact me.

## Contributing

Contributions to this repository are welcome. If you find any issues or have suggestions for improvements, please submit a pull request or open an issue. Your contributions can help enhance the functionality and usability of the option pricing models.

When contributing, please ensure that your code adheres to the existing coding style and conventions used in the project.

## License

This code is released under the [MIT License](LICENSE.txt). You are free to use, modify, and distribute the code, subject to the terms and conditions of the license.

Please note that this code is provided for educational and informational purposes only. Use it at your own risk, and always consult with a qualified financial professional before making any investment decisions.

---
