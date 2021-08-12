// generic_show_mc.ysc @ L3357
bool func_97()
{
  int iVar0;

  iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_TYPE(iVar0) == 1)
  {
    return true;
  }
  return false;
}