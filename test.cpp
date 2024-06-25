#include <iostream>

int main() {
    // �B�J 1: ���o���
    std::cout << "�п�J�@�Ӿ��: ";
    int userInput;
    std::cin >> userInput;

    // �B�J 2: �ŧi�@��32�Ӥ�������ư}�C
    int bitArray[32];

    // �N���o����ƦU�줸�ȶ�J�}�C
    for (int g = 0; g < 32; ++g) {
        int mask = 1 << g;
        bitArray[g] = (userInput & mask) ? 1 : 0;
    }

    // �B�J 3: ��X�榡
    std::cout << "��X�榡�G" << std::endl;
    for (int g = 31; g >= 0; --g) {
		std::cout << bitArray[g] << " ";
        if (g % 8 == 0)
            std::cout << std::endl;
    }

    return (0);
}
