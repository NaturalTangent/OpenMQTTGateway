#ifndef prototypes_h_INCLUDED
#define prototypes_h_INCLUDED

#include <Arduino.h>
#include "ArduinoJson.h" 

void trc(const String& msg);
void trc(int msg);
void trc(unsigned int msg);
void trc(long msg);
void trc(unsigned long msg);
void trc(double msg);
void trc(float msg);
void pub(const char * topic, const char * payload, boolean retainFlag);
void pub(const char * topicori, JsonObject& data);
void pub(const char * topic, const char * payload);
void pub(const char * topic, const String& payload);
void pub(const String& topic, const String& payload);
void pub(const String& topic, const char *  payload);
void pub(const String& topic, int payload);
void pub(const String& topic, float payload);
void pub(const char * topic, float payload);
void pub(const char * topic, int payload);
void pub(const char * topic, unsigned int payload);
void pub(const char * topic, unsigned long payload);
void pub(const char * topic, long payload);
void pub(const char * topic, double payload);
void pub(const String& topic, unsigned long payload);
void revert_hex_data(char * in, char * out, int l);

#endif