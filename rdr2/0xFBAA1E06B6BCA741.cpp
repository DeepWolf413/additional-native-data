// beat_town_trouble.ysc @ L2466
void func_91(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    PED::SET_PED_SHOOT_RATE(Local_14.f_239[iParam0], 500);
  }
  else
  {
    PED::SET_PED_SHOOT_RATE(Local_14.f_239[iParam0], 100);
  }
  WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_14.f_239[iParam0], bParam1);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 27, bParam1);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 30, bParam1);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 35, bParam1);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 38, bParam1);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 67, bParam1);
}