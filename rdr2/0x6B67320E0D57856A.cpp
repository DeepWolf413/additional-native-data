// beat_dead_bodies.ysc @ L6820
bool func_224()
{
  int iVar0;

  PED::_0x6B67320E0D57856A(Global_35, &iVar0, 2, 0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return ENTITY::IS_ENTITY_DEAD(iVar0);
  }
  return false;
}