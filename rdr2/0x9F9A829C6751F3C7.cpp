// abigail2_1.ysc @ L37531
void func_885(char[4] cParam0)
{
  if (!func_8(cParam0, 8388608))
  {
    if (func_161(cParam0, func_33(cParam0)) == 5 || func_161(cParam0, func_33(cParam0)) == 6)
    {
      if (!func_206())
      {
        if (func_866(&(cParam0->f_13112)) < 5f)
        {
          PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 0);
        }
      }
      else
      {
        func_213(&(cParam0->f_13112));
      }
    }
  }
  else
  {
    PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
  }
}