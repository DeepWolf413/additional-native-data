// fm_mission_controller.ysc @ L697247
void func_11627(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
  if (iParam4 < iParam3)
  {
    WEAPON::SET_PED_AMMO(iLocal_3286, iParam2, iParam4, false);
  }
  else
  {
    WEAPON::SET_PED_AMMO(iLocal_3286, bParam2, iParam3, false);
  }
  if (func_11628(bParam2))
  {
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_3286, true, bParam2);
  }
  else
  {
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_3286, false, bParam2);
  }
  WEAPON::SET_PED_AMMO_TO_DROP(iLocal_3286, 0);
  WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_3286, false);
  PAD::DISABLE_CONTROL_ACTION(0, 57, true);
  PAD::DISABLE_CONTROL_ACTION(0, 56, true);
}