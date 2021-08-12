// saint_denis1.ysc @ L68178
void func_1668(bool bParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
  struct<15> Var0;

  PED::REMOVE_PED_DEFENSIVE_AREA(bParam0, false);
  PED::SET_PED_SPHERE_DEFENSIVE_AREA(bParam0, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iParam4), 1f, 0, 0, 0);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_2525);
  if (bParam5)
  {
    TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
  }
  Var0.f_10 = -1082130432;
  Var0 = 0;
  Var0.f_3 = iParam4;
  if (bParam6)
  {
    Var0.f_4 = 1;
  }
  else
  {
    Var0.f_4 = 2;
  }
  Var0.f_5 = -1;
  Var0.f_7 = 1;
  Var0.f_8 = iParam7;
  Var0.f_10 = iParam8;
  Var0.f_14 = { vParam1 };
  PED::SET_PED_COMBAT_ATTRIBUTES(bParam0, 119, true);
  AICOVERPOINT::TASK_ENTER_COVER(&Var0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_2525);
  TASK::TASK_PERFORM_SEQUENCE(bParam0, iLocal_2525);
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_2525);
}