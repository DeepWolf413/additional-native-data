// abigail2_1.ysc @ L19209
void func_291()
{
  struct<15> Var0;
  int iVar17;
  int iVar18;

  Var0 = Global_35;
  Var0.f_12 = 8;
  Var0.f_8 = 0;
  iVar17 = 0;
  while (iVar17 < 27)
  {
    if (func_452(iVar17))
    {
      iVar18 = func_456(iVar17);
      if (ENTITY::DOES_ENTITY_EXIST(iVar18))
      {
        Var0.f_14 = iVar18;
        Var0.f_3 = iVar18;
        MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
      }
    }
    iVar17++;
  }
  Global_1359489.f_58 = -15;
  func_546(&(Global_1359489.f_55));
  if (func_547(joaat("CSTAG_PLAYER_AWAY"), 1))
  {
    func_548(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
  }
}