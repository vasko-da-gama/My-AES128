#include <iostream>
#include "AesCrypto.h"
using namespace std;
using namespace my_cryptoAes;

int main(int argc, char* argv[])
{
	cout << "+--------------------------------+\n";
	cout << "|----------[ AES TEST ]----------|\n";
	cout << "+--------------------------------+\n";

	AesCrypto aes;
	unsigned char key[] = {0x04, 0x05, 0x06, 0x08, 0x09, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4,0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xb0};
	unsigned char* encrypted = aes.encrypt((unsigned char*) "My name is Dima", key);
	cout << "> Encrypted result: " << encrypted << '\n';

	unsigned char* decrypted = aes.decrypt(encrypted, key);
	cout << "> Decrypted result: " << decrypted << '\n';

	
	return 0;
}