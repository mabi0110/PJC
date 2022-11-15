#include <iostream>

int gcdRec(int a, int b);
int sumDigits(int n);
int numDigits(int n);
void printOddEven(int n);
void hailstone(int n);

int main() {
    std::cout << "gcdRec(12, 42) = " <<
        gcdRec(12, 42) << std::endl
        << "gcdRec(12, 25) = " <<
        gcdRec(12, 25) << std::endl;

    
    std::cout << "sumDigits(123) = " <<
        sumDigits(123) << std::endl
        << "sumDigits(971) = " <<
        sumDigits(971) << std::endl;

    
    std::cout << "numDigits(12345) = " <<
        numDigits(12345) << std::endl
        << "numDigits(971) = " <<
        numDigits(971) << std::endl;

    std::cout << "printOddEven(15): ";
    printOddEven(15);
    std::cout << std::endl;
    std::cout << "printOddEven(14): ";
    printOddEven(14);
    std::cout << std::endl;

    std::cout << "hailstone(13): ";
    hailstone(13);
    std::cout << std::endl;

}


int gcdRec(int a, int b) {
    return b == 0 ? a : gcdRec(b, a % b);
}

int sumDigits(int n) {
    return n == 0 ? 0 : n % 10 + sumDigits(n / 10);
}

int numDigits(int n) {
    return n < 10 ? 1 : numDigits(n / 10) + 1;
}

int odd = 1;
int even = 2;

void printOddEven(int n) {
    if (n % 2 == 0) {
        if (even <= n) {
            std::cout << even << " ";
            even = even + 2;
            printOddEven(n);
        }
        else {
            even = 2;
            return;
        }
    }
    else {
        if (odd <= n) {
            std::cout << odd << " ";
            odd = odd + 2;
            printOddEven(n);
        }
        else {
            odd = 1;
            return;
        }       
    }
}


void hailstone(int n) {
    if (1 < n) {
        if (n % 2 == 0) {
            std::cout << n << " ";
            hailstone(n / 2);
        }
        else {
            std::cout << n << " ";
            hailstone((3 * n) + 1);
        }
    }
    else {
        std::cout << 1 << " ";
        return;
    }

}








