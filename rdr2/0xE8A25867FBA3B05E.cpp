// native2.ysc @ L53493
bool func_1282()
{
  int iVar0;

  if (!func_956(Global_35, 0))
  {
    return false;
  }
  iVar0 = iLocal_173[3];
  if (!func_956(iVar0, 0))
  {
    return false;
  }
  if (!func_1234(4096))
  {
    PED::_0x8301D87B1B89E219(Global_35, joaat("ACT_GRAPPLE_THROW_FRONT"));
    PED::_0x789DABD18E9024DB(Global_35, 32768, 0);
    func_1235(4096);
    return false;
  }
  else
  {
    PAD::_SET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"), -1f);
    if (!PED::_0x0E99E3BF11BB6367(Global_35))
    {
      return true;
    }
  }
  return false;
}