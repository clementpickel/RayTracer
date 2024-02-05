#include <cstdlib>
#include <iostream>

int main() {
    const char* ppmFileName = "image_final.ppm";
    const char* pngFileName = "output.png";

    // Execute the convert command to convert PPM to PNG
    std::string convertCommand = "convert ";
    convertCommand += ppmFileName;
    convertCommand += " ";
    convertCommand += pngFileName;
    system(convertCommand.c_str());

    std::cout << "Conversion complete. PNG file saved as " << pngFileName << std::endl;

    return 0;
}
