// abigail1.ysc @ L34361
int func_220(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
  int iVar0;
  
  iVar0 = 0;
  if (MISC::IS_PC_VERSION())
  {
    if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
    {
      CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
      iVar0 = 1;
    }
  }
  return iVar0;
}