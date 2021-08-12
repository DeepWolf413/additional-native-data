// short_update.ysc @ L51575
bool func_1663(int iParam0, var uParam1)
{
  if (!PED::_IS_TEXTURE_VALID(*uParam1))
  {
    return false;
  }
  if (!func_2913(uParam1, 2))
  {
    PED::_UPDATE_PED_TEXTURE(*uParam1);
  }
  PED::_OVERRIDE_TEXTURE_ON_PED(iParam0, uParam1->f_5, *uParam1);
  return true;
}