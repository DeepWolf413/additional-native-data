// startup.ysc @ L392
void func_12(var uParam0)
{
  bool bVar0;

  if (func_48() == -3)
  {
    return;
  }
  bVar0 = COMPAPP::_0x7AF1BB4504EA5ED9();
  if (Global_1956580 != bVar0)
  {
    Global_1956580 = bVar0;
    if (bVar0)
    {
      func_49("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
    }
    else
    {
      *uParam0 = 0;
      func_50(&(uParam0->f_1));
      func_49("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
    }
    func_51();
  }
  if (Global_1956580)
  {
    func_52(uParam0);
  }
  func_51();
}