#include <iostream>
#include <string>

int main()
{
    std::string name1 = "";
    std::string name2 = "";
    std::string name3 = "";

    std::cin >> name1;
    std::cin >> name2;
    std::cin >> name3;

    std::string stringArr[] = {name1, name2, name3};
    int arrLength = sizeof(stringArr) / sizeof(std::string);

    for (int i = 0; i < arrLength - 1; i++)
    {
        for (int j = 0; j < arrLength - i - 1; j++)
        {
            if (stringArr[j] > stringArr[j + 1])
            {
                std::string temp = stringArr[j];
                stringArr[j] = stringArr[j + 1];
                stringArr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arrLength; i++)
    {
        std::cout << stringArr[i];
        if (i < arrLength - 1)
        {
            std::cout << ", ";
        }
    }

    return 0;
}