#include "Header.h"

void completionVector(std::vector<int> &myvec)
{
   for(size_t i = 0; i < myvec.size(); ++i) {
      int numb;
      cin >> numb;
      if(numb!= (int) numb)
         continue;
      else
         myvec.at(i) = numb;
    }
}

void printVector(const std::vector<int> &myvec)
{
   for(auto i = 0; i < myvec.size(); ++i)
      cout << myvec[i] << ' ';
    cout << endl;
}

void delElem(std::vector<int> &myvec, int numDel)
{
   for(size_t i = 0; i < myvec.size(); ++i) {
         if(myvec[i] == numDel) {
            if(i == myvec.size() - 1){
               myvec.pop_back();
               break;
            }
            else {
                myvec.erase(myvec.cbegin() + i);
         --i;
            }
      }
    }
}
