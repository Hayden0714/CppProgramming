#include <string>
using namespace std;


class CRYPTOromanType{
  public:
    void setRoman(string);
    void romanToPositiveInteger();
    void printPositiveInteger() const;
    void printRoman() const;
    CRYPTOromanType();
    CRYPTOromanType(string);

  private:
    string CRYPTOromanNum;
    int num;
};