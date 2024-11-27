#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

void completionVector(std::vector<int> &myvec);
void printVector(const std::vector<int> &myvec);
void delElem(std::vector<int> &myvec, int numDel);

#endif // HEADER_H_INCLUDED
