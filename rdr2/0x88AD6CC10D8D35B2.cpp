// abigail21_outro.ysc @ L1110
void func_58(int iParam0)
{
  int iVar0;
  int iVar1;
  bool bVar2;

  iVar0 = func_55(iParam0);
  iVar1 = func_34(iParam0, 0);
  func_80(iParam0, iVar0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
    {
      PED::_0xF008E0BA1FE1D644(1);
      bVar2 = true;
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
    }
    PERSCHAR::_0x7B204F88F6C3D287(iVar1);
    if (bVar2)
    {
      PED::_0x7D4E70A67A651C71(1);
    }
  }
  PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}