// guama1.ysc @ L49236
bool func_1218(int iParam0, int iParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
    {
      return false;
    }
    else if (PED::_GET_PED_META_OUTFIT_HASH(iParam0) != iParam1)
    {
      PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
      PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
      return false;
    }
  }
  return true;
}