#include <iostream>

#include <include/mdfa-key-value/write-mdfa-kv.h>
#include <include/union-find-algs/weighted-quick-union.h>

int main() {
    uf::WeightedQuickUnion wqu(5);
    wqu.Union(1, 2);
    wqu.Union(0, 1);
    std::cout << "Is 0 connected to 1? " << std::boolalpha << wqu.AreConnected(0, 1) << std::endl;
    std::cout << "Is 0 connected to 3? " << wqu.AreConnected(0, 3) << std::endl;

    mdfa_kv::WriteMdfa write_mdfa(5);

    return EXIT_SUCCESS;
}
