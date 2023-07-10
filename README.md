# Option Pricing Models

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

No additional configuration is required to use the option pricing models. The code includes all the necessary functions and calculations.

### Dependencies

The code has the following dependencies:

- `iostream`: The standard input/output stream library for console input/output operations.
- `cmath`: The mathematical functions library for performing mathematical calculations.

## Contact

For any questions, suggestions, or issues, please feel free to contact me.

## Contributing

Contributions to this repository are welcome. If you find any issues or have suggestions for improvements, please submit a pull request or open an issue. Your contributions can help enhance the functionality and usability of the option pricing models.

When contributing, please ensure that your code adheres to the existing coding style and conventions used in the project.

## License

This code is released under the [MIT License](LICENSE.txt). You are free to use, modify, and distribute the code, subject to the terms and conditions of the license.

Please note that this code is provided for educational and informational purposes only. Use it at your own risk, and always consult with a qualified financial professional before making any investment decisions.

---
