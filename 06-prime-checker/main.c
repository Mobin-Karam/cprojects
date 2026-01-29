#include <stdio.h>
#include <math.h>
#include <assert.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime

    for (int d = 2; d <= sqrt(num); d++) {
        if (num % d == 0) return 0; // divisible → not prime
    }
    return 1; // no divisors → prime
}

// Struct to store test cases
typedef struct {
    int input;
    int expected;
} TestCase;

// Improved test function
void test_isPrime() {
    TestCase tests[] = {
        {2, 1}, {3, 1}, {4, 0}, {5, 1},
        {9, 0}, {11, 1}, {1, 0}, {0, 0}, {-5, 0},
        {17,1}, {19,1}, {20,0}
    };

    int passed = 0;
    int failed = 0;
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        int result = isPrime(tests[i].input);
        if (result == tests[i].expected) {
            printf("Test %d passed: %d → %d\n", i+1, tests[i].input, result);
            passed++;
        } else {
            printf("Test %d FAILED: %d → %d (expected %d)\n", i+1, tests[i].input, result, tests[i].expected);
            failed++;
        }
    }

    printf("\nTotal Passed: %d, Failed: %d\n", passed, failed);
}

int main() {
	test_isPrime();
    int number;
    while (1) {
        printf("Enter Your Number For Check is Prime or not: ");
        scanf("%d", &number);
        if (isPrime(number)) {
            printf("%d is Prime\n", number);
        } else {
            printf("%d Ooops is not Prime\n", number);
        }
    }
    return 0;
}
