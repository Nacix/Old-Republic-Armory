#include "script_component.hpp"

class CfgPatches
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
		author = ECSTRING(common,TORTeam);
		authors[] = ECSTRING(common,Authors);
		url = CSTRING(URL);
    };
};
class CfgMods
{
    class PREFIX 
    {
        name = "Old Republic Project";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "Discord";
        action = CSTRING(URL);
        description = "Armor from the era of the Old Republic";
    };
};