// short_update.ysc @ L9471
void func_261(var uParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (!func_254(Global_35) || bParam1)
  {
    func_1010();
    func_981(uParam0, 0);
    iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
    if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      iVar0 = PED::_0x7B5C293238EE4F20(PLAYER::PLAYER_PED_ID());
      Global_36560.f_15 = 0;
    }
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      iVar1 = ENTITY::_0x31FEF6A20F00B963(iVar0);
      if (func_1011(iVar1) && func_1012(iVar1))
      {
        func_1013(ENTITY::GET_ENTITY_MODEL(uParam0->f_16), &iVar2);
        Global_40.f_9319[iVar2 /*4*/].f_3 = 1;
        Global_1425228.f_2[iVar2] = iVar0;
        func_386(0, -1);
      }
    }
    func_1014(*uParam0);
    func_1015(uParam0);
    PED::_0xAE6B68A83ABBE7C0(PLAYER::PLAYER_PED_ID());
    func_972(uParam0, 0);
  }
}