#include <iostream>

#include <chrono>

double calc (double x) {
    return x*x - x*x + x*4 - x*5 + x + x;
}



int main()

{
    long long n;
    
    double res;
    
    double  time;
    
    int x = 5;

    while(1)
    {
        if (!(std::cin >> n)) 
            break; 
        
        clock_t start = clock();

        for (long long i =0; i<n; ++i)
        {
            res = calc(x);
        }

        clock_t end = clock();
        time = (double)(end - start) / CLOCKS_PER_SEC;

        std::cout <<"Время =  "<< time << "\n";
        std::cout <<"Итог =  "<< res <<std:: endl;
    }
}
