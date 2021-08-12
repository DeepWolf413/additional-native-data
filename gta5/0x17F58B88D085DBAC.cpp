// jewelry_heist.ysc @ L125232
int func_955(int iParam0, struct<3> Param1, float fParam4, float fParam5, float fParam6, float fParam7)
{
  struct<3> Var0;
  struct<3> Var3;
  
  Var0.x = fParam4;
  Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) + Vector(-1f, 0f, 0f) };
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    if (!func_913(iParam0, 242628503))
    {
      ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
      TASK::OPEN_SEQUENCE_TASK(&iLocal_2614);
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, Param1, fParam5, 40000, fParam6, 2, Var0, 40000f);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_2614);
      TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_2614);
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_2614);
    }
    else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, true) < fParam6 && func_956(iParam0, fParam4, fParam7))
    {
      return 1;
    }
  }
  return 0;
}