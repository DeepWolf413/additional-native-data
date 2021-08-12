// beat_injured_rider.ysc @ L9250
bool func_223(var uParam0)
{
  if (func_455(uParam0->f_98))
  {
    PERSCHAR::_0x6759BEE6762E140B(func_456(uParam0->f_98));
  }
  if (!func_457(uParam0->f_98, 1, 0, 0, 0, 0))
  {
    return false;
  }
  else if (func_458(&(uParam0->f_101), uParam0->f_98, 1, 0, 1, 0, 1))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_101, true);
    return true;
  }
  return false;
}