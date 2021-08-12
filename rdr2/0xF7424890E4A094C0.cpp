// act_caunc_rustling.ysc @ L28116
int func_713(int iParam0, int iParam1)
{
  int iVar0;

  func_1096(iParam0, 0, 0);
  if (func_1097(iParam0))
  {
    iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      return iVar0;
    }
  }
  return 0;
}