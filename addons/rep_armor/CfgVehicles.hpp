#include "script_component.hpp"

class CfgVehicles {
	class B_Kitbag_rgr;

	class TOR_RT_Backpack_RTO: B_Kitbag_rgr 
	{
		author = "Stim";
		displayName = "[TOR] Republic RTO Backpack";
		maximumLoad = 200;
		model = QPATHTOF(data\rep_trooper\backpacks\rto\base\rep_rto_pack.p3d);
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[]= 
		{
        	QPATHTOF(data\rep_trooper\backpacks\rto\base\rep_rto_pack_co.paa)
        };
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
	};
	class TOR_RT_Backpack_RTO_Alderaan: TOR_RT_Backpack_RTO 
	{
		displayName = "[TOR] Republic RTO Backpack (Alderaan)";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\rep_trooper\backpacks\rto\alderaan_rto_pack_co.paa)
		};
	};
	class TOR_RT_Backpack_RTO_alt: TOR_RT_Backpack_RTO
	{
		displayName = "[TOR] Republic RTO Backpack (Alt)";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\rep_trooper\backpacks\rto\rep_rto_pack_alt_co.paa)
		};
	};
	class TOR_RT_Backpack_RTO_Havoc: TOR_RT_Backpack_RTO
	{
		displayName = "[TOR] Republic RTO Backpack (Havoc)";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\rep_trooper\backpacks\rto\havoc_rto_pack_co.paa)
		};
	};
};