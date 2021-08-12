// native1.ysc @ L91054
bool func_2550(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    return false;
  }
  iVar0 = 0;
  while (iVar0 <= (*iParam0 - 1))
  {
    if (ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
    {
    }
    else
    {
      iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((*iParam0)[iVar0]);
      if (PED::_0x550CB89DD7F4FA3D(iVar1, iParam1))
      {
        return true;
      }
    }
    iVar0++;
  }
  return false;
}