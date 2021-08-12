// interactive_campfire.ysc @ L11897
bool func_339(var uParam0)
{
  int iVar0;

  uParam0->f_155 = func_61();
  iVar0 = func_36(uParam0);
  if ((((uParam0->f_156 == -1 || iVar0 == uParam0->f_156) && (uParam0->f_157 == 0 || func_649(uParam0->f_155, uParam0->f_157))) || (uParam0->f_156 == -1 && func_649(uParam0->f_155, uParam0->f_157))) && !(PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)))
  {
    uParam0->f_154 = iVar0;
    return true;
  }
  return false;
}