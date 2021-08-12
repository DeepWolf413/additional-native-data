// beat_drunk_dueler.ysc @ L44956
bool func_1349(var uParam0, var uParam1, bool bParam2)
{
  int iVar0;

  if (func_3(uParam1->f_58, 32))
  {
    return true;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return false;
  }
  if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
  {
    PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
    if (func_1601(iVar0))
    {
      if (bParam2)
      {
        func_35(&(uParam1->f_58), 32);
      }
      return true;
    }
  }
  return false;
}