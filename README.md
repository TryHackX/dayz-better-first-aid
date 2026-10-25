# Better First Aid

Medical kits in three sizes (Big, Small and Mini) and nine camo colours, with dedicated slots for vanilla medical items - for DayZ 1.30 (Badlands).

[Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3325298354) · DayZ 1.30 (Badlands) · author: TryHackX

## Support

If the mod is useful for you or your server, you can support further development:

| Currency | Network | Address |
|---|---|---|
| Monero (XMR) | Monero | `45hvee4Jv7qeAm6SrBzXb9YVjb8DkHtFtFh7qkDMxS9zYX3NRi1dV27MtSdVC5X8T1YVoiG8XFiJkh4p9UncqWGxHi4tiwk` |
| Bitcoin (BTC) | Bitcoin (on-chain) | `bc1qncavcek4kknpvykedxas8kxash9kdng990qed2` |
| Ethereum (ETH) | Ethereum (mainnet) | `0xa3d38d5Cf202598dd782C611e9F43f342C967cF5` |

## Features

- **Better First Aid Big / Small / Mini** - 9 colours each (Woodland, Yeger, Atacs, DPM, Flt, Partizan, Splinter, Splinter Dark, Tropic).
- Dedicated attachment slots for vanilla medical items: 2 bandages, epinephrine, morphine, PO-X antidote, painkillers, tetracycline,
  charcoal, water purification and chelating tablets, vitamins, iodine tincture, disinfectant alcohol and spray, thermometer,
  blood test kit, IV start kit, blood and saline bags and 2 gas mask filters (Big and Small 21 slots, Mini 13).
  Slot names use the vanilla translations, so they appear in the language of the game.
- Every empty slot shows an icon of the item that belongs in it (own icon set in the vanilla style).
- Loot balance: better kits are rarer and spawn in higher tiers (Big 1 / tier 3-4, Small 2 / tier 2-3, Mini 3 / tier 1-2).

## Installation

- Add the mod to the `-mod=` parameter of the server **and** the client.
- Copy `keys/TryHackX_New.bikey` to the `keys` folder of the server.
- Add the entries from `Better_First_Aid_Types.xml` to `db/types.xml` of your mission.

## Building from source

1. DayZ Tools → **AddonBuilder**: source directory `soucre`, addon prefix `BetterFirstAid`, output `addons/`.
2. Sign the PBO with your own key (DayZ Tools → DSUtils / DSCreateKey + DSSignFile) and give servers your `.bikey`.
   The release on Steam Workshop is signed with `TryHackX_New`.

## Compatibility

- DayZ 1.30 (Badlands), tested on a dedicated server.
- No other mods required. Works together with MMG NBC Pouch AntyChem Extension & Fix (both add their own slots to the same items).

## License

© TryHackX. You are free to use this mod on your server. Please do not repack or reupload it without permission.
