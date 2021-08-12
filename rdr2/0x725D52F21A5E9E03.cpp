// campfire_always.ysc @ L12986
void func_332(int iParam0, int iParam1, bool bParam2)
{
  if (func_589(iParam0, 0))
  {
    func_590(iParam0, 0);
    if (iParam1 != 0)
    {
      COMPENDIUM::COMPENDIUM_GANG_CAMP_FOUND(func_591(iParam0), iParam1);
    }
    if (!bParam2)
    {
      Global_40.f_9571[iParam0 /*10*/].f_8++;
    }
  }
}