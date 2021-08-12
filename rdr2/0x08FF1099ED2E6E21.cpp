// fillet_sp.ysc @ L6498
void func_237(var uParam0, int iParam1)
{
  if (func_436(&(uParam0->f_592[iParam1 /*202*/])))
  {
    func_377(&(uParam0->f_592[iParam1 /*202*/]), 1);
  }
  else if (uParam0->f_592[iParam1 /*202*/].f_12 == 0)
  {
    uParam0->f_592[iParam1 /*202*/].f_12 = 1;
    WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_592[iParam1 /*202*/], WEAPON::_0x08FF1099ED2E6E21(uParam0->f_592[iParam1 /*202*/]), false, 0, false, false);
    WEAPON::_HIDE_PED_WEAPONS(uParam0->f_592[iParam1 /*202*/], 2, false);
  }
}