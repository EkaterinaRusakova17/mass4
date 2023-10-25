/************************************************************
* Русакова Екатерина Алексеевна, ПИ-231, вариант №16        *
* Share-Link: https://www.onlinegdb.com/online_c++_compiler *
* Тема: Обработка массивов                                  *
*************************************************************/

#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
 
using namespace std;
 
int main() {
  srand(time(NULL) ); //база, генерирующая слцчайное число, используя текущею дату, как параметр, для непредсказуемости результата 
  int numberOfRows = 0;
  int sum = 0;
  int max = 0;
  int sum_max=0;
  cout << "Введите количество строк" << endl;
  cin >> numberOfRows;
  int ** V = new int * [numberOfRows]; //'**' - многочисленное перенаправление(указатель на указателе) 
  for (int numberRowIndex = 0; numberRowIndex < numberOfRows; ++numberRowIndex) {
    V[numberRowIndex] = new int [numberOfRows]; // 'new'- создать в numberRowIndex кол-во numberOfRows чисел
    }
    
    for (int numberRowIndex = 0; numberRowIndex < numberOfRows; ++numberRowIndex) {
      for (int numberColumnIndex = 0; numberColumnIndex < numberOfRows; ++numberColumnIndex) {
        V[numberRowIndex][numberColumnIndex] = rand();
        cout << V[numberRowIndex][numberColumnIndex] << " ";
            
        if (V[numberRowIndex][numberColumnIndex]  == 0 ) {
          ++sum;
        }
        if (V[numberRowIndex][numberColumnIndex] > max) {
          max = V[numberRowIndex][numberColumnIndex];
        }
      }
    cout << endl;
    }
    
    for (int numberRowIndex = 0; numberRowIndex < numberOfRows; ++numberRowIndex) {
      for (int numberColumnIndex = 0; numberColumnIndex < numberOfRows; ++numberColumnIndex) {
        if (V[numberRowIndex][numberColumnIndex]  == max ) {
          ++sum_max;
          }
      }
    }
    cout << "Количество нулевых элементов =" << sum << endl;
    
    if (sum_max > 1) {
      cout << "Количество максимальных элементов =" << sum_max << endl;
      cout << "Максимальный элемент  = " << max << endl;
    } else {
      cout << "Максимальный элемент 1 = " << max << endl;
    }
    for (int numberRowIndex = 0; numberRowIndex < numberOfRows; ++numberRowIndex) {
      delete[]V[numberRowIndex]; // освобождение памяти от новых чисел (24 строка)
    }
    delete [] V; // освобождение памяти
    return 0;
}
