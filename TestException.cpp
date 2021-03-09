#include<iostream>
using namespace std;
#define maximum_two(n1, n2) ((n1 > n2) ? n1 : n2)

inline int maximum_one(int a, int b){
    return (a > b) ? a : b;
}
int main(){
    cout<<"Welcome ..."<<endl;
    cout<<"Maximum of the two nos. using inline : "<<maximum_one(10, 3)<<endl;
    cout<<"Mazimum of the two nos. using inline :"<<maximum_one(3, 8)<<endl;
    cout<<"Maximum of the two nos. using macro : "<<maximum_two(2, 9)<<endl;
}