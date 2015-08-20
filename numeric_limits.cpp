// numeric_limits example
# include <iostream>
#include <limits>

using namespace std;

int main() {
 cout << boolalpha;
 cout << "Min value for short: " << numeric_limits<short>::min() << endl;
 cout << "Max value for short: " << numeric_limits<short>::max() << endl;
 cout << "unsigned short is signed: " << numeric_limits<unsigned short>::is_signed << endl;
 return 0;
}
