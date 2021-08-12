// annesburg.ysc @ L6336
bool func_188(var uParam0)
{
  if (!PED::_0x5E420FF293EE5472())
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
  {
    func_292(uParam0->f_13, 3f, 1, 0);
    uParam0->f_11 = VEHICLE::CREATE_VEHICLE(uParam0->f_12, uParam0->f_13, uParam0->f_16, true, true, false, false);
    ENTITY::_0x9587913B9E772D29(uParam0->f_11, 0);
    VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 1);
    return false;
  }
  if (uParam0->f_17 != 0)
  {
    PROPSET::_0xD80FAF919A2E56EA(uParam0->f_11, uParam0->f_17);
  }
  return true;
}