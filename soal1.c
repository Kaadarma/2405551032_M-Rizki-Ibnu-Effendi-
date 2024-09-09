#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int bil;
    scanf("%d", &bil);
    if (bil % 2 == 0) {
        printf("Genap");
    }
    else {
        printf("Ganjil");
    }
    return 0;
}
