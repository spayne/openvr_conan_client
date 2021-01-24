#include <openvr.h>

using namespace vr;
int main(int argc, char** argv)
{
    EVRInitError e;
    VR_Init(&e, VRApplication_Scene);

    printf("VR_init returned %s\n", VR_GetVRInitErrorAsEnglishDescription(e));
}