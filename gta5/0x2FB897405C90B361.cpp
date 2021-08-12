// country_race.ysc @ L19017
void func_303(var uParam0)
{
  int iVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_54.f_64, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true), &iVar0);
  TASK::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0, &Var1);
  TASK::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0 + 1, &Var4);
  if (!CAM::IS_SPHERE_VISIBLE(Var1, 3f))
  {
    if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var1, 5f) || func_234(uParam0->f_5, Var1, 1) < 5f)
    {
      func_23(uParam0->f_5, Var1, func_232(Var1, Var4), 0, 1);
      if (!PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_5, false))
      {
        PED::SET_PED_INTO_VEHICLE(*uParam0, uParam0->f_5, -1);
      }
      iLocal_121 = MISC::GET_GAME_TIMER() + 1000;
    }
  }
}