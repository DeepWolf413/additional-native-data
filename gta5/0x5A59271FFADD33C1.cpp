// am_mp_hangar.ysc @ L374934
int func_6200(int* iParam0, var uParam1, int iParam2)
{
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_6203(uParam1, iParam2, iParam0), func_6202(uParam1, iParam2, iParam0), func_6201(iParam0, uParam1, iParam2), false, true, 0))
  {
    if (TASK::DOES_SCENARIO_EXIST_IN_AREA(func_6204(uParam1, iParam2, iParam0), 1f, true))
    {
      if ((iParam0->f_15 == -1 || iParam0->f_15 == iParam0->f_14) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_6204(uParam1, iParam2, iParam0)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_6204(uParam1, iParam0->f_15, iParam0)))
      {
        return 1;
      }
    }
  }
  return 0;
}