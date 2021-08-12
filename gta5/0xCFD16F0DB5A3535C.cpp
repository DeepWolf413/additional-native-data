// fm_bj_race_controler.ysc @ L566043
void func_9646(var uParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 7)
  {
    if (uParam0->f_8480[iVar0] != -1)
    {
      WATER::_REMOVE_CURRENT_RISE(uParam0->f_8480[iVar0]);
      uParam0->f_8480[iVar0] = -1;
    }
    iVar0++;
  }
  GRAPHICS::_0xCFD16F0DB5A3535C(false);
}