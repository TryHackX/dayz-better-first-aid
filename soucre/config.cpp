class CfgPatches
{
	class BetterFirstAid
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Consumables",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers",
			"DZ_Gear_Crafting"
		};
	};
};
class CfgMods
{
	class BetterFirstAid
	{
		dir="BetterFirstAid";
		name="BetterFirstAid";
		credits="TryHackX, Kooftt";
		author="TryHackX";
		authorID="76561199846115789";
		version="1.1";
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BetterFirstAid/scripts/4_World"
				};
			};
			class imageSets
			{
				files[]=
				{
					"BetterFirstAid/gui/imagesets/bfa_icons.imageset"
				};
			};
		};
	};
};

class CfgSlots
{
	class Slot_GasMaskFilter;
	class Slot_GasMaskFilter1: Slot_GasMaskFilter
	{
		name="GasMaskFilter1";
	};
	class Slot_GasMaskFilter2: Slot_GasMaskFilter
	{
		name="GasMaskFilter2";
	};
	class Slot_MedicalBandage1
	{
		name="MedicalBandage1";
		displayName="#STR_CfgMedicalBandage0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_MedicalBandage2
	{
		name="MedicalBandage2";
		displayName="#STR_CfgMedicalBandage0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_MedicalEpinephrine
	{
		name="MedicalEpinephrine";
		displayName="#STR_CfgVehicles_Epinephrine0";
		ghostIcon="set:bfa_icons image:epinephrine";
	};
	class Slot_MedicalMorphine
	{
		name="MedicalMorphine";
		displayName="#STR_CfgVehicles_Morphine0";
		ghostIcon="set:bfa_icons image:morphine";
	};
	class Slot_MedicalAntiChemInjector
	{
		name="MedicalAntiChemInjector";
		displayName="#STR_AntiChemInjector0";
		ghostIcon="set:bfa_icons image:antichem";
	};
	class Slot_MedicalTetracyclineAntibiotics
	{
		name="MedicalTetracyclineAntibiotics";
		displayName="#STR_CfgVehicles_TetracyclineAntibiotics0";
		ghostIcon="set:bfa_icons image:tetracycline";
	};
	class Slot_MedicalPainkillerTablets
	{
		name="MedicalPainkillerTablets";
		displayName="#STR_CfgVehicles_PainkillerTablets0";
		ghostIcon="set:bfa_icons image:painkillers";
	};
	class Slot_MedicalVitaminBottle
	{
		name="MedicalVitaminBottle";
		displayName="#STR_CfgVehicles_VitaminBottle0";
		ghostIcon="set:bfa_icons image:vitamins";
	};
	class Slot_MedicalBloodBag
	{
		name="MedicalBloodBag";
		displayName="#STR_CfgVehicles_BloodBagFull0";
		ghostIcon="set:bfa_icons image:bloodbag";
	};
	class Slot_MedicalSalineBag
	{
		name="MedicalSalineBag";
		displayName="#STR_CfgVehicles_SalineBag0";
		ghostIcon="set:bfa_icons image:salinebag";
	};
	class Slot_MedicalCharcoalTablets
	{
		name="MedicalCharcoalTablets";
		displayName="#STR_CfgVehicles_CharcoalTablets0";
		ghostIcon="set:bfa_icons image:charcoal";
	};
	class Slot_MedicalPurificationTablets
	{
		name="MedicalPurificationTablets";
		displayName="#STR_CfgVehicles_PurificationTablets0";
		ghostIcon="set:bfa_icons image:purification";
	};
	class Slot_MedicalIodineTincture
	{
		name="MedicalIodineTincture";
		displayName="#STR_IodineTincture0";
		ghostIcon="set:bfa_icons image:iodine";
	};
	class Slot_MedicalDisinfectantAlcohol
	{
		name="MedicalDisinfectantAlcohol";
		displayName="#STR_CfgVehicles_DisinfectantAlcohol0";
		ghostIcon="set:bfa_icons image:alcohol";
	};
	class Slot_MedicalChelatingTablets
	{
		name="MedicalChelatingTablets";
		displayName="#STR_CfgVehicles_ChelatingTablets0";
		ghostIcon="set:bfa_icons image:chelating";
	};
	class Slot_MedicalDisinfectantSpray
	{
		name="MedicalDisinfectantSpray";
		displayName="#STR_CfgVehicles_DisinfectantSpray0";
		ghostIcon="set:dayz_inventory image:disinfectant";
	};
	class Slot_MedicalThermometer
	{
		name="MedicalThermometer";
		displayName="#STR_CfgVehicles_Thermometer0";
		ghostIcon="set:bfa_icons image:thermometer";
	};
	class Slot_MedicalBloodTestKit
	{
		name="MedicalBloodTestKit";
		displayName="#STR_CfgVehicles_BloodTestKit0";
		ghostIcon="set:bfa_icons image:bloodtest";
	};
	class Slot_MedicalStartKitIV
	{
		name="MedicalStartKitIV";
		displayName="#STR_CfgVehicles_StartKitIV0";
		ghostIcon="set:bfa_icons image:ivkit";
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class GasMask_Filter: Inventory_Base
	{
		inventorySlot[]+=
		{
			"GasMaskFilter1",
			"GasMaskFilter2"
		};
	};
	class GasMask_Filter_Improvised: Inventory_Base
	{
		inventorySlot[]+=
		{
			"GasMaskFilter1",
			"GasMaskFilter2"
		};
	};
	class BandageDressing: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBandage1",
			"MedicalBandage2"
		};
	};
	class Morphine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalMorphine"
		};
	};
	class Epinephrine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalEpinephrine"
		};
	};
	class AntiChemInjector: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalAntiChemInjector"
		};
	};
	class VitaminBottle: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalVitaminBottle"
		};
	};
	class PainkillerTablets: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalPainkillerTablets"
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalTetracyclineAntibiotics"
		};
	};
	class BloodBagIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodBag"
		};
	};
	class BloodBagEmpty: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodBag"
		};
	};
	class BloodBagFull: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodBag"
		};
	};
	class SalineBagIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalSalineBag"
		};
	};
	class SalineBag: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalSalineBag"
		};
	};
	class CharcoalTablets: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalCharcoalTablets"
		};
	};
	class PurificationTablets: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalPurificationTablets"
		};
	};
	class IodineTincture: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalIodineTincture"
		};
	};
	class DisinfectantAlcohol: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalDisinfectantAlcohol"
		};
	};
	class ChelatingTablets: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalChelatingTablets"
		};
	};
	class DisinfectantSpray: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalDisinfectantSpray"
		};
	};
	class Thermometer: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalThermometer"
		};
	};
	class BloodTestKit: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodTestKit"
		};
	};
	class StartKitIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalStartKitIV"
		};
	};
	class FirstAidKit;
	class Better_First_Aid_Basic_Big: FirstAidKit
	{
		scope = 0;
		displayName = "Better Big First Aid Pouch";
		descriptionShort = "A big better textile pouch used to carry and protect first aid kit, mainly from the weather exposure.";
		model = "\dz\gear\containers\FirstAidKit.p3d";
		weight = 375;
		itemSize[] = {3, 3};
		itemsCargoSize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		CargoCategory = "Medical";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Woodland.paa" };
		attachments[] =
		{
			"GasMaskFilter1",
			"GasMaskFilter2",
			"MedicalBandage1",
			"MedicalBandage2",
			"MedicalEpinephrine",
			"MedicalMorphine",
			"MedicalAntiChemInjector",
			"MedicalPainkillerTablets",
			"MedicalTetracyclineAntibiotics",
			"MedicalCharcoalTablets",
			"MedicalPurificationTablets",
			"MedicalChelatingTablets",
			"MedicalVitaminBottle",
			"MedicalIodineTincture",
			"MedicalDisinfectantAlcohol",
			"MedicalDisinfectantSpray",
			"MedicalThermometer",
			"MedicalBloodTestKit",
			"MedicalStartKitIV",
			"MedicalBloodBag",
			"MedicalSalineBag"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] =
					{
						{ 1, { "DZ\gear\containers\data\firsaidkit.rvmat" } },
						{ 0.69999999, { "DZ\gear\containers\data\firsaidkit_damage.rvmat" } },
						{ 0.5, { "DZ\gear\containers\data\firsaidkit_damage.rvmat" } },
						{ 0.30000001, { "DZ\gear\containers\data\firsaidkit_destruct.rvmat" } },
						{ 0, { "DZ\gear\containers\data\firsaidkit_destruct.rvmat" } }
					};
				};
			};
		};
	};
	class Better_First_Aid_Big_Woodland : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Woodland)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Woodland.paa" };
	};	
	class Better_First_Aid_Big_Yeger : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Yeger)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Yeger.paa" };
	};
	class Better_First_Aid_Big_Atacs : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Atacs)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Atacs.paa" };
	};	
	class Better_First_Aid_Big_DPM : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (DPM)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_DPM.paa" };
	};	
	class Better_First_Aid_Big_Flt : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Flt)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Flt.paa" };
	};	
	class Better_First_Aid_Big_Partizan : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Partizan)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Partizan.paa" };
	};	
	class Better_First_Aid_Big_Splinter : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Splinter)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Splinter.paa" };
	};	
	class Better_First_Aid_Big_Splinterdark : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Splinterdark)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Splinterdark.paa" };
	};	
	class Better_First_Aid_Big_Tropic : Better_First_Aid_Basic_Big
	{
		scope = 2;
		displayName = "Better Big First Aid Pouch (Tropic)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Big_Tropic.paa" };
	};

	class Better_First_Aid_Basic_Small: FirstAidKit
	{
		scope = 0;
		displayName = "Better Small First Aid Pouch";
		descriptionShort = "A small better textile pouch used to carry and protect first aid kit, mainly from the weather exposure.";
		model = "\dz\gear\containers\FirstAidKit.p3d";
		weight = 250;
		itemSize[] = {3, 2};
		itemsCargoSize[] = {};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Woodland.paa" };
		attachments[] =
		{
			"GasMaskFilter1",
			"GasMaskFilter2",
			"MedicalBandage1",
			"MedicalBandage2",
			"MedicalEpinephrine",
			"MedicalMorphine",
			"MedicalAntiChemInjector",
			"MedicalPainkillerTablets",
			"MedicalTetracyclineAntibiotics",
			"MedicalCharcoalTablets",
			"MedicalPurificationTablets",
			"MedicalChelatingTablets",
			"MedicalVitaminBottle",
			"MedicalIodineTincture",
			"MedicalDisinfectantAlcohol",
			"MedicalDisinfectantSpray",
			"MedicalThermometer",
			"MedicalBloodTestKit",
			"MedicalStartKitIV",
			"MedicalBloodBag",
			"MedicalSalineBag"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] =
					{
						{ 1, { "DZ\gear\containers\data\firsaidkit.rvmat" } },
						{ 0.69999999, { "DZ\gear\containers\data\firsaidkit_damage.rvmat" } },
						{ 0.5, { "DZ\gear\containers\data\firsaidkit_damage.rvmat" } },
						{ 0.30000001, { "DZ\gear\containers\data\firsaidkit_destruct.rvmat" } },
						{ 0, { "DZ\gear\containers\data\firsaidkit_destruct.rvmat" } }
					};
				};
			};
		};
	};
	class Better_First_Aid_Small_Woodland : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Woodland)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Woodland.paa" };
	};	
	class Better_First_Aid_Small_Yeger : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Yeger)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Yeger.paa" };
	};	
	class Better_First_Aid_Small_Atacs : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Atacs)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Atacs.paa" };
	};	
	class Better_First_Aid_Small_DPM : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (DPM)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_DPM.paa" };
	};	
	class Better_First_Aid_Small_Flt : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Flt)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Flt.paa" };
	};	
	class Better_First_Aid_Small_Partizan : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Partizan)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Partizan.paa" };
	};	
	class Better_First_Aid_Small_Splinter : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Splinter)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Splinter.paa" };
	};	
	class Better_First_Aid_Small_Splinterdark : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Splinterdark)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Splinterdark.paa" };
	};	
	class Better_First_Aid_Small_Tropic : Better_First_Aid_Basic_Small
	{
		scope = 2;
		displayName = "Better Small First Aid Pouch (Tropic)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Small_Tropic.paa" };
	};

	class Better_First_Aid_Basic_Mini: FirstAidKit
	{
		scope = 0;
		displayName = "Better Mini First Aid Pouch";
		descriptionShort = "A mini better textile pouch used to carry and protect first aid kit, mainly from the weather exposure.";
		model = "\dz\gear\containers\FirstAidKit.p3d";
		weight = 210;
		itemSize[] = {2, 2};
		itemsCargoSize[] = {};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {25, 20};
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Woodland.paa" };
		attachments[] =
		{
			"GasMaskFilter1",
			"MedicalBandage1",
			"MedicalBandage2",
			"MedicalEpinephrine",
			"MedicalMorphine",
			"MedicalAntiChemInjector",
			"MedicalPainkillerTablets",
			"MedicalTetracyclineAntibiotics",
			"MedicalCharcoalTablets",
			"MedicalPurificationTablets",
			"MedicalChelatingTablets",
			"MedicalVitaminBottle",
			"MedicalIodineTincture"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] =
					{
						{ 1, { "DZ\gear\containers\data\firsaidkit.rvmat" } },
						{ 0.69999999, { "DZ\gear\containers\data\firsaidkit_damage.rvmat" } },
						{ 0.5, { "DZ\gear\containers\data\firsaidkit_damage.rvmat" } },
						{ 0.30000001, { "DZ\gear\containers\data\firsaidkit_destruct.rvmat" } },
						{ 0, { "DZ\gear\containers\data\firsaidkit_destruct.rvmat" } }
					};
				};
			};
		};
	};
	class Better_First_Aid_Mini_Woodland : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Woodland)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Woodland.paa" };
	};	
	class Better_First_Aid_Mini_Yeger : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Yeger)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Yeger.paa" };
	};	
	class Better_First_Aid_Mini_Atacs : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Atacs)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Atacs.paa" };
	};	
	class Better_First_Aid_Mini_DPM : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (DPM)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_DPM.paa" };
	};	
	class Better_First_Aid_Mini_Flt : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Flt)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Flt.paa" };
	};	
	class Better_First_Aid_Mini_Partizan : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Partizan)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Partizan.paa" };
	};	
	class Better_First_Aid_Mini_Splinter : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Splinter)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Splinter.paa" };
	};	
	class Better_First_Aid_Mini_Splinterdark : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Splinterdark)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Splinterdark.paa" };
	};	
	class Better_First_Aid_Mini_Tropic : Better_First_Aid_Basic_Mini
	{
		scope = 2;
		displayName = "Better Mini First Aid Pouch (Tropic)";
		hiddenSelectionsTextures[] = { "BetterFirstAid\data\Better_First_Aid_Mini_Tropic.paa" };
	};
};

