#include "max_el.h"
#include <iostream>
#include <vector>

bool is_even(int x){
    return !(bool)(x%2);
}

bool is_negative(float x){
    return x < 0;
}

int main(){
    //std::vector<int> a {1, 3, 19, 20, 1, 10};
    //std::cout << *max_element_if(a.begin(), a.end(), is_even) << std::endl;

    const std::vector<float> v {2.1, 3.141, 11.92, -20.4, 11.3, -11.3, -11.1, 2.3, -20.3, -11.1};
    std::cout << *max_element_if(v.begin(), v.end(), is_negative) << std::endl;
    return 0;
}
