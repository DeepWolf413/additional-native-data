// native_son2.ysc @ L71934
void func_1946(var uParam0, bool bParam1)
{
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 <= (*uParam0 - 1))
  {
    if (func_425((*uParam0)[iVar0 /*26*/], 0))
    {
      if (bParam1)
      {
        CAM::_0x986F7A51EE3E1F92((*uParam0)[iVar0 /*26*/], 1);
      }
      else
      {
        CAM::_0x5B637D6F3B67716A((*uParam0)[iVar0 /*26*/]);
      }
    }
    iVar0++;
  }
}