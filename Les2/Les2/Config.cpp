#include "Config.h"

Config::Config(const string & name) {
	this->name = name;
}

void Config::put(const string & key, const string & value) {
	keys.push_back(key);
	values.push_back(value);
}

string & Config::operator[](const string & key) {
	for (int i = 0; i < keys.size(); i++) {
		if (key == keys[i]) {
			return values[i];
		}
	} 
	return NOKEY;
}

ostream & operator<<(ostream & os, const Config & config) {
	os << "#ConfigFile " << config.name << endl;
	for (int i = 0; i < config.keys.size(); i++) {
		os << " key:" << config.keys[i] << ":" << config.values[i] << endl;
	}
	return os;
}
