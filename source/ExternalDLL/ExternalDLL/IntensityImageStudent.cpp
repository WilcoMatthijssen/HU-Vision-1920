#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) 
	:	IntensityImage(other.getWidth(), other.getHeight()) {
	pixels = other.pixels;
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	pixels.resize(getWidth() * getHeight());
}


void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	pixels.resize(getWidth() * getHeight());
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	pixels.resize(getWidth() * getHeight());
	pixels = other.pixels;
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	pixels[x + (y * getWidth())] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	pixels[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return pixels[x + (y * getWidth())];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return pixels[i];
}