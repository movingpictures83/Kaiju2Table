#ifndef KAIJU2TABLEPLUGIN_H
#define KAIJU2TABLEPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class Kaiju2TablePlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Kaiju2Table";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
