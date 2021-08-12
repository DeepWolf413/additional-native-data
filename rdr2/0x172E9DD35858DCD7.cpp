// gang2.ysc @ L35763
int func_777(char[4] cParam0)
{
  if ((!func_1269(cParam0, 1, iLocal_303) || !func_1270(1, iLocal_303, cParam0)) || !func_804(iLocal_306, iLocal_303, cParam0, 1))
  {
    return 0;
  }
  if (!func_1362())
  {
    return 0;
  }
  if (func_1363())
  {
    PED::SET_PED_CAN_RAGDOLL(iLocal_315[1], false);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_378[1], false);
    ENTITY::SET_ENTITY_DYNAMIC(iLocal_378[1], true);
    VEHICLE::_0x172E9DD35858DCD7(iLocal_378[1]);
    Local_524 = 3f;
    func_1335(cParam0, iLocal_315[1], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
    func_1245(11, 0);
    func_1246(cParam0, iLocal_315[1], 128);
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(iLocal_315[1], joaat("WEAPON_UNARMED"), true, 0, false, false);
    return 1;
  }
  return 0;
}