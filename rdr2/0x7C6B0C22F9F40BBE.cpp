// act_bankrobbery01.ysc @ L24684
void func_665(int iParam0, int iParam1)
{
  int iVar0;

  if (!PED::DOES_GROUP_EXIST(iParam0))
  {
    return;
  }
  iVar0 = PED::_GET_GROUP_FORMATION(iParam0);
  if (iVar0 != iParam1)
  {
    PED::SET_GROUP_FORMATION(iParam0, iParam1);
  }
}