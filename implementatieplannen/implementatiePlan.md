Namen:  
Wilco Matthijssen  
Daan Zimmerman van Woesik  

Datum: 20/02/2020


# ImageShell voor RGB en voor Intensity images

## methodes: 


Opslaan per pixel of pointer naar pixelwaarde


2d of 1d


vector of array

## Keuze
Opslaan per pixel in 1d vector


## Implementatie


Binnen de klasse RGBImageStudent en IntensityImageStudent zal dit worden toegevoegd en de bijbehorende set en get functies krijgen. In de constructor en set functies van grootte de vector functie resize gebruikt worden.
```cpp 
class RGBImageStudent{
private:
    std::vector<RGB> pixels;
    ...
};

class IntensityImageStudent{
private:
    std::vector<Intensity> pixels;
    ...
};
```
## Evaluatie

Werkt






