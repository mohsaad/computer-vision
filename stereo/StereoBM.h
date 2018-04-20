/**
 * Stereo Block Matcher
 * Uses the Block matching algorithm to match regions and compute a disparity map.
 */

#ifndef __STEREOBM_H__
#define __STEREOBM_H__


#include <opencv2/core.hpp>

class StereoBM
{

	public:
		/**
		 * @brief      Constructs a StereoBM object.
		 */
		StereoBM();

		/**
		 * @brief      Destroys the object.
		 */
		~StereoBM();

		/**
		 * @brief      Sets the left image.
		 *
		 * @param      image  	Left image of our binocular stereo right.
		 */
		void setLeftImage(cv::Mat& image);


		/**
		 * @brief      Sets the right image.
		 *
		 * @param      image 	Right image of our binocular stereo rig.
		 */
		void setRightImage(cv::Mat& image);


	private:
		cv::Mat left;
		cv::Mat right;

		double baselineDistance;

		

};



#endif