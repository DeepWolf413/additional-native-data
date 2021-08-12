// short_update.ysc @ L51371
bool func_1658(var uParam0, var uParam1)
{
  if (uParam0->f_1 == 0)
  {
    return true;
  }
  if (func_2913(uParam0, 1))
  {
    if (!func_2913(uParam0, 4))
    {
      PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
      func_2914(uParam0, 4);
    }
  }
  else if (!func_2913(uParam0, 4))
  {
    *uParam0 = PED::_REQUEST_TEXTURE(uParam0->f_2, uParam0->f_3, uParam0->f_4);
    func_2914(uParam0, 4);
  }
  if (!PED::_IS_TEXTURE_VALID(*uParam0))
  {
    return false;
  }
  if (uParam0->f_7 < uParam0->f_6)
  {
    func_2915(uParam0, uParam1, uParam0->f_7);
    uParam0->f_7++;
    return false;
  }
  func_2914(uParam0, 1);
  return true;
}