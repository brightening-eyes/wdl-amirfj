#ifndef _IPLUG_VAMP_PLUGIN_
#define _IPLUG_VAMP_PLUGIN_

/*

IPlugVampPlugin
(c) 2014 amir ramezani
<http://shaberoshan.ir/>

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software in a
   product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#include "IPlugBase.h"
#include "vamp-sdk/vamp-sdk.h"

struct IPlugInstanceInfo
{
//not required
};

using namespace Vamp;

class IPlugVampPlugin: public Plugin
{
public:
IPlugVampPlugin(IPlugInstanceInfo, const char*, const char*, const char*, const char*, const char*, int, size_t, size_t, size_t, size_t);
virtual ~IPlugVampPlugin();
virtual bool initialise(size_t inputChannels, size_t stepSize, size_t blockSize);
virtual void reset();
virtual InputDomain getInputDomain();
virtual size_t getPreferredBlockSize();
virtual size_t getPreferredStepSize();
virtual size_t getMinChannelCount();
virtual size_t getMaxChannelCount();
virtual OutputList getOutputDescriptors();
virtual FeatureSet process(const float *const *inputBuffers, RealTime timestamp);
virtual FeatureSet getRemainingFeatures();
std::string getIdentifier() const;
std::String getName() const;
std::string getDiscription() const;
std::string getMaker() const;
std::string getCopyright() const;
int getPluginVersion() const;
virtual ParameterList getParameterDescriptors() const;
virtual float getParameter(std::string) const;
virtual void setParameter(std::string, float);
virtual ProgramList getPrograms();
virtual std::string getCurrentProgram() const;
virtual void selectProgram(std::string);
private:
std::string plugin_id;
std::string plugin_name;
std::string plugin_discription;
std::string plugin_copyright;
std::string plugin_maker;
int plugin_version;
ParameterList params;
size_t plugin_max_channels;
size_t plugin_min_channels;
size_t plugin_block_size;
size_t plugin_step_size;
};


#endif