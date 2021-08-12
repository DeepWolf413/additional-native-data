// fm_mission_controller_2020.ysc @ L799273
int func_14900(var uParam0)
{
  *uParam0 = OBJECT::_GET_PICKUP_HASH(*uParam0);
  switch (*uParam0)
  {
    case joaat("pickup_ammo_bullet_mp"):
    case joaat("pickup_ammo_missile_mp"):
    case joaat("pickup_ammo_grenadelauncher_mp"):
    case joaat("pickup_ammo_pistol"):
    case joaat("pickup_ammo_smg"):
    case joaat("pickup_ammo_rifle"):
    case joaat("pickup_ammo_mg"):
    case joaat("pickup_ammo_shotgun"):
    case joaat("pickup_ammo_sniper"):
    case joaat("pickup_ammo_grenadelauncher"):
    case joaat("pickup_ammo_rpg"):
    case joaat("pickup_ammo_minigun"):
    case 610630637:
    case -1883407879:
    case joaat("pickup_ammo_flaregun"):
    case joaat("pickup_ammo_firework"):
    case -1892342586:
    case 2001257022:
    case joaat("pickup_ammo_hominglauncher"):
      return 1;
      break;
  }
  return 0;
}