// bjack_launch_sp.ysc @ L2459
bool func_87()
{
  int iVar0;

  if (func_6() == -1)
  {
    if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
    {
      iVar0 = 0;
      while (iVar0 < 10)
      {
        if (Global_1392915[iVar0 /*12*/].f_1 != -1)
        {
          if (func_22(Global_1392915[iVar0 /*12*/].f_4))
          {
            return true;
          }
        }
        iVar0++;
      }
    }
    return false;
  }
  return false;
}