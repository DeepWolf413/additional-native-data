// rampage1.ysc @ L885
int func_5(int* iParam0, struct<6> Param1, int iParam7, int iParam8)
{
  if (iParam8 == 1)
  {
    if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_363.f_27[0], Param1.f_2, true))
    {
      return 0;
    }
  }
  if (!func_6(iParam0, Param1.f_2, Param1.f_5, iParam7))
  {
    return 0;
  }
  if (Param1.f_1 == 1)
  {
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, false);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, false);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, false);
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param1.f_2, 2f, false, false);
    PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 0);
  }
  else
  {
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, true);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, true);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, true);
    PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), false);
  }
  TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
  PED::SET_PED_MONEY(*iParam0, 0);
  return 1;
}