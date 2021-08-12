// carsteal3.ysc @ L92825
int func_455(int iParam0, int iParam1)
{
  struct<3> Var0;
  
  if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
    if (((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 29) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 60)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, true)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 16f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
    {
      return 1;
    }
  }
  return 0;
}