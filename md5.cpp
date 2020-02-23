 #include "Poco/MD5Engine.h"
 #include "Poco/DigestStream.h"

 #include <iostream>

//int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)

int main(int argc, char** argv)
 {
     std::cout << "ha\n" << std::endl;
     Poco::MD5Engine md5;
     Poco::DigestOutputStream ds(md5);
     ds << "abcdefghijklmnopqrstuvwxyz";
     ds.close();
     std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;
     return 0;
 }