// fm_capture_creator.ysc @ L58385
void func_716(int iParam0, int iParam1, bool bParam2, var uParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  struct<3> Var4;
  
  if (*uParam3)
  {
    HUD::GET_HUD_COLOUR(23, &iVar0, &iVar1, &iVar2, &uVar3);
    if (bParam2)
    {
      iParam0->f_696[iParam1] = func_717(&(iParam0->f_663), 32);
    }
    if (iParam0->f_696[iParam1] != -1)
    {
      Var4 = { Global_4718592.f_5742[iParam1 /*346*/] + Vector(0.2f, 0f, 0f) };
      MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
      iParam0->f_663[iParam0->f_696[iParam1]] = GRAPHICS::ADD_DECAL(9118, Var4, 0f, 0f, -1f, 0f, 1f, 0f, 2f, 2f, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), 1f, -1f, true, false, false);
      *uParam3 = 0;
    }
  }
}