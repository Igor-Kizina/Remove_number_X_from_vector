#include "Header.h"

int main()
{
    cout << "Input vector size: ";
    size_t sizeVec;
    cin >> sizeVec;

    std::vector<int> myvec(sizeVec);

    cout << "Inpun nunbers: ";
    completionVector(myvec);

    cout << "Input number to delete: ";
    int numDel;
    cin >> numDel;

    cout << "\nThe source vector: ";
    printVector(myvec);

    delElem(myvec, numDel);

    cout << "\nVector after removing elements: ";
    printVector(myvec);

    return 0;
}






















