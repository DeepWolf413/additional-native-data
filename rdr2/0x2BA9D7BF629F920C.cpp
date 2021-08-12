// act_bankrobbery01.ysc @ L61627
bool func_1989(var uParam0, int iParam1, float fParam2, int iParam3)
{
  float fVar0;

  fVar0 = 40f;
  if (func_1975(iParam1))
  {
    return false;
  }
  if (*uParam0 & 65536 != 0)
  {
    fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
  }
  if (fParam2 < fVar0)
  {
    if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
    {
      if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
      {
        return true;
      }
    }
  }
  return false;
}