#include <cstdlib>
#include <iostream>

#include "../ElectronCountedFramesDecompressor.h"

int main() {
	auto exampleName = "FoilHole_12572127_Data_8400797_8400799_20230213_134259_EER.eer";
	Fei::Acquisition::EerReader::EerFile eerFile(exampleName);

	// I think the following will be an empty image, but I don't know yet how to save it as a RAW image...
	//auto bitmap = eerFile.GetFinalImage();
	//auto bitmapImageData = bitmap->GetImageData();

	std::cout << "EerFile initialized!" << std::endl;
	
	// just trying something here
	ElectronCountedFramesDecompressor decompressor(exampleName);

	std::cout << "Decompressor initialized!" << std::endl;

	return EXIT_SUCCESS;
}