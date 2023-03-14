#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[]=
        {
            "TOR_Havoc_Helmet",
            "TOR_Havoc_Helmet_Officer",
            "TOR_Havoc_Vest"
        };
        requiredAddons[]=
        {
            "cba_main",
            "A3_data_F",
            "A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
        };
		author = ECSTRING(common,TORTeam);
		authors[] = {"Moose, Stim, Anorexican"};
		url = ECSTRING(main,URL);
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"