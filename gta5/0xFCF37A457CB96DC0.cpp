// pb_homeless.ysc @ L258
int func_3(int iParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
{
  float fVar0;
  struct<3> Var1;
  
  if (fParam5 < 1f)
  {
    fVar0 = (1f + 0.5f);
  }
  else
  {
    fVar0 = (fParam5 + 0.5f);
  }
  Var1 = { (fParam5 + 0.2f), (fParam5 + 0.2f), fVar0 };
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param1), Var1, false, true, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam4)) && func_5(bParam6)) && !PED::IS_PED_RAGDOLL(iParam0)) && !TASK::IS_PED_GETTING_UP(iParam0))
    {
      func_4(iParam0, 1);
      return 1;
    }
    else
    {
      func_4(iParam0, 0);
    }
  }
  return 0;
}