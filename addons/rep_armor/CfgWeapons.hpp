#include "script_component.hpp"

class CfgWeapons
{
	class Itemcore;
	class HeadgearItem;
	class VestItem;
	class UniformItem;
	class NVGoggles;
	class H_HelmetB;
	class V_PlateCarrier1_rgr;
	class U_I_CombatUniform;
	
	class TOR_RT_Helmet: H_HelmetB
	{
		author = "Stim & Moose";
		displayName = "[TOR] Republic Helmet";
		picture = QPATHTOEF(common,data\ui\tor_ico_republic.paa);
		model = QPATHTOF(data\rep_trooper\headgear\base\rep_helmet.p3d);
		scope = 2;

		hiddenSelections[]=
    	{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\base\rep_helmet_co.paa)
		};

		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = QPATHTOF(data\rep_trooper\headgear\base\rep_helmet.p3d);
			hiddenSelections[] = {"camo"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class TOR_RT_Helmet_Alderaan: TOR_RT_Helmet
	{
		displayName = "[TOR] Republic Helmet (Alderaan)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\alderaan_helmet_co.paa)
		};
	};
	class TOR_RT_Helmet_Alderaan_NCO: TOR_RT_Helmet
	{
		displayName = "[TOR] Republic NCO Helmet (Alderaan)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\alderaan_nco_helmet_co.paa)
		};
	};
	class TOR_RT_Helmet_Havoc: TOR_RT_Helmet
	{
		displayName = "[TOR] Republic Helmet (Havoc)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\havoc_helmet_co.paa)
		};
	};
	class TOR_RT_Helmet_Havoc_NCO: TOR_RT_Helmet
	{
		displayName = "[TOR] Republic NCO Helmet (Havoc)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\havoc_nco_helmet_co.paa)
		};
	};
	class TOR_RT_Helmet_Ranger: TOR_RT_Helmet
	{
		displayName = "[TOR] Republic Helmet (Ranger)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\ranger_helmet_co.paa)
		};
	};
	class TOR_RT_Helmet_Shadow: TOR_RT_Helmet
	{
		displayName = "[TOR] Republic Helmet (Shadow)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\headgear\shadow_helmet_co.paa)
		};
	};

	class TOR_RT_Visor: NVGoggles
	{
		author = "Stim & Moose";
		displayname = "[TOR] Republic Visor";
		picture = QPATHTOEF(common,data\ui\tor_ico_republic.paa);
		model= QPATHTOF(data\rep_trooper\accessories\visor\base\rep_visor.p3d);
		scope = 2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\accessories\visor\base\rep_visor_co.paa)
		};

		visionMode[]= 
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {0, 1};

		class ItemInfo
		{
			type = 616;
			mass = 20;
			uniformModel = QPATHTOF(data\rep_trooper\accessories\visor\base\rep_visor.p3d);
			modelOff = QPATHTOF(data\rep_trooper\accessories\visor\base\rep_visor.p3d);
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class TOR_RT_Visor_Alderaan: TOR_RT_Visor
	{
		displayname = "[TOR] Republic Visor (Alderaan)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\accessories\visor\alderaan_visor_co.paa)
		};
	};
	class TOR_RT_Visor_SpecOp: TOR_RT_Visor
	{
		displayname = "[TOR] Republic Visor (Special Forces)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\accessories\visor\specop_visor_co.paa)
		};
	};
	class TOR_RT_Visor_Havoc: TOR_RT_Visor
	{
		displayname = "[TOR] Republic Visor (Havoc)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\accessories\visor\havoc_visor_co.paa)
		};
	};

	class TOR_RT_Vest: V_PlateCarrier1_rgr
	{
		scope = 2;
		author = "Stim & Moose";
		displayName = "[TOR] Republic Armor";
		picture = QPATHTOEF(common,data\ui\tor_ico_republic.paa);
		model = QPATHTOF(data\rep_trooper\uniforms\base\rep_uniform.p3d);

		hiddenSelections[]=
    	{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\uniforms\base\rep_uniform_chest_co.paa),
			QPATHTOF(data\rep_trooper\uniforms\base\rep_uniform_legs_co.paa)
		};

		class ItemInfo: VestItem
		{
			uniformModel = QPATHTOF(data\rep_trooper\uniforms\base\rep_uniform.p3d);
			containerClass = "Supply200";
			mass = 65;
			modelSides[] = {6};
			hiddenSelections[] = {"camo", "camo1"};

			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName = "HitArms";
					armor = 30;
					passThrough = 0.01;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 30;
					passThrough = 0.01;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 30;
					passThrough = 0.01;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.01;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.01;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.01;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.01;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 30;
					passThrough = 0.01;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 30;
					passThrough = 0.01;
				};
			};
		};
	};
	class TOR_RT_Vest_Havoc: TOR_RT_Vest
	{
		displayName = "[TOR] Republic Armor (Havoc)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\uniforms\havoc_chest_co.paa),
			QPATHTOF(data\rep_trooper\uniforms\havoc_legs_co.paa)
		};
	};
	class TOR_RT_Vest_Alderaan: TOR_RT_Vest
	{
		displayName = "[TOR] Republic Armor (Alderaan)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\uniforms\alderaan_chest_co.paa),
			QPATHTOF(data\rep_trooper\uniforms\alderaan_legs_co.paa)
		};
	};
	class TOR_RT_Vest_Ranger: TOR_RT_Vest
	{
		displayName = "[TOR] Republic Armor (Ranger)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\uniforms\ranger_chest_co.paa),
			QPATHTOF(data\rep_trooper\uniforms\ranger_legs_co.paa)
		};
	};
	class TOR_RT_Vest_Shadow: TOR_RT_Vest
	{
		displayName = "[TOR] Republic Armor (Shadow)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\rep_trooper\uniforms\shadow_chest_co.paa),
			QPATHTOF(data\rep_trooper\uniforms\shadow_legs_co.paa)
		};
	};
};