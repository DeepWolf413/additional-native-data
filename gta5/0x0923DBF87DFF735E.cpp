// cablecar.ysc @ L1989
void func_43(var uParam0)
{
  int iVar0;
  float fVar1;
  struct<3> Var2;
  
  if (iLocal_210 == 0)
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < (uParam0->f_46 - 2))
  {
    fVar1 = 0f;
    while (fVar1 < 1f)
    {
      Var2 = { func_15(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), fVar1, 1) };
      HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var2);
      fVar1 = (fVar1 + 0.125f);
    }
    SYSTEM::WAIT(0);
    iVar0++;
  }
  HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(*(uParam0[(uParam0->f_46 - 1) /*3*/]));
  iLocal_210 = 0;
}