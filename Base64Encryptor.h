#ifndef SRC_UTILS_BASE64_ENCRYPTOR_H
#define SRC_UTILS_BASE64_ENCRYPTOR_H

#include <string>
#include "Common.h"

namespace Encrypt
{
	static const std::string base64_chars =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789+/";

	class AES;
	UDEF_Class Base64Encryptor
	{
	public:
		Base64Encryptor();
		~Base64Encryptor();
	public:
		std::string base64_encode(unsigned char const*, unsigned int len);
		std::string base64_decode(std::string const& s);
		bool is_base64(unsigned char c);
	};
}
#endif        // SRC_UTILS_AES_ENCRYPTOR_H