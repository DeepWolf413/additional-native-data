// fm_bj_race_controler.ysc @ L285991
void func_3892(var uParam0, bool bParam1)
{
  if (bParam1)
  {
    if (!MISC::IS_BIT_SET(uParam0->f_5390, true))
    {
      VEHICLE::_0x41290B40FA63E6DA(1);
      MISC::SET_BIT(&(uParam0->f_5390), true);
    }
  }
  else if (MISC::IS_BIT_SET(uParam0->f_5390, true))
  {
    VEHICLE::_0x41290B40FA63E6DA(0);
    MISC::CLEAR_BIT(&(uParam0->f_5390), true);
  }
}