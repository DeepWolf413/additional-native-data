// cv_amb_butcher_bleed_deer.ysc @ L3393
bool func_92(var uParam0)
{
  int iVar0;

  if (!uParam0->f_2265)
  {
    func_191(uParam0->f_2, 1);
  }
  iVar0 = func_192(func_19(uParam0));
  func_193(iVar0);
  Global_1327590.f_19622[iVar0 /*14*/].f_5++;
  Global_1327590.f_19622[iVar0 /*14*/].f_7++;
  if (uParam0->f_5)
  {
    func_194();
  }
  func_126(&(uParam0->f_10));
  func_195(uParam0);
  if (uParam0->f_2048 >= 0)
  {
    func_186(uParam0, uParam0->f_2048, 1);
  }
  func_196(uParam0);
  MISC::_0xB08C4FA25BC29DB9(func_31(uParam0->f_2));
  return true;
}