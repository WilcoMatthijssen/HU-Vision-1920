/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include "IntensityImage.h"
#include <vector>
/// @brief	Shell for an Intensity image
/// @author Daan Zimmerman van Woesik, Wilco Matthijssen
class IntensityImageStudent : public IntensityImage {
private:
	std::vector<Intensity> pixels;
public:
	/// @brief		Construct an IntensityImageStudent
	///
	/// @details	Constructs an IntensityImageStudent with an image with the size 0 by 0 pixels
	///
	IntensityImageStudent();

	/// @brief		Construct an IntensityImageStudent
	///
	/// @details	Constructs an IntensityImageStudent with the same image as the one given
	///
	/// @param		other	Image that is being copied to create this class.	
	///
	IntensityImageStudent(const IntensityImageStudent &other);

	/// @brief		Construct an IntensityImageStudent
	///
	/// @details	Constructs an IntensityImageStudent with the given height and width
	/// @details	All pixels within the given range are constructed with its default value
	///
	/// @param		width	Width of the image
	/// @param		height	Height of the image
	///
	IntensityImageStudent(const int width, const int height);
	

	
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
	void set(const IntensityImageStudent & other);


	/// @brief		Sets a pixel to a given value
	///
	///	@param		x		X location of pixel to be set
	///	@param		y		Y location of pixel to be set
	///	@param		pixel	sets the pixel to this value
	///
	/// @return		void
	///
	void setPixel(int x, int y, Intensity pixel) override;

	/// @brief		Sets a pixel to a given value
	///
	/// @details	Index is the same as x + y * width
	///
	///	@param		i		Index of pixel to be set
	///	@param		pixel	sets the pixel to this value
	///
	/// @return		void
	///
	void setPixel(int i, Intensity pixel) override;

	/// @brief		Gets the pixel value at the given position
	///
	///	@param		x		X location of pixel to be set
	///	@param		y		Y location of pixel to be set
	///
	/// @return		Intensity
	///
	Intensity getPixel(int x, int y) const;

	/// @brief		Gets the pixel value at the given index
	///
	/// @details	Index is the same as x + y * width
	///
	///	@param		i		Index of pixel to be set
	///
	/// @return		Intensity
	///
	Intensity getPixel(int i) const;
};