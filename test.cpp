#include <iostream>

int main() {
    // 步驟 1: 取得整數
    std::cout << "請輸入一個整數: ";
    int userInput;
    std::cin >> userInput;

    // 步驟 2: 宣告一個32個元素的整數陣列
    int bitArray[32];

    // 將取得的整數各位元值填入陣列
    for (int g = 0; g < 32; ++g) {
        int mask = 1 << g;
        bitArray[g] = (userInput & mask) ? 1 : 0;
    }

    // 步驟 3: 輸出格式
    std::cout << "輸出格式：" << std::endl;
    for (int g = 31; g >= 0; --g) {
		std::cout << bitArray[g] << " ";
        if (g % 8 == 0)
            std::cout << std::endl;
    }

    return (0);
}
