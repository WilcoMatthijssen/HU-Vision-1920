/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include "RGBImage.h"
#include <vector>
/// @brief	Shell for an RGB image
/// @author Daan Zimmerman van Woesik, Wilco Matthijssen
class RGBImageStudent : public RGBImage {
private:
	std::vector<RGB> pixels;
public:
	/// @brief		Construct an RGBImageStudent
	///
	/// @details	Constructs an RGBImageStudent with an image with the size 0 by 0 pixels
	///
	RGBImageStudent();

	/// @brief		Construct an RGBImageStudent
	///
	/// @details	Constructs an RGBImageStudent with the same image as the one given
	///
	/// @param		other	Image that is being copied to create this class.	
	///
	RGBImageStudent(const RGBImageStudent& other);

	/// @brief		Construct an RGBImageStudent
	///
	/// @details	Constructs an RGBImageStudent with the given height and width
	/// @details	All pixels within the given range are constructed with its default value
	///
	/// @param		width	Width of the image
	/// @param		height	Height of the image
	///
	RGBImageStudent(const int width, const int height);

	/// @brief		Sets the image size.
	///
	/// @details	All pixels set before this function will remain that fit within the given range and the rest gets removed or pixels with a default value get added.
	///
	///	@param		width	Width desired for the image
	/// @param		height	Height desired for the image
	///
	/// @return		void
	///
	void set(const int width, const int height) override;

	/// @brief		Sets the image to the given image.
	///
	///	@param		other	Image that is being copied to this object.
	///
	/// @return		void
	///
	void set(const RGBImageStudent& other);

	/// @brief		Sets a pixel to a given value
	///
	///	@param		x		X location of pixel to be set
	///	@param		y		Y location of pixel to be set
	///	@param		pixel	sets the pixel to this value
	///
	/// @return		void
	///
	void setPixel(int x, int y, RGB pixel) override;

	/// @brief		Sets a pixel to a given value
	///
	/// @details	Index is the same as x + y * width
	///
	///	@param		i		Index of pixel to be set
	///	@param		pixel	sets the pixel to this value
	///
	/// @return		void
	///
	void setPixel(int i, RGB pixel) override;

	/// @brief		Gets the pixel value at the given position
	///
	///	@param		x		X location of pixel to be set
	///	@param		y		Y location of pixel to be set
	///
	/// @return		RGB
	///
	RGB getPixel(int x, int y) const override;

	/// @brief		Gets the pixel value at the given index
	///
	/// @details	Index is the same as x + y * width
	///
	///	@param		i		Index of pixel to be set
	///
	/// @return		RGB
	///
	RGB getPixel(int i) const override;
};