// agency_heist2.ysc @ L7128
int func_144(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
  {
    return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 696.426f, -961.0247f, 22.88202f, 739.2752f, -961.2941f, 35.81699f, 30.5f, false, true, 0) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())));
  }
  return 0;
}