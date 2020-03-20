#include "StudentPreProcessing.h"
#include "ImageFactory.h"
#include <iostream>
IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	//return nullptr;

	IntensityImage* IntImage = ImageFactory::newIntensityImage(image.getWidth(), image.getHeight());  //new IntensityImageStudent(image.getWidth(), image.getHeight());
	/*RGB px = image.getPixel(0);
	Intensity result = (px.r * 0.299) + (px.g * 0.587) + (px.b * 0.114);*/
	for (size_t i = 0; i < IntImage->getWidth() * IntImage->getHeight(); ++i) {
		const RGB px = image.getPixel(i);
		/*if (px.r != currPx.r || px.g != currPx.g || px.b != currPx.b) {
	
			px = currPx;
			const auto result = (px.r * 0.299) + (px.g * 0.587) + (px.b * 0.114);
		}*/
		IntImage->setPixel(i, (px.r * 0.299) + (px.g * 0.587) + (px.b * 0.114));
		
	}
	return IntImage;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}