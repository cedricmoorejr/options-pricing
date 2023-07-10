#include <iostream>
#include <cmath>

// Normal cumulative distribution function
double N(double x) {
    const double pi = 3.14159265358979323846;
    return 0.5 * erfc(-x / sqrt(2.0));
}

// Black-Scholes formula for European call option
double europeanCallOptionPrice(double S, double K, double r, double sigma, double T) {
    // Calculate d1 and d2
    double d1 = (log(S / K) + (r + sigma * sigma / 2.0) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);
    
    // Calculate and return the European call option price
    return S * N(d1) - K * exp(-r * T) * N(d2);
}

// Black-Scholes formula for European put option
double europeanPutOptionPrice(double S, double K, double r, double sigma, double T) {
    // Calculate d1 and d2
    double d1 = (log(S / K) + (r + sigma * sigma / 2.0) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);
    
    // Calculate and return the European put option price
    return K * exp(-r * T) * N(-d2) - S * N(-d1);
}

// Binomial option pricing for American call option
double americanCallOptionPrice(double S, double K, double r, double sigma, double T, int N) {
    double dt = T / N;  // Time step size
    double u = exp(sigma * sqrt(dt));  // Up factor
    double d = 1.0 / u;  // Down factor
    double p = (exp(r * dt) - d) / (u - d);  // Probability of up movement
    
    // Initialize stock price tree
    double stockPrice[N + 1];
    for (int i = 0; i <= N; ++i) {
        stockPrice[i] = S * pow(u, N - i) * pow(d, i);
    }

    // Initialize option value tree
    double optionValue[N + 1];
    for (int i = 0; i <= N; ++i) {
        optionValue[i] = fmax(0, stockPrice[i] - K);
    }

    // Calculate option prices at each node
    for (int j = N - 1; j >= 0; --j) {
        for (int i = 0; i <= j; ++i) {
            optionValue[i] = fmax(stockPrice[i] - K, exp(-r * dt) * (p * optionValue[i] + (1 - p) * optionValue[i + 1]));
            stockPrice[i] = stockPrice[i] / u;
        }
    }

    return optionValue[0];  // Return the American call option price
}

// Binomial option pricing for American put option
double americanPutOptionPrice(double S, double K, double r, double sigma, double T, int N) {
    double dt = T / N;  // Time step size
    double u = exp(sigma * sqrt(dt));  // Up factor
    double d = 1.0 / u;  // Down factor
    double p = (exp(r * dt) - d) / (u - d);  // Probability of up movement
    
    // Initialize stock price tree
    double stockPrice[N + 1];
    for (int i = 0; i <= N; ++i) {
        stockPrice[i] = S * pow(u, N - i) * pow(d, i);
    }

    // Initialize option value tree
    double optionValue[N + 1];
    for (int i = 0; i <= N; ++i) {
        optionValue[i] = fmax(0, K - stockPrice[i]);
    }

    // Calculate option prices at each node
    for (int j = N - 1; j >= 0; --j) {
        for (int i = 0; i <= j; ++i) {
            optionValue[i] = fmax(K - stockPrice[i], exp(-r * dt) * (p * optionValue[i] + (1 - p) * optionValue[i + 1]));
            stockPrice[i] = stockPrice[i] / u;
        }
    }

    return optionValue[0];  // Return the American put option price
}

int main() {
    char optionType;
    bool shouldContinue = true;

    while (shouldContinue) {
        // Get user input for option type
        std::cout << "Select option type (E for European, A for American): ";
        std::cin >> optionType;

        // Option parameters
        double S, K, r, sigma, T;
        int N;

        if (optionType == 'E' || optionType == 'e') {
            // Get user input for option parameters
            std::cout << "Enter spot price: ";
            std::cin >> S;

            std::cout << "Enter strike price: ";
            std::cin >> K;

            std::cout << "Enter risk-free rate: ";
            std::cin >> r;

            std::cout << "Enter volatility: ";
            std::cin >> sigma;

            std::cout << "Enter time to maturity: ";
            std::cin >> T;

            // Calculate European option prices
            double europeanCallPrice = europeanCallOptionPrice(S, K, r, sigma, T);
            double europeanPutPrice = europeanPutOptionPrice(S, K, r, sigma, T);

            // Output the results
            std::cout << "European Call option price: " << europeanCallPrice << std::endl;
            std::cout << "European Put option price: " << europeanPutPrice << std::endl;
        } else if (optionType == 'A' || optionType == 'a') {
            // Get user input for option parameters
            std::cout << "Enter spot price: ";
            std::cin >> S;

            std::cout << "Enter strike price: ";
            std::cin >> K;

            std::cout << "Enter risk-free rate: ";
            std::cin >> r;

            std::cout << "Enter volatility: ";
            std::cin >> sigma;

            std::cout << "Enter time to maturity: ";
            std::cin >> T;

            // Get user input for number of steps
            std::cout << "Enter number of steps: ";
            std::cin >> N;

            // Calculate American option prices
            double americanCallPrice = americanCallOptionPrice(S, K, r, sigma, T, N);
            double americanPutPrice = americanPutOptionPrice(S, K, r, sigma, T, N);

            // Output the results
            std::cout << "American Call option price: " << americanCallPrice << std::endl;
            std::cout << "American Put option price: " << americanPutPrice << std::endl;
        }
        else {
            std::cout << "Invalid option type!" << std::endl;
        }

        // Prompt to start over
        char choice;
        std::cout << "Do you want to calculate again? (Y/N): ";
        std::cin >> choice;

        if (choice == 'N' || choice == 'n') {
            shouldContinue = false;
        }
    }

    return 0;
}
