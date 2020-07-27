#include <string>
#include <bitset>
#include <iostream>
using namespace std;

// void setup()
// {

// }

// void loop()
// {

// }


string TextToBinary(string words)
{
    string binaryString = "";
    for (char& _char : words) {
        binaryString +=bitset<8>(_char).to_string();
    }
    return binaryString;
}

int main()
{
    string text = "Hello World!";
    cout << TextToBinary(text) << "\n";

    return 0;
}
