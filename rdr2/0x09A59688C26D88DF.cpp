// abigail2_1.ysc @ L73103
void func_2111(int iParam0, float fParam1)
{
  int iVar0;
  bool bVar1;
  char* sVar2;

  Global_40.f_11095.f_11[iParam0] = fParam1;
  if (iParam0 == 12)
  {
    bVar1 = fParam1 != 0f;
    sVar2 = func_1136(fParam1 < 0f, "rpg_cold", "rpg_hot");
    func_2338(1, bVar1, 1, sVar2);
    func_2339(!bVar1, fParam1 < 0f, bVar1);
    iVar0 = func_918(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
    ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
    func_629();
  }
  else if (iParam0 == 10)
  {
    iVar0 = func_918(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
    ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
  }
  else if (iParam0 == 16)
  {
    iVar0 = func_918(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
    ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
  }
  else if (iParam0 == 13)
  {
  }
}