/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include "IntensityImage.h"
#include <vector>
class IntensityImageStudent : public IntensityImage {
private:
	
public:
	std::vector<Intensity> pixels;
	IntensityImageStudent();
	IntensityImageStudent(const IntensityImageStudent &other);
	IntensityImageStudent(const int width, const int height);
	~IntensityImageStudent();

	const std::vector<Intensity> & get() const;
	
	void set(const int width, const int height) override;
	void set(const IntensityImageStudent & other);

	void setPixel(int x, int y, Intensity pixel) override;
	void setPixel(int i, Intensity pixel) override;

	Intensity getPixel(int x, int y) const;
	Intensity getPixel(int i) const;
};