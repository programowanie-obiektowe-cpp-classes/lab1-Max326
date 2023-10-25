# Zaliczenie Laboratorium I
W (istniejącym już) pliku `Wektor2D.hpp` napisz implementację klasy `Wektor2D` w taki sposób, aby możliwe było wykonanie poniższego kodu:

```c++
Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.);             // setter
v1.setY(1.);             // setter
double x1 = v1.getX();   // getter
double y1 = v1.getY();   // getter

Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

Wektor2D sum = v1 + v2; // dodawanie wektorów

double prod = v1 * v2; // iloczyn skalarny

```
