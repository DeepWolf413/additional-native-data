// fmmc_launcher.ysc @ L490146
char* func_7684(int iParam0, int iParam1, int iParam2)
{
  if (iParam2 == -1)
  {
    return "AW_NONE";
  }
  if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
  {
    VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
  }
  if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, func_7647(iParam0, iParam1)) > 0)
  {
    if (iParam2 < VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, func_7647(iParam0, iParam1)))
    {
      return VEHICLE::GET_MOD_TEXT_LABEL(iParam0, func_7647(iParam0, iParam1), iParam2);
    }
  }
  return "AW_NONE";
}