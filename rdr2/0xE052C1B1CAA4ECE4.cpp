// abigail2_1.ysc @ L72912
void func_2106(int* iParam0)
{
  int iVar0;
  int iVar1[9];
  int iVar11;
  int iVar12;

  iVar0 = 0;
  while (iVar0 < iVar1)
  {
    iVar11 = (-1 + iVar0);
    iVar12 = iVar11;
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
    {
      if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
      {
        iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
        if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
        {
          PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
          func_857(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
        }
      }
    }
    iVar0++;
  }
}