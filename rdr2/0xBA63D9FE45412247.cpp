// beat_foot_robbery.ysc @ L17533
void func_542(var uParam0, int iParam1)
{
  if (!uParam0->f_8)
  {
    if (func_95(&(uParam0->f_4), uParam0->f_7))
    {
      if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_528[iParam1], false))
      {
        func_706(iLocal_528[iParam1]);
        PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iParam1], 2);
        PED::SET_PED_COMBAT_RANGE(iLocal_528[iParam1], 0);
        uParam0->f_8 = 1;
      }
    }
  }
}