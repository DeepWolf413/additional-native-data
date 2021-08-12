// feud1.ysc @ L81539
int func_1834(int iParam0, var uParam1)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < vLocal_1256.x)
  {
    if (iVar0 >= *uParam1)
    {
      if (TASK::_0x6EEAD6AF637DA752(vLocal_1256[iVar0 /*3*/], joaat("WORLD_ANIMAL_HORSE_GRAZING_CAMP"), 0.75f, 1) && !PED::IS_ANY_PED_NEAR_POINT(vLocal_1256[iVar0 /*3*/], 1f))
      {
        if (!PED::IS_PED_INJURED(iParam0))
        {
          TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
          ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vLocal_1256[iVar0 /*3*/], fLocal_1311[iVar0], true, false, true);
          TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING_CAMP"), vLocal_1256[iVar0 /*3*/], fLocal_1311[iVar0], 0, false, true, 0, -1f, false);
          *uParam1 = iVar0 + 1;
          return 1;
        }
      }
    }
    iVar0++;
  }
  return 0;
}