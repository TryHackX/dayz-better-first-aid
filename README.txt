Better First Aid - server setup (DayZ 1.30 Badlands)

1. Copy keys\TryHackX_New.bikey to your server's "keys" folder.
   (Older versions were signed with TryHackX.bikey - that key is no longer used.)

2. Move the Better_First_Aid_Types.xml file to your config files folder in "mpmissions\YOUR_MAP\YOUR_MOD_TYPES\".
   Now in "mpmissions\YOUR_MAP\cfgeconomycore.xml" add
   <ce folder="YOUR_MOD_TYPES">
       <file name="Better_First_Aid_Types.xml" type="types" />
   </ce>
   Or simply add the contents of Better_First_Aid_Types.xml to your main types file.

3. Set the item spawn to your liking. Defaults (per camouflage, Medic and Military loot):
   Big   - nominal 1 / min 1, Tier3-4 (9 on the map, rarest)
   Small - nominal 2 / min 1, Tier2-3 (18 on the map)
   Mini  - nominal 3 / min 2, Tier1-2 (27 on the map, most common)
   Set nominal to 0 for variants you do not want in loot (admin / trader only).
   I also recommend reducing or disabling the standard first aid pouch (FirstAidKit).
