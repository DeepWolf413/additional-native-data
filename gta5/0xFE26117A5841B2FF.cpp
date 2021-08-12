// am_mp_arcade.ysc @ L12884
int func_181(int iParam0)
{
  int iVar0;
  
  if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && func_35(iParam0))
  {
    return 1;
  }
  iVar0 = 0;
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
  }
  if (iVar0 >= 3)
  {
    return 1;
  }
  return 0;
}