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

	class TOR_Havoc_Helmet : H_HelmetB
	{
		author = "Stim & Moose";
		displayName = "[TOR] Havoc Trooper Helmet";
		picture = QPATHTOF(data\ui\tor_ico_generic.paa);
		model = QPATHTOF(data\havoc\helmet\Havoc_Helmet.p3d);
		scope = 2;
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = QPATHTOF(data\havoc\helmet\Havoc_Helmet.p3d);
		
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
	class TOR_Havoc_Helmet_Officer : TOR_Havoc_Helmet
	{
		displayName = "[TOR] Havoc Officer Helmet";
		picture = QPATHTOF(data\ui\tor_ico_generic.paa);
		model = QPATHTOF(data\havoc\helmet\Havoc_Helmet_Officer.p3d);
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = QPATHTOF(data\havoc\helmet\Havoc_Helmet_Officer.p3d);
		
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
	class TOR_Havoc_Vest: V_PlateCarrier1_rgr
	{
		scope = 2;
		author = "Stim & Moose";
		displayName = "[TOR] Havoc Trooper Armor";
		picture = QPATHTOF(data\ui\tor_ico_generic.paa);
		model = QPATHTOF(data\havoc\uniform\Havoc_Uniform.p3d);
		class ItemInfo: VestItem
		{
			uniformModel = QPATHTOF(data\havoc\uniform\Havoc_Uniform.p3d);
			containerClass = "Supply200";
			mass = 65;
			modelSides[] = {6};
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
};