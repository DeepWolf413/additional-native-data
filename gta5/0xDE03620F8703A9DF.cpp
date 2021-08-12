// maintransition.ysc @ L142994
int func_1533(bool bParam0, int iParam1, bool bParam2)
{
  float fVar0;
  float fVar1;
  struct<3> Var2;
  float fVar5;
  
  fVar0 = PAD::GET_CONTROL_NORMAL(2, 239);
  fVar1 = PAD::GET_CONTROL_NORMAL(2, 240);
  Var2 = { HUD::_0x5BFF36D6ED83E0AE() };
  fVar5 = 0f;
  if (iParam1 == 0)
  {
    fVar5 = 0.069f;
  }
  if (!bParam0)
  {
  }
  if (bParam2)
  {
  }
  if (func_1532(Var2.x, ((Var2.f_1 + 0.556f) - fVar5), func_1468(0.223f), 0.101f, fVar0, fVar1) && HUD::_0xDE03620F8703A9DF() == -1)
  {
    HUD::_SET_MOUSE_CURSOR_SPRITE(1);
    return 1;
  }
  return 0;
}