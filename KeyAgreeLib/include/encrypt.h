#pragma once

int encryptFun(const unsigned char* inData, int inLen, unsigned char* &outData, int& outLen, const char* serverID, const char* clientID, int shmKey);

