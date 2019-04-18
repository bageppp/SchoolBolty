 #include<iostream>

 
 
 int main()
{
	int h;
	std::cout << "visota" << std::endl;
	std::cin >> h;
	//std::cout << "vidite cheslo " << std::endl;
	//std::cin >> n;
    if (h%2==0){
        for (int y = h; y >h/2; y--) { 
            std::cout << "*";
            for (int r =2 ; r <=y-h/2 ; r++)
                std::cout << " ";
                std::cout << "*"<< std::endl ;
                
        }
        for (int t = h/2; t < h; t++) {

            std::cout << "*" ;
            for (int r =0; r < t-h/2; r++)
                std::cout << " ";
                std::cout << "*" << std::endl;

        }
    } 
    else 
    {
        int x= h/2;
        for (int y = h; y >h/2+1; y--) { 
            std::cout << "*";
            for (int r =0 ; r <x; r++)
                std::cout << " ";
            std::cout << "*"<< std::endl ;
            x--;
        }
        for (int t = h/2; t < h; t++) {

            std::cout << "*" ;
            for (int r =0; r < t-h/2; r++)
                std::cout << " ";
            std::cout << "*" << std::endl;
        }

    }

	return 0;
}