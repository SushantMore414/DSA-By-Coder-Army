#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2) {
    string result ;
    int carry = 0;
    int index1 = num1.size() - 1;
    
    int index2 = num2.size() - 1;

    while (index1 >= 0 || index2 >= 0 || carry) {
        int digit1 = (index1 >= 0) ? num1[index1--] - '0' : 0;
        int digit2 = (index2 >= 0) ? num2[index2--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result += (sum % 10 + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num1="943", num2="78";
    

    string sum = addStrings(num1, num2);
    cout << "Sum: " << sum << endl;

    return 0;
}
