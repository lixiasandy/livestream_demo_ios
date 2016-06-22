#import "UCloudGLProgram.h"

// Base classes
#import "UCloudGPUImageContext.h"
#import "UCloudGPUImageOutput.h"
#import "UCloudGPUImageView.h"
#import "UCloudGPUImageVideoCamera.h"
#import "UCloudGPUImageStillCamera.h"
#import "UCloudGPUImageMovie.h"
#import "UCloudGPUImagePicture.h"
#import "UCloudGPUImageRawDataInput.h"
#import "UCloudGPUImageRawDataOutput.h"
#import "UCloudGPUImageMovieWriter.h"
#import "UCloudGPUImageFilterPipeline.h"
#import "UCloudGPUImageTextureOutput.h"
#import "UCloudGPUImageFilterGroup.h"
#import "UCloudGPUImageTextureInput.h"
#import "UCloudGPUImageUIElement.h"
#import "UCloudGPUImageBuffer.h"
#import "UCloudGPUImageFramebuffer.h"
#import "UCloudGPUImageFramebufferCache.h"

// Filters
#import "UCloudGPUImageFilter.h"
#import "UCloudGPUImageTwoInputFilter.h"
#import "UCloudGPUImagePixellateFilter.h"
#import "UCloudGPUImagePixellatePositionFilter.h"
#import "UCloudGPUImageSepiaFilter.h"
#import "UCloudGPUImageColorInvertFilter.h"
#import "UCloudGPUImageSaturationFilter.h"
#import "UCloudGPUImageContrastFilter.h"
#import "UCloudGPUImageExposureFilter.h"
#import "UCloudGPUImageBrightnessFilter.h"
#import "UCloudGPUImageLevelsFilter.h"
#import "UCloudGPUImageSharpenFilter.h"
#import "UCloudGPUImageGammaFilter.h"
#import "UCloudGPUImageSobelEdgeDetectionFilter.h"
#import "UCloudGPUImageSketchFilter.h"
#import "UCloudGPUImageToonFilter.h"
#import "UCloudGPUImageSmoothToonFilter.h"
#import "UCloudGPUImageMultiplyBlendFilter.h"
#import "UCloudGPUImageDissolveBlendFilter.h"
#import "UCloudGPUImageKuwaharaFilter.h"
#import "UCloudGPUImageKuwaharaRadius3Filter.h"
#import "UCloudGPUImageVignetteFilter.h"
#import "UCloudGPUImageGaussianBlurFilter.h"
#import "UCloudGPUImageGaussianBlurPositionFilter.h"
#import "UCloudGPUImageGaussianSelectiveBlurFilter.h"
#import "UCloudGPUImageOverlayBlendFilter.h"
#import "UCloudGPUImageDarkenBlendFilter.h"
#import "UCloudGPUImageLightenBlendFilter.h"
#import "UCloudGPUImageSwirlFilter.h"
#import "UCloudGPUImageSourceOverBlendFilter.h"
#import "UCloudGPUImageColorBurnBlendFilter.h"
#import "UCloudGPUImageColorDodgeBlendFilter.h"
#import "UCloudGPUImageScreenBlendFilter.h"
#import "UCloudGPUImageExclusionBlendFilter.h"
#import "UCloudGPUImageDifferenceBlendFilter.h"
#import "UCloudGPUImageSubtractBlendFilter.h"
#import "UCloudGPUImageHardLightBlendFilter.h"
#import "UCloudGPUImageSoftLightBlendFilter.h"
#import "UCloudGPUImageColorBlendFilter.h"
#import "UCloudGPUImageHueBlendFilter.h"
#import "UCloudGPUImageSaturationBlendFilter.h"
#import "UCloudGPUImageLuminosityBlendFilter.h"
#import "UCloudGPUImageCropFilter.h"
#import "UCloudGPUImageGrayscaleFilter.h"
#import "UCloudGPUImageTransformFilter.h"
#import "UCloudGPUImageChromaKeyBlendFilter.h"
#import "UCloudGPUImageHazeFilter.h"
#import "UCloudGPUImageLuminanceThresholdFilter.h"
#import "UCloudGPUImagePosterizeFilter.h"
#import "UCloudGPUImageBoxBlurFilter.h"
#import "UCloudGPUImageAdaptiveThresholdFilter.h"
#import "UCloudGPUImageUnsharpMaskFilter.h"
#import "UCloudGPUImageBulgeDistortionFilter.h"
#import "UCloudGPUImagePinchDistortionFilter.h"
#import "UCloudGPUImageCrosshatchFilter.h"
#import "UCloudGPUImageCGAColorspaceFilter.h"
#import "UCloudGPUImagePolarPixellateFilter.h"
#import "UCloudGPUImageStretchDistortionFilter.h"
#import "UCloudGPUImagePerlinNoiseFilter.h"
#import "UCloudGPUImageJFAVoronoiFilter.h"
#import "UCloudGPUImageVoronoiConsumerFilter.h"
#import "UCloudGPUImageMosaicFilter.h"
#import "UCloudGPUImageTiltShiftFilter.h"
#import "UCloudGPUImage3x3ConvolutionFilter.h"
#import "UCloudGPUImageEmbossFilter.h"
#import "UCloudGPUImageCannyEdgeDetectionFilter.h"
#import "UCloudGPUImageThresholdEdgeDetectionFilter.h"
#import "UCloudGPUImageMaskFilter.h"
#import "UCloudGPUImageHistogramFilter.h"
#import "UCloudGPUImageHistogramGenerator.h"
#import "UCloudGPUImageHistogramEqualizationFilter.h"
#import "UCloudGPUImagePrewittEdgeDetectionFilter.h"
#import "UCloudGPUImageXYDerivativeFilter.h"
#import "UCloudGPUImageHarrisCornerDetectionFilter.h"
#import "UCloudGPUImageAlphaBlendFilter.h"
#import "UCloudGPUImageNormalBlendFilter.h"
#import "UCloudGPUImageNonMaximumSuppressionFilter.h"
#import "UCloudGPUImageRGBFilter.h"
#import "UCloudGPUImageMedianFilter.h"
#import "UCloudGPUImageBilateralFilter.h"
#import "UCloudGPUImageCrosshairGenerator.h"
#import "UCloudGPUImageToneCurveFilter.h"
#import "UCloudGPUImageNobleCornerDetectionFilter.h"
#import "UCloudGPUImageShiTomasiFeatureDetectionFilter.h"
#import "UCloudGPUImageErosionFilter.h"
#import "UCloudGPUImageRGBErosionFilter.h"
#import "UCloudGPUImageDilationFilter.h"
#import "UCloudGPUImageRGBDilationFilter.h"
#import "UCloudGPUImageOpeningFilter.h"
#import "UCloudGPUImageRGBOpeningFilter.h"
#import "UCloudGPUImageClosingFilter.h"
#import "UCloudGPUImageRGBClosingFilter.h"
#import "UCloudGPUImageColorPackingFilter.h"
#import "UCloudGPUImageSphereRefractionFilter.h"
#import "UCloudGPUImageMonochromeFilter.h"
#import "UCloudGPUImageOpacityFilter.h"
#import "UCloudGPUImageHighlightShadowFilter.h"
#import "UCloudGPUImageFalseColorFilter.h"
#import "UCloudGPUImageHSBFilter.h"
#import "UCloudGPUImageHueFilter.h"
#import "UCloudGPUImageGlassSphereFilter.h"
#import "UCloudGPUImageLookupFilter.h"
#import "UCloudGPUImageAmatorkaFilter.h"
#import "UCloudGPUImageMissEtikateFilter.h"
#import "UCloudGPUImageSoftEleganceFilter.h"
#import "UCloudGPUImageAddBlendFilter.h"
#import "UCloudGPUImageDivideBlendFilter.h"
#import "UCloudGPUImagePolkaDotFilter.h"
#import "UCloudGPUImageLocalBinaryPatternFilter.h"
#import "UCloudGPUImageColorLocalBinaryPatternFilter.h"
#import "UCloudGPUImageLanczosResamplingFilter.h"
#import "UCloudGPUImageAverageColor.h"
#import "UCloudGPUImageSolidColorGenerator.h"
#import "UCloudGPUImageLuminosity.h"
#import "UCloudGPUImageAverageLuminanceThresholdFilter.h"
#import "UCloudGPUImageWhiteBalanceFilter.h"
#import "UCloudGPUImageChromaKeyFilter.h"
#import "UCloudGPUImageLowPassFilter.h"
#import "UCloudGPUImageHighPassFilter.h"
#import "UCloudGPUImageMotionDetector.h"
#import "UCloudGPUImageHalftoneFilter.h"
#import "UCloudGPUImageThresholdedNonMaximumSuppressionFilter.h"
#import "UCloudGPUImageHoughTransformLineDetector.h"
#import "UCloudGPUImageParallelCoordinateLineTransformFilter.h"
#import "UCloudGPUImageThresholdSketchFilter.h"
#import "UCloudGPUImageLineGenerator.h"
#import "UCloudGPUImageLinearBurnBlendFilter.h"
#import "UCloudGPUImageGaussianBlurPositionFilter.h"
#import "UCloudGPUImagePixellatePositionFilter.h"
#import "UCloudGPUImageTwoInputCrossTextureSamplingFilter.h"
#import "UCloudGPUImagePoissonBlendFilter.h"
#import "UCloudGPUImageMotionBlurFilter.h"
#import "UCloudGPUImageZoomBlurFilter.h"
#import "UCloudGPUImageLaplacianFilter.h"
#import "UCloudGPUImageiOSBlurFilter.h"
#import "UCloudGPUImageLuminanceRangeFilter.h"
#import "UCloudGPUImageDirectionalNonMaximumSuppressionFilter.h"
#import "UCloudGPUImageDirectionalSobelEdgeDetectionFilter.h"
#import "UCloudGPUImageSingleComponentGaussianBlurFilter.h"
#import "UCloudGPUImageThreeInputFilter.h"
#import "UCloudGPUImageFourInputFilter.h"
#import "UCloudGPUImageWeakPixelInclusionFilter.h"
#import "UCloudGPUImageColorConversion.h"
#import "UCloudGPUImageColourFASTFeatureDetector.h"
#import "UCloudGPUImageColourFASTSamplingOperation.h"

#import "UCloudGPUImageBeautyFilter.h"
