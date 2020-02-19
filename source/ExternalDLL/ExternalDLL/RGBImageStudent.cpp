#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	//Create a copy from the other object
	pixels.resize(getWidth() * getHeight());
	for (size_t i = 0; i < pixels.size(); ++i) {
		pixels[i] = other.getPixel(i);
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	//Initialize pixel storage
	pixels.resize(getWidth() * getHeight());
}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	//resize  pixel storage 
	pixels.resize(getWidth() * getHeight());
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	//resize pixel storage and copy the object
	pixels.resize(getWidth() * getHeight());
	for (size_t i = 0; i < pixels.size(); ++i) {
		pixels[i] = other.getPixel(i);
	}
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	pixels[(y * getHeight()) + x] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	//int throwError = 0, e = 1 / throwError;
	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/
	pixels[i] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return pixels[(y * getHeight()) + x];
}

RGB RGBImageStudent::getPixel(int i) const {
	//see setPixel(int i, RGB pixel)
	return pixels[i];
}