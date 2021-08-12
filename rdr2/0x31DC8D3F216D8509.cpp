// short_update.ysc @ L51356
void func_1657(var uParam0)
{
  if (!PED::_IS_TEXTURE_VALID(*uParam0))
  {
    return;
  }
  if (func_2913(uParam0, 2))
  {
    return;
  }
  PED::_UPDATE_PED_TEXTURE(*uParam0);
  PED::_RESET_PED_TEXTURE(*uParam0);
  func_2914(uParam0, 2);
}