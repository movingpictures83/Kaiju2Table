#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "Kaiju2TablePlugin.h"

void Kaiju2TablePlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void Kaiju2TablePlugin::run() {}

void Kaiju2TablePlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "kaiju2table";
myCommand += " ";
myCommand += " -t "+PluginManager::addPrefix(myParameters["nodedump"])+" ";
myCommand += " -n "+PluginManager::addPrefix(myParameters["namesdump"])+"  -e ";
myCommand += " -r "+myParameters["level"]+" ";
myCommand += " -o "+outputfile + " "+PluginManager::addPrefix(myParameters["kaijuout"]);
 system(myCommand.c_str());
}

PluginProxy<Kaiju2TablePlugin> Kaiju2TablePluginProxy = PluginProxy<Kaiju2TablePlugin>("Kaiju2Table", PluginManager::getInstance());
