// director_mode.ysc @ L147120
int func_1142(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = (iParam1 + 1 % ENTITY::_GET_ENTITY_BONE_COUNT(iParam0));
  if (iParam2 < 0)
  {
    return iVar0;
  }
  if (func_1145(iParam0, iVar0))
  {
    return iVar0;
  }
  return func_1142(iParam0, iVar0, (iParam2 - 1));
}