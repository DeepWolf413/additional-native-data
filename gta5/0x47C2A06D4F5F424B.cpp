// am_casino_peds.ysc @ L278659
int func_3572(bool bParam0)
{
  int iVar0;
  struct<3> Var1;
  
  if (bParam0 == func_357())
  {
    return 0;
  }
  iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0, false))
  {
    return 0;
  }
  Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
  if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == -374937855)
  {
    if (Var1.f_2 > -77f)
    {
      return 1;
    }
  }
  return 0;
}