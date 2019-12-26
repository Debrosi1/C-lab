//
//  main.cpp
//  vvp6
//
//  Created by Александр дэброси on 23.12.2019.
//  Copyright © 2019 Александр дэброси. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
  
  int nomer;
        cout << "Ведите номер задания : ";
        cin >> nomer;

        switch (nomer)
        {

        case 1:
        {
            int a,b;
            cout << "Ведите a : ";
            cin >> a;
            b=a%60;
            cout << "  b= : " << b << endl;
        }
        break;
        case 2:
        {
            int k;
            cout << "Ведите k : ";
            cin >> k;
            if (k > 0 && k < 366)
            {
                cout << "  день недели  : " << k % 7 << endl;
            }
            else
            {
                cout << "не соответствие усл " << endl;
            }
        }
        break;
        case 3:
        {
            int k, N;
            cout << "Ведите k,N : ";
            cin >> k >> N;
            if (k > 0 && k < 366 && N > 0 && N < 8)
            {
                cout << "  день недели  : " << (k + N - 2) % 7 + 1 << endl;
            }
            else
            {
                cout << "не соответствие усл " << endl;
            }
        }
        break;
        case 4:
        {
            int a, b, c, N;
            cout << "Ведите a,b,c : ";
            cin >> a >> b >> c;
            N = (a / c)*(b / c);
            cout << " количество квадратов на прямоугольнике, : " << N << endl;
            cout << " площадь незанятой части прямоугольника  : " << (a * b) - (N * c * c) << endl;
        }
        break;
        case 5:
        {
            int a;
            cout << " Ведите год  = ";
            cin >> a;
            if (a > 0)
                cout << "Столетие = " << (a - 1) / 100 + 1 << endl;
            return 0;
        }
        break;

        default:
            cout << "нет такого задания " << endl;
            break;
        }

    }
