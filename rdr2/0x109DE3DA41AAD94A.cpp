// beat_prison_wagon.ysc @ L5927
bool func_157()
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_1505) && !ENTITY::IS_ENTITY_DEAD(iLocal_1505))
  {
    if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_1505))
    {
      iVar0 = 0;
      while (iVar0 < 7)
      {
        if (func_50(uLocal_1476[iVar0], 0, 1) && PED::IS_PED_IN_VEHICLE(uLocal_1476[iVar0], iLocal_1505, false))
        {
          func_377(uLocal_1476[iVar0], 0, 0);
        }
        iVar0++;
      }
      func_27(&iLocal_1173, 512);
      return true;
    }
  }
  return false;
}