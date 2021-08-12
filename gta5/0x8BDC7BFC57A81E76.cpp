// golf.ysc @ L108863
void func_857(int iParam0, var uParam1, int* iParam2, bool bParam3)
{
  int iVar0;
  struct<3> Var1;
  struct<3> Var4;
  var uVar7;
  
  iVar0 = 4;
  Var4 = { iParam2->f_562 };
  if (func_721(Var4))
  {
    Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
  }
  if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(Var4 + Vector(1f, 0f, 0f), &uVar7, &Var1))
  {
    Var4.f_2 = uVar7;
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, Var4 + Vector(0.05f, 0f, 0f), false, false, true);
    func_1163(uParam1, -Var1);
  }
  else
  {
    func_1163(uParam1, 0f, 0f, -1f);
  }
  func_805(Var4, &iVar0, func_557(uParam1), iParam0);
  if (iVar0 == 8 && !bParam3)
  {
    iVar0 = 3;
  }
  func_1164(uParam1, Var4, iVar0);
}