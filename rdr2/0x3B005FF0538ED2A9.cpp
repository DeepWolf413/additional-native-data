// long_update.ysc @ L31631
bool func_1064(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
  if (!PED::_IS_THIS_MODEL_A_HORSE(iVar0))
  {
    return false;
  }
  if (FLOCK::_0x3B005FF0538ED2A9(iParam0) == 1)
  {
    return true;
  }
  return false;
}