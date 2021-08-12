// agency_heist1.ysc @ L1763
void func_38(int iParam0)
{
  if (!PED::IS_PED_INJURED(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
  {
    PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
    PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
  }
}