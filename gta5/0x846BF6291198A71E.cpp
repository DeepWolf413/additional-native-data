// am_mp_drone.ysc @ L8309
int func_273(int iParam0)
{
  float fVar0;
  
  fVar0 = ENTITY::_GET_ENTITY_PHYSICS_HEADING(iParam0);
  return SYSTEM::ROUND(fVar0);
}