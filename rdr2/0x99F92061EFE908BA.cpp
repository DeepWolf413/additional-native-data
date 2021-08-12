// act_caunc_rustling_invite.ysc @ L2116
bool func_36(var uParam0)
{
  if (!func_6(uParam0->f_1, 0))
  {
    return false;
  }
  if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
  {
    if ((((!PED::_0x68821369A2CEADD5(uParam0->f_1, func_164(uParam0)) && !func_28(&(uParam0->f_31), 64)) && !STREAMING::_0x99F92061EFE908BA()) && !func_98(Global_1935630, 16384)) && uParam0->f_6)
    {
      uParam0->f_6 = 0;
      func_37(&(uParam0->f_31), 64, 1);
      PED::_0xD65FDC686A031C83(uParam0->f_1, func_164(uParam0), 0.5f);
    }
    else if (func_28(&(uParam0->f_31), 64))
    {
      if (!func_156(uParam0->f_1, -2017877118))
      {
        func_37(&(uParam0->f_31), 64, 0);
        return true;
      }
    }
  }
  return false;
}