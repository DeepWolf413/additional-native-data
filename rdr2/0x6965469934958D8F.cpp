// abigail2_1.ysc @ L23986
void func_388(int iParam0)
{
  var uVar0;
  int iVar1;
  vector3 vVar2;
  struct<8> Var5;
  struct<8> Var13;
  int iVar21;

  if (!func_182(iParam0))
  {
    return;
  }
  uVar0 = Global_1835011[iParam0 /*74*/].f_8;
  iVar1 = MISC::GET_HASH_KEY(&uVar0);
  if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
  {
    UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
  }
  if (iParam0 == 77 || iParam0 == 38)
  {
    return;
  }
  vVar2 = { Global_1835011[iParam0 /*74*/].f_18 };
  MemCopy(&Var5, {Global_1835011[iParam0 /*74*/].f_8}, 8);
  Var13 = { Var5 };
  StringConCat(&Var13, "_DESC", 64);
  UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
  UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, Global_1835011[iParam0 /*74*/].f_26, joaat("TOAST_LOG_BLIPS"));
}