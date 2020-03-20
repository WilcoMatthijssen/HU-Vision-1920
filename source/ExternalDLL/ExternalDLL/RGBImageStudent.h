/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include "RGBImage.h"
#include <vector>
class RGBImageStudent : public RGBImage {
private:
	
public:
	std::vector<RGB> pixels;
	RGBImageStudent();
	RGBImageStudent(const RGBImageStudent& other);
	RGBImageStudent(const int width, const int height);
	~RGBImageStudent();

	const std::vector<RGB>& get() const;

	void set(const int width, const int height) override;
	void set(const RGBImageStudent& other);

	void setPixel(int x, int y, RGB pixel) override;
	void setPixel(int i, RGB pixel) override;

	RGB getPixel(int x, int y) const override;
	RGB getPixel(int i) const override;
};