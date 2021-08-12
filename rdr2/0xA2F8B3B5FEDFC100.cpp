// act_bankrobbery01.ysc @ L13075
void func_265(var uParam0, int iParam1, int iParam2, bool bParam3)
{
  if (bParam3)
  {
    if (!func_754(uParam0, iParam1, iParam2))
    {
      PED::_SET_PED_BODY_COMPONENT(uParam0->f_40[iParam1], func_755(iParam2));
      PED::_UPDATE_PED_VARIATION(uParam0->f_40[iParam1], false, true, true, true, false);
      func_624(uParam0, iParam1, iParam2, 1);
    }
  }
  else if (func_754(uParam0, iParam1, iParam2))
  {
    PED::_0xA2F8B3B5FEDFC100(uParam0->f_40[iParam1], func_755(iParam2));
    PED::_UPDATE_PED_VARIATION(uParam0->f_40[iParam1], false, true, true, true, false);
    func_624(uParam0, iParam1, iParam2, 0);
  }
}