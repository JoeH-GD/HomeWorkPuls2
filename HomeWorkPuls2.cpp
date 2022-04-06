// HomeWorkPuls2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <typeinfo>
#include "Tick_Tack_ToeEnum.h"
#include "Union.h"


void PrintVariantInfo(MyVariant v) {
    if (v.IsNumber == 1)
    {
        std::cout << "Last entered info is age. Your age is " << v.Me.age << std::endl;
    }

    else if (v.IsFloat == 1)
    {
        std::cout << "Last entered info is height. Your height is " << v.Me.height << std::endl;
    }

    else if (v.IsSymbol == 1)
    {
        std::cout << "Last entered info is alias. Your alias is " << v.Me.alias << std::endl;
    }
}


int main()
{
    //Инициализация массива с проверкой заполнения ячеек
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {

            gameField[i][j] = EMPTY;
            std::cout << gameField[i][j] << " "<<std::endl;
            
        }
        
    }
    
    MyVariant MyInfo = {0,0,0};
    int n;
    
    std::cout << "Enter 1 to state your age, 2 to state your heght in meters ot 3 to state your alias letter: ";
     std::cin>>n;
    
    switch (n)
    {
        case 1:
            std::cout << "Enter your age:" << std::endl;
            std::cin>>MyInfo.Me.age;
            MyInfo.IsNumber = 1;
            
        break;
        case 2:
            std::cout << "Enter your height" << std::endl;
            std::cin >> MyInfo.Me.height;
            MyInfo.IsFloat = 1;
            break;

        case 3:
            std::cout << "Enter your alias letter" << std::endl;
            std::cin >> MyInfo.Me.alias;
            MyInfo.IsSymbol = 1;

    }
    std::cout << MyInfo.IsNumber << " " << MyInfo.IsFloat << " " << MyInfo.IsSymbol<<std::endl;

   PrintVariantInfo(MyInfo);

    return 0;
}

