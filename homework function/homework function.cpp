#include <iostream>
#include <cstdlib>
#include <ctime>

int countSpecialNumbers() {
    int numbers[10];
    int count = 0;

    for (int i = 0; i < 10; ++i) {
        numbers[i] = std::rand() % 100 + 1;
        if (numbers[i] % 3 == 0 && numbers[i] % 5 != 0) {
            count++;
        }
    }

    std::cout << "Rəqəmlər: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return count;
}

int sumAfterFirstNegative() {
    int numbers[10];
    bool foundNegative = false;
    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        numbers[i] = std::rand() % 41 - 10;
        if (numbers[i] < 0) {
            foundNegative = true;
        }
        else if (foundNegative) {
            sum += numbers[i];
        }
    }

    std::cout << "Rəqəmlər: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return sum;
}

int sumAfterFirstPositive() {
    int numbers[10];
    bool foundPositive = false;
    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        numbers[i] = std::rand() % 51 - 30;
        if (numbers[i] > 0) {
            foundPositive = true;
        }
        else if (foundPositive) {
            sum += numbers[i];
        }
    }

    std::cout << "Rəqəmlər: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return sum;
}

void findMinMax(int& minVal, int& maxVal) {
    int numbers[20];
    minVal = INT_MAX;
    maxVal = INT_MIN;

    for (int i = 0; i < 20; ++i) {
        numbers[i] = std::rand() % 100;
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }

    std::cout << "Rəqəmlər: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::srand(std::time(nullptr));

    int specialCount = countSpecialNumbers();
    std::cout << "3-ə bölünüb 5-ə bölünməyən rəqəmlərin sayı: " << specialCount << std::endl;

    int sumNegatives = sumAfterFirstNegative();
    std::cout << "Birinci mənfi ədədin ardından gələnlərin cəmi: " << sumNegatives << std::endl;

    int sumPositives = sumAfterFirstPositive();
    std::cout << "Birinci müsbət ədədin ardından gələnlərin cəmi: " << sumPositives << std::endl;

    int minVal, maxVal;
    findMinMax(minVal, maxVal);
    std::cout << "Minimum: " << minVal << ", Maximum: " << maxVal << std::endl;
}
