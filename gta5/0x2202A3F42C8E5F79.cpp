// am_armwrestling.ysc @ L111637
void func_732(int* iParam0, bool bParam1)
{
  if (func_738())
  {
    return;
  }
  if (!func_24(PLAYER::PLAYER_ID(), 1, 1))
  {
    bParam1 = false;
  }
  if (!Global_1312816)
  {
    if (bParam1)
    {
      if (!func_737(Global_4456448.f_133963))
      {
        if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
        {
          func_736(1);
          func_734(1, 2);
        }
        func_733(&(iParam0->f_1203), &(iParam0->f_1200));
      }
    }
    Global_1312816 = 1;
  }
}