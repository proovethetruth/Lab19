
// ƒано n предметов, каждый предмет имеет пор€дковый номер.
// Ќаписать программу, котора€ выписывает все возможные 
// перестановки из n предметов так, что образованна€ 
// последовательность чисел меньше заданного числа

#include <iostream>
using namespace std;

void GenArrangement(int n, int k, int idx, int used, int arran) {
    if (idx == k) {
        std::cout << arran << std::endl;
        return;
    }

    for (int i = 0; i < n; i++)
        if (0 == (used & (1 << i)))
            GenArrangement(n, k, idx + 1, used | (1 << i), arran * 10 + (i + 1));
}

int main() {
    int n, k;
    cout << "\n Enter num of elements: ";
    cin >> n;

    cout << "\n Enter length: ";
    cin >> k;
    GenArrangement(n, k, 0, 0, 0);
}