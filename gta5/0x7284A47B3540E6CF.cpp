// fmmc_launcher.ysc @ L593682
void func_9445(struct<13> Param0, char[4] cParam13, int iParam14, int iParam15)
{
  if (!NETWORK::NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(&Param0) && !NETWORK::NETWORK_HAS_INVITED_GAMER(&Param0))
  {
    if (!func_9450(Param0))
    {
      if (iParam15 == 0)
      {
        if (Global_1839089.f_404 >= 31)
        {
          func_9460(iParam15);
        }
        Global_1839089[Global_1839089.f_404 /*13*/] = { Param0 };
        Global_1839089.f_404++;
      }
      if (iParam15 == 1)
      {
        if (Global_1838684.f_404 >= 31)
        {
          func_9460(iParam15);
        }
        Global_1838684[Global_1838684.f_404 /*13*/] = { Param0 };
        Global_1838684.f_404++;
      }
      func_8652(*iParam14, &Param0, cParam13, 0, 3, 1, 0);
    }
  }
  else
  {
    func_9446(&Param0);
  }
}