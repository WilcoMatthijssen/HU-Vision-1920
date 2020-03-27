#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	//Doesnt need to do anything.
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) 
	//Change width and height variables
	:	IntensityImage(other.getWidth(), other.getHeight()) {

	//Reserve the size of the given picture fill with the given image contents using other.getPixel().
	pixels.reserve(getWidth() * getHeight());
	for (size_t i = 0; i < getWidth() * getHeight(); ++i) {
		pixels.push_back(other.getPixel(i));
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	//Resize the vector to make the pixels availlable to setPixel()
	//getPixel() will return the default value.
	pixels.resize(getWidth() * getHeight());
}


void IntensityImageStudent::set(const int width, const int height) {
	//Change width and height variables
	IntensityImage::set(width, height);
	//Resize the vector to make the pixels availlable to setPixel()
	//getPixel() will return the default value.
	pixels.resize(getWidth() * getHeight());
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	//Change width and height variables
	IntensityImage::set(other.getWidth(), other.getHeight());

	//Clear vector, reserve the incoming size of picture and fill it with the given image (other).
	pixels.clear();
	pixels.reserve(getWidth() * getHeight());
	for (size_t i = 0; i < getWidth() * getHeight(); ++i) {
		pixels.push_back(other.getPixel(i));
	}
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	//Calculate given 2d coordinate to a 1d position in the vector and replace it by the given value (pixel).
	pixels[x + (y * getWidth())] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	//Set pixel at index i to the given value (pixel).
	pixels[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	//Calculate given 2d coordinate to a 1d position in the vector and return it.
	return pixels[x + (y * getWidth())];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	//Return the pixel value at the given position.
	return pixels[i];
}