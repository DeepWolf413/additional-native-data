// freemode.ysc @ L884538
void func_13241(int iParam0)
{
  if (*iParam0 != func_8754())
  {
    switch (func_8754())
    {
      case 0:
        if (!func_120(&Global_2463963))
        {
          HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
          HUD::REMOVE_MULTIPLAYER_BANK_CASH();
        }
        break;
      
      case 1:
      case 2:
        if (!func_120(&Global_2463963))
        {
          HUD::SET_MULTIPLAYER_WALLET_CASH();
          HUD::SET_MULTIPLAYER_BANK_CASH();
        }
        break;
    }
    *iParam0 = func_8754();
  }
}