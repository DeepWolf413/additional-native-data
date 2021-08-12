// fmmc_launcher.ysc @ L593715
void func_9446(int iParam0)
{
  int iVar0;
  struct<14> Var1;
  int iVar22;
  char* sVar23;
  int iVar27;
  
  if (NETWORK::_0x71DC455F5CD1C2B1(iParam0))
  {
    iVar0 = NETWORK::_0x3855FB5EB2C5E8B2(iParam0);
    Var1.f_13 = iVar0;
    iVar22 = func_9448(&Var1);
    if (func_9447(iVar22))
    {
      func_7255(iVar22, &sVar23, &iVar27);
      if (func_792(*iParam0))
      {
        if (func_11165() >= 13 && func_11165() <= 19)
        {
          NETWORK::_0x0D77A82DC2D0DA59(iParam0, &sVar23);
        }
      }
    }
  }
}