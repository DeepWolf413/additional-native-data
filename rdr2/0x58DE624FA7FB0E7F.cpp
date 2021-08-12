// rcm_poisoned_well3.ysc @ L13267
void func_512(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  func_513(uParam0[iParam1 /*11*/]);
  if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), (uParam0[iParam1 /*11*/])->f_6))
  {
    PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), (uParam0[iParam1 /*11*/])->f_6);
  }
  iVar0 = OBJECT::_0x58DE624FA7FB0E7F((uParam0[iParam1 /*11*/])->f_6);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    OBJECT::_0xAAACF33CBF9B990A((uParam0[iParam1 /*11*/])->f_6, iVar1);
    iVar1++;
  }
  OBJECT::_0x8462BE2341A55B6F((uParam0[iParam1 /*11*/])->f_6);
  ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[iParam1 /*11*/])->f_6));
}