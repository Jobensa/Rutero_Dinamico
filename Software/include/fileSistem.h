#ifndef FILESISTEM_H
#define FILESISTEM_H
#include "user.h"
#include "FS.h"
#include "SPIFFS.h"

bool initFiles(void);
void listDir(fs::FS &fs, const char * dirname, uint8_t levels);

void writeFile(fs::FS &fs, const char * path, const char * message);
void appendFile(fs::FS &fs, const char * path, const char * message);
void readFile(fs::FS &fs, const char * path);
void renameFile(fs::FS &fs, const char * path1, const char * path2);

void deleteFile(fs::FS &fs, const char * path);
void testFileIO(fs::FS &fs, const char * path);



#endif