// fm_content_auto_shop_delivery.ysc @ L151966
int func_2490(var uParam0, int iParam1)
{
  var uVar0;
  int iVar1;
  
  if (!bLocal_1268)
  {
    return 0;
  }
  Stack.Push(uParam0);
  Call_Loc(Local_382.f_139.f_2.f_73);
  if (!StackVal)
  {
    return 0;
  }
  PED::GET_GROUP_SIZE(iLocal_1223, &uVar0, &iVar1);
  if (iVar1 > 0)
  {
    return 0;
  }
  if (func_2489(iLocal_1272, iParam1, 1) > func_2491(uParam0))
  {
    return 0;
  }
  return 1;
}