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
		author = CSTRING(TORTeam);
		authors[] = {"Moose, Stim, Anorexican"};
		url = CSTRING(URL);
    };
};
class CfgMods
{
    class PREFIX 
    {
        name = "Old Republic Armory";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "GitHub";
        action = CSTRING(URL);
        description = "Armor from the era of the Old Republic";
    };
};