#include <iostream>   

int main(int argc,char **argv){
    int n= 5;
    int m= 7;
    int r= 1;
    for (int i = 1; i < n; i++){
        int k= i % m;
        r= r * k + 2;
    }

    std:: cout << r <<std :: endl;
    return 0;
}