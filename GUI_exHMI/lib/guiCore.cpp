#include "guiCore.h"
#include <spiffs.h>

char hmi_Image="HMI_3D_print";

void guiEngin::ImageLoad(spiffs *SSD, char* FileName)
{ SSD=SPIFFS_open(FileName, "r");


}
