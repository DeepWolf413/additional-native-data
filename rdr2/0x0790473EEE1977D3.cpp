// native_son1.ysc @ L38382
bool func_869(var uParam0)
{
  if (func_33(uParam0) < 4)
  {
    if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_149) && !PROPSET::_DOES_PROPSET_EXIST(iLocal_284))
    {
      PROPSET::_0xD80FAF919A2E56EA(iLocal_149, iLocal_273);
      iLocal_284 = PROPSET::_GET_VEHICLE_PROPSET(iLocal_149);
      iLocal_284 = iLocal_284;
    }
  }
  else if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_149) && !PROPSET::_DOES_PROPSET_EXIST(iLocal_285))
  {
    PROPSET::_0xD80FAF919A2E56EA(iLocal_149, iLocal_274);
    iLocal_285 = PROPSET::_GET_VEHICLE_PROPSET(iLocal_149);
    iLocal_285 = iLocal_285;
  }
  if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_LIGHT_PROPSET(iLocal_149) && !PROPSET::_DOES_PROPSET_EXIST(iLocal_286))
  {
    PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(iLocal_149, iLocal_275);
    iLocal_286 = PROPSET::_GET_VEHICLE_LIGHT_PROPSET(iLocal_149);
    iLocal_286 = iLocal_286;
  }
  if (PROPSET::_0x155B2FBE72D7D1D0(iLocal_149) && PROPSET::_0x0790473EEE1977D3(iLocal_149))
  {
    return true;
  }
  return false;
}