// armenian1.ysc @ L6056
void func_101(char* sParam0, int iParam1, int iParam2, int iParam3)
{
  struct<50> Var0;
  int iVar65;
  
  Var0 = 12;
  Var0.f_13 = 12;
  Var0.f_26 = 12;
  Var0.f_39 = 9;
  Var0.f_49 = 9;
  func_102(iParam1, &Var0, iParam3);
  iVar65 = 0;
  while (iVar65 < 12)
  {
    CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
    iVar65++;
  }
  iVar65 = 0;
  while (iVar65 < 9)
  {
    if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
    {
      CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
    }
    else
    {
      CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
    }
    iVar65++;
  }
}