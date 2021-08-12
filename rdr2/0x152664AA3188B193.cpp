// mudtown4.ysc @ L91427
void func_2115(var uParam0)
{
  vector3 vVar0;

  vVar0 = { func_1492(uParam0, 0) };
  if (func_441(vVar0))
  {
    return;
  }
  if (!TASK::_0x22CD2C33ED4467A1(uParam0->f_788))
  {
    uParam0->f_788 = TASK::_0x152664AA3188B193(vVar0, 250f, 2, 0);
    func_2695(uParam0);
  }
  else if (!TASK::_0x22CD2C33ED4467A1(uParam0->f_789))
  {
    uParam0->f_789 = uParam0->f_788;
  }
}