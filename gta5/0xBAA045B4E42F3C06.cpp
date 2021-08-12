// fm_content_island_heist.ysc @ L171610
void func_3575(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
  if (Local_792.f_891.f_1[iParam0 /*14*/].f_3 == joaat("winky"))
  {
    if ((uParam2 && uParam3) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iLocal_12605)
    {
      if (func_808(Local_12697.f_795[iParam0 /*6*/]))
      {
        VEHICLE::_SET_VEHICLE_MAX_SPEED(iParam1, 15f);
      }
    }
    else if (func_808(Local_12697.f_795[iParam0 /*6*/]))
    {
      VEHICLE::_SET_VEHICLE_MAX_SPEED(iParam1, -1f);
    }
  }
}