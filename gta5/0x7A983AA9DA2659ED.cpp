// am_mp_casino_nightclub.ysc @ L489811
void func_6952(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
  int iVar0;
  int iVar1;
  struct<2> Var2;
  var* uVar6;
  var* uVar7;
  var* uVar8;
  
  iVar0 = DATAFILE::_0xDBF860CF1DB8E599(0);
  if (!func_6288(iVar0))
  {
    return;
  }
  if (!func_6956(iParam0) || !func_6955(iParam0, iParam1))
  {
    return;
  }
  func_6289(&iVar1, iVar0, func_6954());
  StringCopy(&Var2, "track", 16);
  StringIntConCat(&Var2, iParam1, 16);
  func_6289(&uVar6, iVar1, &Var2);
  uVar7 = DATAFILE::DATADICT_GET_ARRAY(uVar6, "timems");
  uVar8 = DATAFILE::DATADICT_GET_ARRAY(uVar6, "intype");
  *uParam3 = func_6953(uVar7, iParam2, 0, 1);
  *uParam4 = func_6953(uVar8, iParam2, 0, 1);
}