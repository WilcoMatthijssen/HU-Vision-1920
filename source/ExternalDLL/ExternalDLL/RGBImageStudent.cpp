#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent& other)
	: RGBImage(other.getWidth(), other.getHeight()) {
	pixels = other.pixels;
}
const std::vector<RGB>& RGBImageStudent::get() const {
	return pixels;
}

RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	pixels.resize(getWidth() * getHeight());
}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	pixels.resize(getWidth() * getHeight());
}

void RGBImageStudent::set(const RGBImageStudent& other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	pixels.resize(getWidth() * getHeight());
	pixels = other.pixels;
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	pixels[x + (y * getWidth())] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	pixels[i] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return pixels[x + (y * getWidth())];
}

RGB RGBImageStudent::getPixel(int i) const {
	return pixels[i];
}