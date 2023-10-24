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
  srand(time(NULL) );
  int number_of_rows = 0;
  int sum = 0;
  int max = 0;
  int sum_max=0;
  cout << "Введите количество строк" << endl;
  cin >> number_of_rows;
  int ** V = new int * [number_of_rows];
  for (int i = 0; i < number_of_rows; ++i) {
    V[i] = new int [number_of_rows];
    }
    
    for (int i = 0; i < number_of_rows; ++i) {
      for (int j = 0; j < number_of_rows; ++j) {
        V[i][j] = rand();
        cout << V[i][j] << " ";
            
        if (V[i][j]  == 0 ) {
          ++sum;
        }
        if (V[i][j] > max) {
          max = V[i][j];
        }
      }
    cout << endl;
    }
    
    for (int i = 0; i < number_of_rows; ++i) {
      for (int j = 0; j < number_of_rows; ++j) {
        if (V[i][j]  == max ) {
          ++sum_max;
          }
      }
    }
    cout << "Количество нулевых элементов =" << sum << endl;
    
    if (sum_max > 1) {
      cout << "Количество максимальных элементов =" << sum_max << endl;
      cout << "Максимальный элемент  = " << max << endl;
    }
    else
      cout << "Максимальный элемент 1 = " << max << endl;
    
    for (int i = 0; i < number_of_rows; ++i) {
      delete[]V[i];
    }
    delete [] V;
    return 0;
}
