// poker_sp.ysc @ L14512
void func_400(var uParam0, var uParam1)
{
  int iVar0;

  if (MINIGAME::_0xE53A308AC35877A8() != -1857735811)
  {
    return;
  }
  MINIGAME::_0x0876326238914A3F();
  iVar0 = 0;
  while (iVar0 < 6)
  {
    if (uParam0->f_280[iVar0])
    {
      func_1023(uParam0, iVar0);
    }
    iVar0++;
  }
  if (uParam1->f_1 == -1766937362)
  {
    func_1024(&(uParam0->f_287), uParam1, uParam1->f_6, &(uParam0->f_1265), &(uParam0->f_1266), &(uParam0->f_1267));
  }
  uParam0->f_287 = { *uParam1 };
}