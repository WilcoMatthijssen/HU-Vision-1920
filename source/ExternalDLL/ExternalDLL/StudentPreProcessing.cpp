#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	return nullptr;
	/*IntensityImage* IntImage = new IntensityImage(image.getWidth(), image.getHeight());
	for (size_t i = 0; i < IntImage->getWidth() * IntImage->getHeight(); ++i) {
		RGB colorPixel = image.getPixel(i);
		IntImage->setPixel(i, (colorPixel.r + colorPixel.g + colorPixel.b) / 3);
	}
	return IntImage;*/
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