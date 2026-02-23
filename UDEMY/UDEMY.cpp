#include <iostream>
#include <cstdio>
using namespace std;
int NextId(){
    int id = 1;
    return id++;
}
int main() {
    printf("NextId: %d\n", NextId());
    printf("NextId: %d\n", NextId());
    printf("NextId: %d\n", NextId());
    return 0;
}