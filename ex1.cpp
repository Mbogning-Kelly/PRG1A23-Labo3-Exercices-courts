#include <iostream>

using namespace std;

// écrire la fonction somme_modulo_mille_milliards
// qui retourne la somme de ses deux paramètres modulo
// 1'000'000'000'000
//

//bool sum_would_overflow(long long int v1, long long int v2) {
//    return (v1 >= 0) ?
//           numeric_limits<long long int>::max() - lhs < v2 :
//           v2 < numeric_limits<long long int>::lowest() - v1;
//}

int somme_modulo_mille_milliards(long long int a, long long int b){
//    if (sum_would_overflow(a,b)){
//        if (a>0)
//            return numeric_limits<long long int>::max();
//        else
//            return -numeric_limits<long long int>::max();
//    }
    long long int sum = a + b;
    long long int m = sum % 1000000000000;
    return m;
}

int main() {
   cout << somme_modulo_mille_milliards(2,-3) << endl;
   // affiche -1

   cout << somme_modulo_mille_milliards(12'523'432'987'012, 987'654'321'999) << endl;
   // affiche 511087309011
}