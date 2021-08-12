// fm_bj_race_controler.ysc @ L535854
void func_9005(int iParam0, var uParam1)
{
  if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
  {
    return;
  }
  if (!func_9010(uParam1))
  {
    return;
  }
  PED::SET_PED_DIES_WHEN_INJURED(*uParam1, true);
  PED::SET_PED_KEEP_TASK(*uParam1, true);
  WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam1, false);
  switch (iParam0)
  {
    case 0:
    case 1:
      func_9007(uParam1);
      break;
    
    case 2:
    case 3:
      func_9006(uParam1);
      break;
  }
}