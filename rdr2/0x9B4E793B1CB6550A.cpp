// aberdeenpigfarm.ysc @ L4917
void func_210(int iParam0, bool bParam1)
{
  if (!func_248(iParam0))
  {
    return;
  }
  if (bParam1)
  {
    if (!func_249(iParam0, 1024))
    {
      func_250(iParam0, 1024);
      INVENTORY::_0x9B4E793B1CB6550A();
    }
  }
  else if (func_249(iParam0, 1024))
  {
    func_251(iParam0, 1024);
    INVENTORY::_0x9B4E793B1CB6550A();
  }
  func_252(iParam0);
}