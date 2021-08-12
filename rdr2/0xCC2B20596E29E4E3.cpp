// finale2.ysc @ L37387
bool func_817(var uParam0)
{
  PED::SET_PED_CONFIG_FLAG(Global_35, 303, false);
  func_1284();
  PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
  WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Global_35, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
  func_222(0, 0);
  func_167(&(Local_140.f_3));
  PED::SET_PED_CAN_BE_TARGETTED(Local_140, true);
  PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
  if (PED::GET_PED_ACCURACY(Local_140) != 85)
  {
    PED::SET_PED_ACCURACY(Local_140, 85);
  }
  if (PED::_0xCC2B20596E29E4E3(Local_140, 27))
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_140, 27, false);
  }
  func_1279(&(iLocal_1157[3]), 0, 1, 1);
  func_1279(&(iLocal_1157[4]), 0, 1, 1);
  return uParam0->f_607 == uParam0->f_607;
}