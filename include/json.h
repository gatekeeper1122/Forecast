#pragma once

#include <jansson.h>

typedef struct{
	const char* name;
	int zipcode;
	double lat;
	double lon;
} place_t;

typedef struct{
	char* api_key;
	char* units;
	place_t* places;
} conf_t;

typedef struct{
	int id;
	char* desc;
	double temp;
	int humidity;
	double wind_speed;
	char* name;
	char* country;
	int units;
} weather_t;

double* get_geocoords();
weather_t* get_weather(conf_t conf, int index);
conf_t get_config();
void set_config(conf_t conf);

place_t set_place(place_t place);
