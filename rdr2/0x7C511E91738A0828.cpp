// bankrobberies_simple.ysc @ L586
bool func_18(var uParam0)
{
  if (func_49(uParam0->f_106.f_3, 1))
  {
    EVENT::_0x7C511E91738A0828(uParam0->f_106, Global_35, 41, 0);
    func_15(uParam0->f_106.f_3, 0, 1);
  }
  if (uParam0->f_129)
  {
    if ((func_50() || PED::IS_PED_SHOOTING(Global_35)) || PED::_GET_LASSO_TARGET(Global_35) != 0)
    {
      return true;
    }
  }
  return false;
}