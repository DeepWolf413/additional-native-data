// act_hunting_2.ysc @ L9726
bool func_230()
{
  struct<4> Var0;
  int iVar4;
  int iVar5;

  if (PED::_0x608BC6A6AACD5036(&Var0, Local_15.f_307[2], 4, 0))
  {
    iVar5 = Var0.f_3;
    iVar4 = ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iVar5, 0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar5) && iVar4 == joaat("CARRIABLE_XL_BUFFALO_SKIN"))
    {
      return true;
    }
  }
  return false;
}