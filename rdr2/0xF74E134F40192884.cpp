// cv_amb_butcher_bleed_deer.ysc @ L9692
bool func_325(var uParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;

  if (!func_51(iParam2))
  {
    return true;
  }
  if (func_114(iParam2))
  {
    return false;
  }
  iVar0 = func_100(uParam0->f_7);
  if (!func_241(iParam2, iVar0))
  {
    func_360(iParam2, iVar0, uParam0->f_3, -1);
    return false;
  }
  iVar1 = func_361(iParam2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
  {
    return false;
  }
  uParam0->f_107[iParam1 /*113*/].f_5 = iVar1;
  POPULATION::_0xF74E134F40192884(iVar1, 1);
  func_56(iParam2, 45, 1);
  return true;
}