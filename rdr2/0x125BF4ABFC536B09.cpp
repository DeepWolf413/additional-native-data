// coachrobberies.ysc @ L10874
void func_326(int iParam0)
{
  int iVar0;
  int iVar1[20];
  int iVar22;

  iVar0 = func_541(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  PED::GET_PED_NEARBY_PEDS(iVar0, &iVar1, -1, -1);
  iVar22 = 0;
  while (iVar22 < iVar1)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar22]))
    {
      if (!PED::IS_PED_INJURED(iVar1[iVar22]))
      {
        if (((((func_542(iVar1[iVar22]) && PED::_0xE4770DA1B8FF4FD1(iVar1[iVar22]) == 0) && PED::_GET_RIDER_OF_MOUNT(iVar1[iVar22], false) == 0) && BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 30f, 0f), ENTITY::GET_ENTITY_COORDS(iVar1[iVar22], true, false)) < 30f) && !PED::IS_PED_FLEEING(iVar1[iVar22])) && !func_108(iVar1[iVar22], 518218985))
        {
          if (iLocal_2477 == 5 && PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(iVar1[iVar22], true, false), 0))
          {
            TASK::TASK_SMART_FLEE_COORD(iVar1[iVar22], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 15f, 0f), 50f, -1, false, 1077936128);
          }
        }
      }
    }
    iVar22++;
  }
}