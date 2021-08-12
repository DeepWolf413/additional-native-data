// item_bait_herbivore.ysc @ L1196
void func_40(var uParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_35, "bait01", 0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (uParam0->f_1 == joaat("CONSUMABLE_HERBIVORE_BAIT"))
    {
      iVar1 = 0;
    }
    else
    {
      iVar1 = 1;
    }
    EVENT::_0x36D0F2BA2C0D9BDE(iVar0, iVar1);
    OBJECT::_0xCAAF2BCCFEF37F77(iVar0, 4);
    if (func_57() == -1)
    {
      Global_1392040.f_9 = iVar0;
    }
  }
  func_82(336, 0);
}