# RGB to Grayscale
## Meetrapport

### Setup
```cpp
typedef unsigned char Intensity;

struct RGB{
    Intensity R;
    Intensity G;
    Intensity B;
};
```

### Werkende code
```cpp
RGB Color{100,100,100};

Intensity Grayscale=(Color.R + Color.G + Color B) / 3;
```
[Godbolt resultaat](https://godbolt.org/z/W58XP5)  
Grayscale bevat het getal 100

### Problemen door overflow
```cpp
RGB Color{100,100,100};

Intensity Grayscale= 0;
Grayscale += Color.R;
Grayscale += Color.G;
Grayscale += Color.B;
Grayscale /= 3;
```
[Godbolt resultaat](https://godbolt.org/z/W58XP5)  
Grayscale bevat het getal 14


### 
```cpp
#include <iostream>
using namespace std;
typedef unsigned char Intensity;
int main() {
	Intensity A = 10;
	Intensity B = 20;

	cout << "Amount of bytes used to store A " << sizeof(A) << " With the type being " << typeid(A).name() << endl;
	cout << "Amount of bytes used to store B " << sizeof(B) << " With the type being " << typeid(A).name() << endl;
	cout << "Amount of bytes used to store A + B " << sizeof(A + B) << " With the type being " << typeid(A + B).name() << endl;
}
```
Resultaat in console
```
Amount of bytes used to store A 1 With the type being unsigned char
Amount of bytes used to store B 1 With the type being unsigned char
Amount of bytes used to store A + B 4 With the type being int
```


