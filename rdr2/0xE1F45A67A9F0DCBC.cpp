// finale1.ysc @ L66799
void func_1560(bool bParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_35))
  {
    if (func_198())
    {
    }
    func_511(1);
    if (INVENTORY::_0x7C7E4AB748EA3B07())
    {
      INVENTORY::_0xE1F45A67A9F0DCBC(5);
    }
    else
    {
      INVENTORY::_0xE1F45A67A9F0DCBC(1);
    }
    func_2161(Global_35, &Global_1347400);
    if (bParam1)
    {
      func_2162();
    }
    if (bParam0)
    {
      WEAPON::REMOVE_ALL_PED_WEAPONS(Global_35, true, true);
    }
  }
}