//
//  main.cpp
//  vvp8
//
//  Created by Александр дэброси on 23.12.2019.
//  Copyright © 2019 Александр дэброси. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int nomer;
        cout << "Введите номер задания ";
        cin >> nomer;
        switch (nomer)
        {
        case 1:
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
            {
                b = a;
            }
            else
            {
                if (a < b)
                {
                    a = b;
                }
                else
                {
                    a = 0;
                    b = 0;
                }
            }
            
            cout << " A =" << a << endl;
            cout << " B =" << b << endl;
        }
        case 2:
        {
            int a, b, c, s;
            cout << " Введите a, b, c : ";
            cin >> a >> b >> c;
            if (a > b)
            {
                if (b > c)
                    s = a + b;
                else
                    s = a + c;
            }
            else
            {
                if (c > a)
                    s = c + b;
                else
                    s = b + a;
            }
            cout << "Сумма двух наибольших = " << s << endl;
        }

        case 3:
        {
            int a, b, c, ab, ac;
            cout << " Введите a, b, c : ";
            cin >> a >> b >> c;
            ab = abs(a - b);
            ac = abs(a - c);
            if (ab < ac)
                cout << "Точка b лежит ближе и ратояние от а =" << ab << endl;
            if (ab > ac)
                cout << "Точка c лежит ближе и ратояние от а =" << ac << endl;
            if (ab == ac)
                cout << "Точки b и c равноудалены от a и ратояние от а =" << ac << endl;
        }

        case 4:
        {
            int y, x;
            cout << "Введите X , Y :";
            cin >> x >> y;
            if (x > 0)
            {
                if (y > 0)
                    cout << "Первая четверть";
                else
                    cout << "Вторая четверть";
            }
            else
            {
                if (y < 0)
                    cout << "Третья четверть";
                else
                    cout << "Четвёртая четверть";
            }
        }
        case 5:
        {
            int a;
            cout << "Введите a : ";
            cin >> a;
            if (a == 0)
                cout << "Нулевое число";
            if (a > 0)
            {
                if ((a % 2) == 0)
                    cout << "Положительное четное число";
                else
                    cout << "Положительное нечетное число";
            }
            else
            {
                if ((a % 2) == 0)
                    cout << "отрицательное четное число";
                else
                    cout << "отрицательное нечетное число";
            }
        }

        case 6:
        {
            int x;
                cout << "введите число 1 < x < 999  " << endl;
                cin >> x ;
                if ((x / 10 == 0) & (x % 2 == 0))
                {
                    cout << "однозначное четное";
                }
                else
                {
                if ((x / 10 == 0) & (x % 2 != 0))
                    {
                    cout << "однозначное не четное";
                    }
                else
                    {
                if ((x / 100 == 0) & (x % 2 == 0))
                        {
                    cout << "двузначное четное";
                        }
                        else
                        {
                if ((x / 100 == 0) & (x % 2 != 0))
                            {
                    cout << "двузначное не четное";
                            }
                else
                            {
                if (x % 2 == 0)
                                {
                    cout << "трехзначное четное";
                                }
                else
                                {
                    cout << "трехзначное не четное";
                                }
                            }

                        }
                    }
                }
            }
        

        default:
            break;
        }
    }
