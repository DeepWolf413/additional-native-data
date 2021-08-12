// fmmc_launcher.ysc @ L652940
void func_11218()
{
  struct<6> Var0;
  int iVar6;
  
  func_5308();
  func_11224(MISC::_GET_GLOBAL_CHAR_BUFFER());
  func_11223(NETWORK::_0x8B0C2964BA471961());
  NETWORK::_CLEAR_LAUNCH_PARAMS();
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1669764.f_3)))
  {
    func_11222();
    func_5861();
    Var0 = { func_11221() };
    iVar6 = -1;
    if (func_11220(&iVar6, &Var0))
    {
      func_5793(iVar6);
    }
    else
    {
      func_5190(&Var0);
    }
    if (func_11219() == 0)
    {
    }
    else if (func_11219() == 1 || func_11219() == 4)
    {
      func_10691();
    }
  }
}