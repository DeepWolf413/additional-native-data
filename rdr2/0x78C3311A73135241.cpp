// beat_arms_deal.ysc @ L5905
bool func_170(int iParam0)
{
  if (!func_103(*iParam0, 4))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
    {
      if (func_382(iLocal_34) == 0)
      {
        if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_34))
        {
          func_383(iLocal_34);
          func_110(iParam0, 4);
        }
        else
        {
          return true;
        }
      }
    }
  }
  return false;
}