#include <iostream>

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array)/sizeof(array[0]);
    for(int i = 0;i < length;i++){
        std::cout << i << " : " << array[i] << std::endl;
    }
    return 0;
}