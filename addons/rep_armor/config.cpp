#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        author = ECSTRING(common,TORTeam);
		authors[] = ECSTRING(common,Authors);
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
            "cba_main",
            "A3_data_F",
            "A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
        };
        weapons[]=
        {
            "TOR_RT_Helmet",
            "TOR_RT_Helmet_Alderaan",
            "TOR_RT_Helmet_Alderaan_NCO",
            "TOR_RT_Helmet_Havoc",
            "TOR_RT_Helmet_Havoc_NCO",
            "TOR_RT_Vest",
            "TOR_RT_Vest_Alderaan",
            "TOR_RT_Vest_Havoc",
            "TOR_RT_Vest_Ranger",
            "TOR_RT_Vest_Shadow",
            "TOR_RT_Visor",
            "TOR_RT_Visor_Alderaan",
            "TOR_RT_Visor_Havoc",
            "TOR_RT_Vest",
            "TOR_RT_Vest_Alderaan",
            "TOR_RT_Vest_Havoc"
        };
        units[] = {};
    };
};

#include "CfgWeapons.hpp"