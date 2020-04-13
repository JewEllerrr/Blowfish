#define MAXKEYBYTES 56          /* 448 bits */

unsigned long F(unsigned long x);
void Blowfish_encipher(unsigned long* xl, unsigned long* xr);
void Blowfish_decipher(unsigned long* xl, unsigned long* xr);
void InitializeBlowfish(char key[], short keybytes);
void setRandomKey(char* key, short size);
void correlation(unsigned char* buffer, unsigned char* encrypted, int length);
double countBits(unsigned char* text, int size);