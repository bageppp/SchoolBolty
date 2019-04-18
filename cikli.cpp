#include <iostream>

int main () { 

    int n;
    std :: cout << "vidite cheslo "<< std:: endl;
    std:: cin >> n ;
    
    for(int x=1; x<=n; x++) {

        if (x<n){
            std:: cout <<x << ", ";
        }else if (x==n)
        {
            std :: cout << x << ".";
        }
    }
    // //or (; x<10; x++) {
    //     std::cout << ""<< x << std:: endl;
    // }
    
    return 0;
}