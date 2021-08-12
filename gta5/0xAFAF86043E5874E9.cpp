// fm_content_auto_shop_delivery.ysc @ L142709
void func_2068(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = PED::_0x32C27A11307B01CC(iParam1, 1);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (!ENTITY::IS_ENTITY_A_PED(iVar0))
  {
    return;
  }
  if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) != iLocal_1272)
  {
    return;
  }
  func_590(24);
  if (!func_59(28))
  {
    if (func_58(iParam1))
    {
      if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1271) < func_56() || PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(bLocal_1271))
      {
        Call_Loc(Local_382.f_55.f_14);
        iVar1 = StackVal;
        func_1877(bLocal_1271, func_56(), 1, iVar1);
      }
    }
  }
}