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

#include "IPlugVampPlugin.h"

using namespace std;
using namespace Vamp;

IPlugVampPlugin::IPlugVampPlugin(IPlugInstanceInfo info, const char* id, const char* name, const char* discription, const char* copyright, const char* maker int version, size_t max_channels, size_t min_channels, size_t block_size, size_t step_size):
plugin_id(id),
plugin_name(name),
plugin_discription(discription),
plugin_copyright(copyright),
plugin_maker(maker),
plugin_version(version),
plugin_max_channels(max_channels),
plugin_min_channels(min_channels),
plugin_block_size(block_size),
plugin_step_size(step_size)
{

}

string IPlugVampPlugin::getIdentifier() const
{
return plugin_id;
}

string iPlugVampPlugin::getName() const
{
return plugin_name;
}

string iPlugVampPlugin::getDiscription() const
{
return plugin_discription;
}

string iPlugVampPlugin::getMaker() const
{
return plugin_maker;
}

string iPlugVampPlugin::getCopyright() const
{
return plugin_copyright;
}

int iPlugVampPlugin::getPluginVersion() const
{
return plugin_version;
}
