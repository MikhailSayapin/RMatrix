#include <iostream> //Подключает стандартный поток ввода-вывода
#include <stdlib.h> //Подключает возможность работы с циклом

using namespace std;

int main()
{
     int a[4][5];
     for (int x=0; x<4; x++) //Цикл бегает по столбцам 
     {
         for (int y=0; y<5; y++) //Цикл бегает по строкам
         {
             cout << "Enter the " << x+1 << " " << y+1 << " matrix element" << endl; /* Складываем с единицей, 
             потому что массив начинает заполняться с нуля*/
             cin >> a[x][y];
         }
     }
     cout << endl;
     
     for (int x=0; x<4; x++)  
     {
         for (int y=0; y<5; y++) 
         {
             cout << a[x][y] << " ";
         }
         cout << endl;
     }
     
     int M, N;
     cout << "\nEnter N" << endl; //N - строки
     cin >> N;
     cout << "Enter M" << endl; //M - столбцы
     cin >> M;
     cout << endl;
     
      for (int x=0; x<4; x++)  
     {
         if (x==N-1) // N-1 потому, что массив считается с нуля
         {
             continue; /*Если цикл дошёл до N-ной строки, 
             он пропускается оператором continue, а следовательно не выводится*/
         }
         for (int y=0; y<5; y++) 
         {
             if (y==M-1)
             {
                 continue; // То же самое со столбцом
             }
             cout << a[x][y] << " ";
         }
         cout << endl;
     }
     
     return 0; //Выходим из main
}
