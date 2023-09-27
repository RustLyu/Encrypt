// TestEncrypt.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "../AesEncryptor.h"

#include "Md5.h"

int main()
{
    unsigned char key[16] = { 'L','v','Y','e','K','o','W','P','e','W','p','i','j','s','t','n' };
    Encrypt::AesEncryptor kk(key);
    auto ret = kk.EncryptString("1222222");
    auto outKK = kk.DecryptString("F16F811766D7784F660EA5B56C3364AEF893217833BB6D8DA3137D90B50E9C47");
    Encrypt::MD5 md5Test;
    const char* buffer = "KKKKK";
    md5Test.addFile(R"(C:\Users\zl\Documents\ufab\demo_doctor1@ulab.com\ab39e38c-e188-11ed-978b-0299110ccc45\Photo\Photo.version.json)");
    //md5Test.add(buffer, strlen(buffer));
    std::cout << md5Test.getHash() << std::endl;
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
