// fm_bj_race_controler.ysc @ L70692
void func_642(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
  int iVar0;
  
  if (Global_2405077.f_2890)
  {
    iVar0 = (iParam2 - 1);
    if (iVar0 < 0)
    {
      iVar0 = (iParam4 - 1);
    }
    if ((func_644(iParam2, bParam3) || func_643(iParam2, bParam3)) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam1) >= 0.9f)
    {
      VEHICLE::_TRANSFORM_VEHICLE_TO_SUBMARINE(iParam1, true);
    }
  }
  *uParam0 = 1;
}