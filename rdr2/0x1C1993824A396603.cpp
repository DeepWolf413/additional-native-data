// beat_sharp_shooter.ysc @ L34797
bool func_1002(int iParam0, bool bParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
  {
    if (bParam1)
    {
      return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
    }
    return true;
  }
  return false;
}