#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if( (i<=n-j-1)&& (j>=i)|| (i>=n-j-1)&&(j<=i) )
            {
                std::cout << "* ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}