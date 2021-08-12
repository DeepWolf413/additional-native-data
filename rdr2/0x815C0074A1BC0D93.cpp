// spd_tinyhermit1.ysc @ L3583
void func_119(var uParam0, bool bParam1)
{
  PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_149[0], 1);
  PED::_0x815C0074A1BC0D93(uParam0->f_149[0], 2);
  PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 0, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 50, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 46, false);
  PED::_0xB8DE69D9473B7593(uParam0->f_149[0], 0);
  TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uParam0->f_149[0], false);
  if (bParam1)
  {
    PED::SET_PED_COMBAT_ABILITY(uParam0->f_149[0], 2);
    PED::SET_PED_ACCURACY(uParam0->f_149[0], 100);
    PED::_0xE1B3BE07D3AADDED(uParam0->f_149[0], 4, 1);
  }
  else
  {
    PED::SET_PED_COMBAT_ABILITY(uParam0->f_149[0], 1);
    PED::SET_PED_ACCURACY(uParam0->f_149[0], 10);
    PED::_0xE1B3BE07D3AADDED(uParam0->f_149[0], 4, 0);
  }
}