// fillet_sp.ysc @ L7220
void func_267(var uParam0, int iParam1)
{
  if (func_5(uParam0, 1024))
  {
    func_296(uParam0, 31, 1, 1);
  }
  else
  {
    func_296(uParam0, 29, 1, 1);
  }
  if (func_497(uParam0, iParam1))
  {
    func_18(&(uParam0->f_592[iParam1 /*202*/].f_60), iParam1);
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_592[iParam1 /*202*/], false, true);
    PED::SET_PED_MONEY(uParam0->f_592[iParam1 /*202*/], 0);
    PED::_0x6569F31A01B4C097(uParam0->f_592[iParam1 /*202*/], 0, 0);
    PED::_0x6569F31A01B4C097(uParam0->f_592[iParam1 /*202*/], 1, 0);
    func_377(&(uParam0->f_592[iParam1 /*202*/]), 32);
  }
}