// stage_coach.ysc @ L2567
bool func_64(var uParam0, int iParam1, int iParam2)
{
  if (!uParam0->f_331)
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_DEAD_OR_DYING(iParam1, true))
  {
    return false;
  }
  if (iParam2 == -2)
  {
    iParam2 = 1;
  }
  STREAMING::_0x198B85CC3C7A4593(iParam1, iParam2);
  return true;
}