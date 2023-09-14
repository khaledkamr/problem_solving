#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to add two numbers represented as strings
string addStrings(const string& num1, const string& num2)
{
    string result;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.insert(result.begin(), sum % 10 + '0');
    }

    return result;
}

// Function to multiply a number represented as a string by a single digit
string multiplyByDigit(const string& num, int digit)
{
    if (digit == 0)
        return "0";

    string result;
    int carry = 0;

    for (int i = num.length() - 1; i >= 0; --i)
    {
        int product = (num[i] - '0') * digit + carry;
        carry = product / 10;
        result.insert(result.begin(), product % 10 + '0');
    }

    if (carry > 0)
        result.insert(result.begin(), carry + '0');

    return result;
}

// Function to multiply two numbers represented as strings
string multiplyStrings(const string& num1, const string& num2)
{
    string result = "0";

    for (int i = num2.length() - 1; i >= 0; --i)
    {
        string temp = multiplyByDigit(num1, num2[i] - '0');
        temp.append(num2.length() - i - 1, '0');
        result = addStrings(result, temp);
    }

    return result;
}

int main()
{
    string N;
    cin >> N;

    string addResult = addStrings(N, "9999");
    string multiplyResult = multiplyStrings(N, "9999");

    cout << addResult << endl;
    cout << multiplyResult << endl;

    return 0;
}
